#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8002A0A8();
void *fn_800607F4(void *);
extern void *lbl_8056174C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80029F84(){
 if(!lbl_8056174C) lbl_8056174C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056174C;
}
void *igMetaObject_getMeta(){
 if(!lbl_8056174C || !(reinterpret_cast<unsigned int *>(lbl_8056174C)[0x24/4]&4)) fn_8002A0A8();
 return lbl_8056174C;
}
}
#pragma pop
