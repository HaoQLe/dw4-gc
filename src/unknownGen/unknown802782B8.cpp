#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278240(void *,void *,void *);
extern char lbl_805610A0[5];
}
struct UnknownGenL802782B8_8 {
 int m08;
 int m0C;
 char pad10[84];
 int m64;
};
struct UnknownGenL802782FC_8 {
 int m08;
 char pad0C[88];
 int m64;
};
extern "C" {
void fn_802782B8(int p0,int p1,int p2,int p3){
 UnknownGenL802782B8_8 local0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)!=0){
  local0.m64=(int)p1;
  local0.m0C=(int)p2;
  local0.m08=(int)(int)lbl_805610A0;
  fn_80278240((void *)p0,&local0,(void *)p3);
  return;
 } else {
  return;
 }
}
void fn_802782FC(int p0,int p1,int p2,int p3){
 void *value0;
 UnknownGenL802782FC_8 local0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)!=0){
  local0.m64=(int)p1;
  local0.m08=(int)p3;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(void *)0;
  fn_80278240((void *)p0,&local0,(void *)p2);
  return;
 } else {
  return;
 }
}
}
#pragma pop
