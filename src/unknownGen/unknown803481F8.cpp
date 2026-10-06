#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F667C(void *);
extern void *lbl_80535584;
extern void *lbl_80535FD4;
}
extern "C" {
void *fn_803481F8(){return lbl_80535FD4;}
void fn_80348208(){}
void fn_8034820C(){}
void fn_80348210(){}
void fn_80348214(int p0){
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80535584);
 fn_802F667C(value0);
}
}
#pragma pop
