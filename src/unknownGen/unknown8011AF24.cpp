#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_80563700;
}
struct UnknownGenL8011AF24_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_8011AF24(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 UnknownGenL8011AF24_8 local0;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+168);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+168)=(void *)p1;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_80563700;
 fn_8011BFA4((void *)p0,&local0);
}
}
#pragma pop
