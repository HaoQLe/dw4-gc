#include <unknownGen.h>
#include <meta/igGamecubeController.h>
#pragma push
#pragma auto_inline off
extern "C" {
void PADControlMotor(void *);
}
extern "C" {
void igGamecubeController_virtual9C(int p0){
 PADControlMotor((void *)(int)reinterpret_cast<Meta::igGamecubeController *>((void *)p0)->_channel);
}
}
#pragma pop
