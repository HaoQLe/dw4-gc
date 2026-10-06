#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80336514();
extern char lbl_80453438[];
extern char lbl_804E23A4[];
extern char lbl_804E23B4[];
extern void *lbl_8053608C;
extern void *lbl_80536090;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033627C(){
 if(!lbl_8053608C) lbl_8053608C=fn_800635C8(lbl_80453438,lbl_804E23A4,lbl_804E23B4,0x4);
 return lbl_8053608C;
}
void *fn_803362DC(void *object){
 fn_80336514();
 return fn_8006546C(lbl_80536090,object);
}
void *fn_8033631C(){
 if(!lbl_80536090) lbl_80536090=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536090;
}
void *fn_80336370(){
 if(!lbl_80536090 || !(reinterpret_cast<unsigned int *>(lbl_80536090)[0x24/4]&4)) fn_80336514();
 return lbl_80536090;
}
}
#pragma pop
