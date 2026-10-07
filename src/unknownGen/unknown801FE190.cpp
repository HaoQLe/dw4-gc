#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D5190(void *,void *);
void fn_801D524C(void *,void *);
void fn_801FE41C(void *,void *);
extern void *lbl_80565810;
extern void *lbl_8056581C;
extern void *lbl_80565824;
extern void *lbl_80565848;
extern void *lbl_80565850;
extern void *lbl_80565858;
extern void *lbl_80565860;
}
extern "C" {
void fn_801FE190(int p0,int p1,int p2){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+52);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+148)){
  fn_801FE41C((void *)p0,(void *)p1);
 }
 fn_801D5190(value0,lbl_80565810);
 fn_801D5190(value0,(void *)p2);
 fn_801D5190(value0,lbl_80565848);
 fn_801D5190(value0,lbl_80565850);
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+144));
 fn_801D5190(value0,lbl_80565858);
 fn_801D5190(value0,lbl_80565824);
 fn_801D5190(value0,lbl_8056581C);
 fn_801D5190(value0,lbl_80565860);
 fn_801FE41C((void *)p0,(void *)p1);
 fn_801D524C(value0,lbl_80565860);
 fn_801D524C(value0,lbl_8056581C);
 fn_801D524C(value0,lbl_80565824);
 fn_801D524C(value0,lbl_80565858);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+144));
 fn_801D524C(value0,lbl_80565850);
 fn_801D524C(value0,lbl_80565848);
 fn_801D524C(value0,(void *)p2);
 fn_801D524C(value0,lbl_80565810);
}
}
#pragma pop
