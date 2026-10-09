#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80408110();
extern void *lbl_8055CA78;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80407FB4(){
 if(!lbl_8055CA78) lbl_8055CA78=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055CA78;
}
void *igViewModel_getMeta(){
 if(!lbl_8055CA78 || !(reinterpret_cast<unsigned int *>(lbl_8055CA78)[0x24/4]&4)) fn_80408110();
 return lbl_8055CA78;
}
}
#pragma pop
