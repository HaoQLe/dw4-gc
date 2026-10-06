#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471384[];
}
extern "C" {
void *fn_8006CC40(int p0){
 fn_800638E0((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471384;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+52)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+53)=0;
 return (void *)p0;
}
}
#pragma pop
