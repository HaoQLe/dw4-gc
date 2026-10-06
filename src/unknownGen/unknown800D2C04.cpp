#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D2C30(void *);
}
extern "C" {
int fn_800D2C04(){return 12;}
void fn_800D2C0C(int p0){
 fn_800D2C30(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
