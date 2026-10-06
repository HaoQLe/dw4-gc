#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B84C0(void *,void *);
extern char lbl_804EEB78[];
}
extern "C" {
void *fn_803B8260(int p0){
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EEB78;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
 fn_803B84C0((void *)p0,lbl_804EEB78);
 return (void *)p0;
}
}
#pragma pop
