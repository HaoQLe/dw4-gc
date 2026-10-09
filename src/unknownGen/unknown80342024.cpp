#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_803422BC();
extern char lbl_80453438[];
extern char lbl_804E3CA8[];
extern char lbl_804E3CB8[];
extern void *lbl_80536714;
extern void *lbl_80536718;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80342024(){
 if(!lbl_80536714) lbl_80536714=fn_800635C8(lbl_80453438,lbl_804E3CA8,lbl_804E3CB8,0x4);
 return lbl_80536714;
}
void *fn_80342084(void *object){
 fn_803422BC();
 return fn_8006546C(lbl_80536718,object);
}
void *fn_803420C4(){
 if(!lbl_80536718) lbl_80536718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536718;
}
void *beNDMWLoadCtrl2_getMeta(){
 if(!lbl_80536718 || !(reinterpret_cast<unsigned int *>(lbl_80536718)[0x24/4]&4)) fn_803422BC();
 return lbl_80536718;
}
}
#pragma pop
