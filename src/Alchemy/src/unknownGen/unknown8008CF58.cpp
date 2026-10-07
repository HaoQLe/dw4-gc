#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
extern void *lbl_8055DDB8;
void memset(void *,int,int);
}
extern "C" {
void fn_8008CF58(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=lbl_8055DDB8;
 memset((reinterpret_cast<char *>((void *)p0)+144),0,128);
}
}
#pragma pop
