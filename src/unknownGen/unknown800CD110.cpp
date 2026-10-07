#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void PADControlMotor(void *);
}
extern "C" {
void fn_800CD110(int p0){
 PADControlMotor((void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+36));
}
}
#pragma pop
