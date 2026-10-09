#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80341298();
extern void *lbl_805366BC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80341078(void *object){
 fn_80341298();
 return fn_8006546C(lbl_805366BC,object);
}
void *fn_803410B8(){
 if(!lbl_805366BC) lbl_805366BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805366BC;
}
void *beNDMWLoadIntf2ComMdlCtrl_getMeta(){
 if(!lbl_805366BC || !(reinterpret_cast<unsigned int *>(lbl_805366BC)[0x24/4]&4)) fn_80341298();
 return lbl_805366BC;
}
}
#pragma pop
