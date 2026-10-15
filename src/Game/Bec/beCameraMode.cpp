// Gap::Bec::beCameraMode: a view mode that drives its view from a camera (0x802F4114..0x802F446C). The camera's
// field of view and planes are copied into the view's igViewModel; with a camera path, the view matrix
// follows the path as time advances. This file holds 0x802F4114..0x802F4268. The per-frame update
// (beCameraMode_virtual78) still comes from its original object and beCameraMode_virtual58 from a generated unit; see
// docs/research/2026-10-09-small-game-classes.md.
#include <meta/beCameraMode.h>
#include <meta/igCamera.h>
#include <meta/igViewModel.h>

using namespace Meta;

// Declaration-only view of the camera's virtual functions (slots start at 0x08; nothing is defined, so no
// vtable is emitted).
class CameraVirtuals {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14();
    virtual void slot18(); virtual void slot1C(); virtual void slot20(); virtual void slot24();
    virtual void slot28(); virtual void slot2C(); virtual void slot30(); virtual void slot34();
    virtual void slot38(); virtual void slot3C(); virtual void slot40(); virtual void slot44();
    virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual void slot58(); virtual void slot5C(); virtual void slot60(); virtual void slot64();
    virtual void slot68(); virtual void slot6C(); virtual void slot70(); virtual void slot74();
    virtual void slot78(); virtual void slot7C(); virtual void slot80(); virtual void slot84();
    virtual void slot88();
    virtual void slot8C();   // called before the camera's values are read
    virtual void slot90();
};

// A change event sent to a model's views: kind 2 with a field identifier (16 bytes on the stack; the last
// word is not set here).
struct ModelEvent {
    int _kind;
    int _unknown04;
    int _field;
    int _unknown0C;
};

extern "C" {
// igViewModel field identifiers for change events (globals filled in elsewhere; the names follow the
// fields they are sent for).
extern int lbl_8055CA84[];   // _hfov
extern int lbl_8055CA88[];   // _nearPlane
extern int lbl_8055CA8C[];   // _farPlane
void fn_8011BFA4(igViewModel *model, ModelEvent *event);    // sends event to the model's views
// This file's constants, shared with beCameraMode_virtual78 (still original code, which refers to them by
// these names).
extern const float lbl_80425320;   // 1000.0f
extern const float lbl_80425324;   // 0.0f
}

static inline void notify(igViewModel *model, int field)
{
    ModelEvent event;
    event._kind = 2;
    event._unknown04 = 0;
    event._field = field;
    fn_8011BFA4(model, &event);
}

extern "C" {

void beCameraMode_virtual80(beCameraMode *self)
{
    if (self->_camera) reinterpret_cast<CameraVirtuals *>(self->_camera)->slot90();
}

// Copies the camera's field of view and planes into the view's model, notifying its views of each.
// A zero near plane becomes a thousandth of the far plane.
void beCameraMode_virtual7C(beCameraMode *self)
{
    if (!self->_camera) return;
    reinterpret_cast<CameraVirtuals *>(self->_camera)->slot8C();
    float farPlane = self->_camera->_farPlane;
    float nearPlane = self->_camera->_nearPlane;
    igViewModel *model = static_cast<igViewModel *>(self->_model);
    model->_hfov = self->_camera->_horizontalFieldOfView;
    notify(model, lbl_8055CA84[0]);
    model->_farPlane = farPlane;
    notify(model, lbl_8055CA8C[0]);
    if (lbl_80425324 == nearPlane) nearPlane = farPlane / lbl_80425320;
    model->_nearPlane = nearPlane;
    notify(model, lbl_8055CA88[0]);
}


}
