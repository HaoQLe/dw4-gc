#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void PADInit();
void fn_800667D0();
}
extern "C" {
void igGamecubeControllerManager_virtual2C(){
 fn_800667D0();
 PADInit();
}
}
#pragma pop
