#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802B7F64();
extern char lbl_8041CA68[];
extern char lbl_804CF448[];
extern char lbl_804CF450[];
extern void *lbl_8053471C;
extern void *lbl_80534720;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B7D14(){
 if(!lbl_8053471C) lbl_8053471C=fn_800635C8(lbl_8041CA68,lbl_804CF448,lbl_804CF450,0x2);
 return lbl_8053471C;
}
void *fn_802B7D74(void *object){
 fn_802B7F64();
 return fn_8006546C(lbl_80534720,object);
}
void *fn_802B7DB4(){
 if(!lbl_80534720) lbl_80534720=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534720;
}
void *fn_802B7E08(){
 if(!lbl_80534720 || !(reinterpret_cast<unsigned int *>(lbl_80534720)[0x24/4]&4)) fn_802B7F64();
 return lbl_80534720;
}
}
#pragma pop
