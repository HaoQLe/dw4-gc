#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8026C2C4(void *,void *);
void fn_80272E9C(void *,int);
void *fn_80273120(void *,int);
void fn_802734C8(void *,void *,int);
void fn_802737A0(void *);
void fn_802739F0(void *,int);
extern void *lbl_80566040;
}
extern "C" {
void *fn_8026C980(int p0){
 void *value0;
 void *value1;
 void *value2;
 if((lbl_80566040&&(value0=fn_80273120((void *)p0,1),value1=fn_8026C2C4(lbl_80566040,value0),(int)(int)value1!=0))){
  fn_802734C8((void *)p0,value1,0);
  value2=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+28))+68))((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+28));
  return value2;
 } else {
  fn_802737A0((void *)p0);
  fn_80272E9C((void *)p0,1);
  fn_80272E9C((void *)p0,3);
  fn_802739F0((void *)p0,-3);
  return (void *)0;
 }
}
}
#pragma pop
