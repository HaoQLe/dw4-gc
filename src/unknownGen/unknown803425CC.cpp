#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_8034272C();
extern char lbl_804E3D00[];
extern char lbl_804E3D04[];
extern char lbl_804E3D08[];
extern char lbl_804E3D0C[];
extern void *lbl_80536728;
extern void *lbl_80536730;
}
extern "C" {
void fn_803425CC(){
 void *meta=lbl_80536728;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D00,0x1);
 fn_800659C0(meta,lbl_804E3D04,lbl_804E3D08,lbl_804E3D0C,field);
}
void *fn_8034264C(void *object){
 fn_8034272C();
 return fn_8006546C(lbl_80536730,object);
}
void *fn_8034268C(){
 if(!lbl_80536730 || !(reinterpret_cast<unsigned int *>(lbl_80536730)[0x24/4]&4)) fn_8034272C();
 return lbl_80536730;
}
}
#pragma pop
