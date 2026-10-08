#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305344(void *,void *,void *,void *);
void fn_80305A28(void *,void *);
void *fn_8030690C(void *);
void *fn_80306A1C(void *,int);
void fn_80306FDC(void *,void *);
extern char lbl_80424B3C[];
extern char lbl_80424D00[];
extern char lbl_80535904[];
}
extern "C" {
void *fn_802EE144(int p0,int p1,int p2){
 void *value0;
 void *value1;
 fn_80305344(*reinterpret_cast<void **>((lbl_80535904+0)),lbl_80424B3C,(void *)p0,(void *)p1);
 fn_80306FDC(*reinterpret_cast<void **>((lbl_80535904+0)),(void *)p2);
 fn_80305A28(*reinterpret_cast<void **>((lbl_80535904+0)),lbl_80424D00);
 value0=fn_8030690C(*reinterpret_cast<void **>((lbl_80535904+0)));
 if((int)(int)value0==1){
  value1=fn_80306A1C(*reinterpret_cast<void **>((lbl_80535904+0)),0);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
