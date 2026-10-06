#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058B34(void *);
extern char lbl_80473928[];
}
extern "C" {
void *fn_8008486C(int p0){
 fn_80058B34((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473928;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+176)=(void *)0;
 return (void *)p0;
}
}
#pragma pop
