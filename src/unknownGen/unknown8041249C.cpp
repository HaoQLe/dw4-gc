#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
void fn_80412874(void *);
extern char lbl_8055C960[];
}
struct UnknownGenL804124B0_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void igPickMode_virtual70(int p0,int p1,int p2,float f0,float f1){
 if((unsigned short)p2){
  return;
 }
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+180)=f0;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+184)=f1;
}
void igPickMode_virtual6C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 UnknownGenL804124B0_8 local0;
 if((unsigned char)p2){
  if((int)p1==0){
   fn_80412874((void *)p0);
  } else {
   if((int)p1==1){
    value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+240);
    if(value1){
     value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
     *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
     if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
      fn_80066E1C(value1);
     }
    }
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+240)=(void *)0;
    local0.m08=(int)2;
    local0.m0C=(int)0;
    local0.m10=(int)(int)*reinterpret_cast<void **>((lbl_8055C960+0));
    fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76),&local0);
    return;
   } else {
    return;
   }
  }
  return;
 } else {
  return;
 }
}
void igPickMode_virtual74(int p0,int p1,int p2,int p3,int p4,int p5){
 if((int)p2==14){
  if((unsigned char)p3){
   fn_80412874((void *)p0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
