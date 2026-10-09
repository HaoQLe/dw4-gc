#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void fn_8006D534(void *,int,void *,void *,int,int);
void fn_8006DC50(void *,int,void *,void *,int,int);
extern char lbl_804B2F54[];
extern char lbl_804B2F68[];
extern void *lbl_80560B4C;
extern char lbl_80565930[4];
}
extern "C" {
void *fn_80201ADC(){
 void *value0;
 if((int)(int)lbl_80560B4C==-1){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(_arkCore__Q23Gap4Core)+56);
  fn_8006D534(value0,7,lbl_804B2F54,&lbl_80560B4C,256,1);
  fn_8006DC50(value0,7,lbl_804B2F68,lbl_80565930,0,1);
 }
 return lbl_80560B4C;
}
}
#pragma pop
