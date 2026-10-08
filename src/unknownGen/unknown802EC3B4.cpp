#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802EB9C4(void *);
void *fn_8031F3CC(void *,void *);
extern char lbl_80424A78[];
}
extern "C" {
void *fn_802EC3B4(int p0){
 void *value0=fn_802EB9C4((reinterpret_cast<char *>((void *)p0)+1));
 void *value1=fn_8031F3CC(value0,lbl_80424A78);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12);
}
}
#pragma pop
