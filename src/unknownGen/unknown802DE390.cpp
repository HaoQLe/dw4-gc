#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802DE5E0();
extern char lbl_8041CA68[];
extern char lbl_804D25C0[];
extern char lbl_804D25C4[];
extern void *lbl_805354C0;
extern void *lbl_805354C4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DE390(){
 if(!lbl_805354C0) lbl_805354C0=fn_800635C8(lbl_8041CA68,lbl_804D25C0,lbl_804D25C4,0x1);
 return lbl_805354C0;
}
void *fn_802DE3F0(void *object){
 fn_802DE5E0();
 return fn_8006546C(lbl_805354C4,object);
}
void *fn_802DE430(){
 if(!lbl_805354C4) lbl_805354C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805354C4;
}
void *fn_802DE484(){
 if(!lbl_805354C4 || !(reinterpret_cast<unsigned int *>(lbl_805354C4)[0x24/4]&4)) fn_802DE5E0();
 return lbl_805354C4;
}
}
#pragma pop
