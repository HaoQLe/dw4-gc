#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80162C28(void *,void *);
void *fn_8017BA20(void *,void *);
void fn_8017BAFC(void *,void *,int);
void *fn_8017BBDC(void *,void *);
extern char lbl_804A0B5C[];
}
extern "C" {
void fn_80162D28(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 value1=fn_8017BA20(value0,lbl_804A0B5C);
 value2=fn_8017BBDC(value0,lbl_804A0B5C);
 if(!(unsigned char)(int)value1){
  fn_80162C28(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+40),value2);
  fn_8017BAFC(value0,lbl_804A0B5C,1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
