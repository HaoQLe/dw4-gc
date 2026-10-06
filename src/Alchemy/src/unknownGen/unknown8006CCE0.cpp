#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80063B1C();
void fn_800667D0();
void fn_800691E8(void *,int);
}
extern "C" {
void *fn_8006CCE0(){return fn_80063B1C();}
unsigned char fn_8006CD00(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+52);}
int fn_8006CD08(){return 4;}
int fn_8006CD10(){return 1;}
void fn_8006CD18(int p0){
 fn_800667D0();
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),256);
}
}
#pragma pop
