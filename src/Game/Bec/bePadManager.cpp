// Gap::Bec::bePadManager: reads the controllers each frame into five bePadData (0x80311CC0..0x80312190).
// Pads 0..3 follow controller ports 0..3; pad 4 is returned while input is disabled.
#include <meta/bePadManager.h>
#include <meta/bePadData.h>
#include <meta/bePadDataList.h>
#include <meta/beSystem.h>
#include <meta/igInsightCore.h>
#include <meta/igEventDispatcher.h>
#include <meta/igControllerManager.h>
#include <meta/igControllerList.h>
#include <meta/igViewerSceneInfoManager.h>
#include <game/Ref.h>
#include <game/Pool.h>

using namespace Meta;

// A 2D vector, passed by value (as in bePadData.cpp).
struct igVec2f {
    float x, y;
    igVec2f() {}
    igVec2f(float x_, float y_) : x(x_), y(y_) {}
    igVec2f(const igVec2f &o) : x(o.x), y(o.y) {}
};

// Declaration-only view of a controller's virtual functions (slots start at 0x08; nothing is defined, so
// no vtable is emitted).
class Controller {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14();
    virtual void slot18(); virtual void slot1C(); virtual void slot20(); virtual void slot24();
    virtual void slot28(); virtual void slot2C(); virtual void slot30(); virtual void slot34();
    virtual void slot38(); virtual void slot3C(); virtual void slot40(); virtual void slot44();
    virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual void slot58(); virtual void slot5C(); virtual void slot60(); virtual void slot64();
    virtual void slot68(); virtual void slot6C(); virtual void slot70(); virtual void slot74();
    virtual int buttons();                                  // 0x78: the pressed button bits
    virtual void stick(int index, float *x, float *y);      // 0x7C: stick 0 (left) or 1 (right)
    virtual unsigned short port();                          // 0x80
    virtual void slot84();
    virtual bool isConnected();                             // 0x88
};

extern "C" {
void fn_8028A398(igInsightCore *insight, bePadManager *manager);   // registers the manager
void fn_8028A400(igInsightCore *insight, bePadManager *manager);   // unregisters the manager
igObject *fn_8028A730(igInsightCore *insight, void *meta);          // the manager of a class
extern char lbl_805346A8[];          // beSystem's metaobject pointer
extern char lbl_8055C788[];          // igViewerSceneInfoManager's metaobject pointer
extern char lbl_80562258[];          // this file's default pool source (type unknown)
extern char lbl_80534AAC[];          // bePadManager's metaobject pointer
bePadData *fn_802C2708(void *pool);  // creates a bePadData in pool
void fn_80069128(void *list, void *object);   // appends to an object list
void fn_80118518(igEventDispatcher *, void *receiver, void *windowResizeReceiver);
void fn_801184C4(igEventDispatcher *, void *receiver);
void fn_8011853C(igEventDispatcher *, void *receiver, void *windowResizeReceiver);
void fn_801184EC(igEventDispatcher *, void *receiver);
void fn_8011B7BC(void *hotKeyReceiver, int button);   // removes or unbinds the hot keys of a controller button
void fn_8040E6C0(igObject *viewerManager);
void bePadData_setButtons(bePadData *pad, int buttons);
void bePadData_setLStick(bePadData *pad, igVec2f stick);
void bePadData_setRStick(bePadData *pad, igVec2f stick);
}

static inline igControllerList *controllersOf(igInsightCore *insight)
{
    return insight->_dispatcher->_controllerManager->_controllers;
}

static inline bePadData *padAt(bePadDataList *list, int i) { return static_cast<bePadData **>(list->_data)[i]; }

extern "C" {

void bePadManager_virtual5C(bePadManager *self)
{
    fn_8028A398(self->_insight, self);
}

void bePadManager_virtual60(bePadManager *self)
{
    fn_8028A400(self->_insight, self);
}

// Finds the system, creates the five pads, connects the keyboard receiver and removes the viewer's
// controller-button hot keys (fn_8011B7BC removes or unbinds the bindings of one button).
void bePadManager_virtual64(bePadManager *self)
{
    beSystem *system = static_cast<beSystem *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(lbl_805346A8)));
    if (system) addRef(system);
    if (self->_system) release(self->_system);
    self->_system = system;
    for (int i = 0; i < 5; i++) {
        Ref<bePadData> pad(fn_802C2708(poolFor(self, lbl_80562258)), Ref<bePadData>::adopt);
        fn_80069128(self->_padList, pad);
    }
    igEventDispatcher *dispatcher = self->_insight->_dispatcher;
    fn_80118518(dispatcher, self->_kbReceiver, self->_insight->_windowResizeReceiver);
    fn_801184C4(dispatcher, self->_kbReceiver);
    igHotKeyEventReceiver *hotKeys;
    igViewerSceneInfoManager *viewer = static_cast<igViewerSceneInfoManager *>(
        fn_8028A730(self->_insight, *reinterpret_cast<void **>(lbl_8055C788)));
    hotKeys = viewer->_hotKeyReceiver;
    fn_8011B7BC(hotKeys, 15);
    fn_8011B7BC(hotKeys, 3);
    fn_8011B7BC(hotKeys, 0);
    fn_8011B7BC(hotKeys, 10);
    fn_8011B7BC(hotKeys, 11);
    fn_8011B7BC(hotKeys, 1);
    fn_8011B7BC(hotKeys, 2);
    fn_8011B7BC(hotKeys, 12);
    fn_8040E6C0(viewer);
}

// Disconnects the keyboard receiver.
void bePadManager_virtual68(bePadManager *self)
{
    igEventDispatcher *dispatcher = self->_insight->_dispatcher;
    fn_8011853C(dispatcher, self->_kbReceiver, self->_insight->_windowResizeReceiver);
    fn_801184EC(dispatcher, self->_kbReceiver);
}

int bePadManager_virtual6C(bePadManager *) { return 0; }

void bePadManager_virtual70(bePadManager *) {}

// Each frame (unless the system skips this frame): reads every controller on ports 0..3 into its pad.
void bePadManager_virtual74(bePadManager *self)
{
    igVec2f stick;
    if (self->_system->_isFrameSkip) return;
    igControllerList *controllers = controllersOf(self->_insight);
    for (int i = 0; i < controllers->_count; i++) {
        Controller *controller = static_cast<Controller **>(controllers->_data)[i];
        unsigned short port = controller->port();
        bool connected = controller->isConnected();
        if (port >= 4) continue;
        bePadData *pad = padAt(self->_padList, port);
        pad->_isConnect = connected;
        if (connected) {
            controller->stick(0, &stick.x, &stick.y);
            bePadData_setLStick(pad, stick);
            controller->stick(1, &stick.x, &stick.y);
            bePadData_setRStick(pad, stick);
            int buttons = controller->buttons();
            bePadData_setButtons(pad, buttons);
        } else {
            bePadData_setLStick(pad, igVec2f(0.0f, 0.0f));
            bePadData_setRStick(pad, igVec2f(0.0f, 0.0f));
            bePadData_setButtons(pad, 0);
        }
    }
}

// The pad for a player: pad 4 while input is disabled or for players beyond 3.
bePadData *bePadManager_getPad(bePadManager *self, int player)
{
    if (self->_isPadDisable) return padAt(self->_padList, 4);
    if (player < 4) return padAt(self->_padList, player);
    return padAt(self->_padList, 4);
}

// The class's metaobject.
void *bePadManager_virtual58(bePadManager *)
{
    return *reinterpret_cast<void **>(lbl_80534AAC);
}

}
