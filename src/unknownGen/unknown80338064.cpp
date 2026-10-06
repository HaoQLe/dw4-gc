#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_803382B4();
extern char lbl_80453438[];
extern char lbl_804E2670[];
extern char lbl_804E269C[];
extern void *lbl_8053614C;
extern void *lbl_80536150;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80338064(){
 if(!lbl_8053614C) lbl_8053614C=fn_800635C8(lbl_80453438,lbl_804E2670,lbl_804E269C,0xB);
 return lbl_8053614C;
}
void *fn_803380C4(void *object){
 fn_803382B4();
 return fn_8006546C(lbl_80536150,object);
}
void *fn_80338104(){
 if(!lbl_80536150) lbl_80536150=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536150;
}
void *fn_80338158(){
 if(!lbl_80536150 || !(reinterpret_cast<unsigned int *>(lbl_80536150)[0x24/4]&4)) fn_803382B4();
 return lbl_80536150;
}
}
#pragma pop
