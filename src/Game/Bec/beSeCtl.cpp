// Gap::Bec::beSeCtl: sound effects tied to actions. A message names an info (an action set) and an action;
// the action's sound is sent to the model controller with its delay.
#include <meta/beSeCtl.h>
#include <meta/beSeData.h>
#include <meta/beSeDataList.h>
#include <meta/beSeInfoData.h>
#include <meta/beBaseInfo.h>
#include <meta/beBaseInfoRam.h>
#include <meta/beBaseInfoDataList.h>
#include <meta/beMessengerWork.h>
#include <game/List.h>

using namespace Meta;

// The original calls every function of this file; none is inlined.
#pragma auto_inline off

extern "C" {
int strcmp(const char *, const char *);
extern const char lbl_80567350[1];   // ""
void fn_80305344(void *messenger, const char *target, const char *infoName, int ramNo);   // a request to target
void fn_80306FDC(void *messenger, const char *value);   // appends a string argument
void fn_80306B28(void *messenger, double value);         // appends a float argument
void fn_80305A28(void *messenger, const char *command); // sends the request
}

// An object's name, or "" when it has none.
static inline const char *nameOf(igNamedObject *object) { return object->_name ? object->_name : lbl_80567350; }

extern "C" {

// Sends the sound of the action a message names ("SETSOUND" to "MODELCTRL"), with its delay.
bool beSeCtl_virtual90(beSeCtl *self, beBaseInfoRam *ram, beMessengerWork *message)
{
    const char *action = message->_message;
    const char *infoName = message->_infoName;
    int found = -1;
    int ramNo = message->_ramNo;
    beBaseInfoDataList *infos = ram->_parentInfo->_dataList;
    for (int i = 0; i < infos->_count; i++) {
        if (strcmp(nameOf(item<igNamedObject>(infos, i)), infoName) == 0) found = i;
    }
    if (found == -1) return true;
    beSeDataList *actions = item<beSeInfoData>(infos, found)->_actionList;
    for (int i = 0; i < actions->_count; i++) {
        beSeData *data = item<beSeData>(actions, i);
        if (strcmp(nameOf(data), action) == 0) {
            long long delay = data->_delay;
            fn_80305344(self->_messenger, "MODELCTRL", infoName, ramNo);
            fn_80306FDC(self->_messenger, data->_sound);
            fn_80306B28(self->_messenger, delay);
            fn_80305A28(self->_messenger, "SETSOUND");
        }
    }
    return true;
}

}
