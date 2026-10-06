#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802EB9C4(int);
void *fn_8031F3CC(void *,void *);
extern char lbl_80424A08[];
}
extern "C" {
void fn_802EBB80(int p0){
 void *value0=fn_802EB9C4(0);
 void *value1=fn_8031F3CC(value0,lbl_80424A08);
 *reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12)=(void *)p0;
}
}
#pragma pop
