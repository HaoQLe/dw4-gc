#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80325A88();
extern void *lbl_80535C78;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80325974(){
 if(!lbl_80535C78) lbl_80535C78=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535C78;
}
void *beNDMWWindowList_getMeta(){
 if(!lbl_80535C78 || !(reinterpret_cast<unsigned int *>(lbl_80535C78)[0x24/4]&4)) fn_80325A88();
 return lbl_80535C78;
}
}
#pragma pop
