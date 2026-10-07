#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
}
extern "C" {
unsigned char fn_8008D37C(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+112);}
int fn_8008D384(){return 0;}
void *fn_8008D38C(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
int fn_8008D398(){return 0;}
int fn_8008D3A0(){return 1;}
}
#pragma pop
