#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void AXSetVoiceSrcRatio(void *,float);
void MIXSetSPan(void *,void *);
}
extern "C" {
void fn_800CA57C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 if(value1){
  MIXSetSPan(value1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+57));
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  if(value2){
   MIXSetSPan(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+32),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+57));
   return;
  } else {
   return;
  }
 }
}
void fn_800CA5D4(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 float value2;
 void *value3;
 float value4;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 if(value1){
  value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+44);
  AXSetVoiceSrcRatio(value1,value2);
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  if(value3){
   value4=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+44);
   AXSetVoiceSrcRatio(*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+32),value4);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
