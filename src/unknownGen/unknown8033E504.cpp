#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_8033E79C();
extern char lbl_80453438[];
extern char lbl_804E3514[];
extern char lbl_804E3534[];
extern void *lbl_80536500;
extern void *lbl_80536504;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033E504(){
 if(!lbl_80536500) lbl_80536500=fn_800635C8(lbl_80453438,lbl_804E3514,lbl_804E3534,0x8);
 return lbl_80536500;
}
void *fn_8033E564(void *object){
 fn_8033E79C();
 return fn_8006546C(lbl_80536504,object);
}
void *fn_8033E5A4(){
 if(!lbl_80536504) lbl_80536504=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536504;
}
void *fn_8033E5F8(){
 if(!lbl_80536504 || !(reinterpret_cast<unsigned int *>(lbl_80536504)[0x24/4]&4)) fn_8033E79C();
 return lbl_80536504;
}
}
#pragma pop
