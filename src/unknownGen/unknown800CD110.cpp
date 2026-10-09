#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void PADControlMotor(void *);
}
extern "C" {
void igGamecubeController_virtual9C(int p0){
 PADControlMotor((void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+36));
}
}
#pragma pop
