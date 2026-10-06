#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802B7220();
extern void *lbl_80534698;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B6FC0(void *object){
 fn_802B7220();
 return fn_8006546C(lbl_80534698,object);
}
void *fn_802B7000(){
 if(!lbl_80534698) lbl_80534698=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534698;
}
void *fn_802B7054(){
 if(!lbl_80534698 || !(reinterpret_cast<unsigned int *>(lbl_80534698)[0x24/4]&4)) fn_802B7220();
 return lbl_80534698;
}
}
#pragma pop
