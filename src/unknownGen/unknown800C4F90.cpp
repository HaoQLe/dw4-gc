#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
}
extern "C" {
void fn_800C4F90(int p0,int p1){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+76)=(short)(int)(void *)p1;
 fn_800BCB6C((void *)p0,(void *)p1);
}
}
#pragma pop
