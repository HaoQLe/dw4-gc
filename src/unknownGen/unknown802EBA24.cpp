#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802EB9C4(void *);
void *fn_8031F42C(void *,void *);
extern char lbl_804249DC[];
}
extern "C" {
void *fn_802EBA24(int p0){
 void *value0=fn_802EB9C4((reinterpret_cast<char *>((void *)p0)+1));
 void *value1=fn_8031F42C(value0,lbl_804249DC);
 return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+12);
}
}
#pragma pop
