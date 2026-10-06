#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802D5648();
extern void *lbl_805351E4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D5458(void *object){
 fn_802D5648();
 return fn_8006546C(lbl_805351E4,object);
}
void *fn_802D5498(){
 if(!lbl_805351E4) lbl_805351E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805351E4;
}
void *fn_802D54EC(){
 if(!lbl_805351E4 || !(reinterpret_cast<unsigned int *>(lbl_805351E4)[0x24/4]&4)) fn_802D5648();
 return lbl_805351E4;
}
}
#pragma pop
