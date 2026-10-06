#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
extern void *lbl_80534AAC;
extern void *lbl_80536178;
}
extern "C" {
void *fn_8034E6CC(){return lbl_80536178;}
void fn_8034E6DC(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534AAC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value0;
}
}
#pragma pop
