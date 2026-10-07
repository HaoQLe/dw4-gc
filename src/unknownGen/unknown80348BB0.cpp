#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305344(void *,void *,void *,void *);
void fn_80305A28(void *,void *);
void fn_80306C84(void *,void *);
void *fn_80306FDC(void *,void *);
extern char lbl_80456808[];
}
struct UnknownGenL80348BB0_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void fn_80348BB0(int p0,int p1,int p2,int p3,int p4){
 float value0;
 float value1;
 float value2;
 UnknownGenL80348BB0_8 local0;
 fn_80305344(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80456808,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
 if((unsigned int)p3!=0){
  value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p3)+0);
  local0.m08=value0;
  value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p3)+4);
  local0.m0C=value1;
  value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p3)+8);
  local0.m10=value2;
  fn_80306C84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
 }
 if((unsigned int)p4!=0){
  fn_80306FDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p4);
 }
 fn_80305A28(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p2);
}
}
#pragma pop
