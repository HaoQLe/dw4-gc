#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual134(void *,void *);
void igGamecubeVisualContext_virtual148(void *,void *,void *);
void igGamecubeVisualContext_virtual150(void *,void *,void *);
void igGamecubeVisualContext_virtual158(void *,void *,void *);
void igGamecubeVisualContext_virtual160(void *,void *,void *);
void igGamecubeVisualContext_virtual168(void *,void *,void *);
void igGamecubeVisualContext_virtual170(void *,void *,float);
void igGamecubeVisualContext_virtual178(void *,void *,float);
void igGamecubeVisualContext_virtual180(void *,void *,void *);
}
extern "C" {
void igLightAttr_virtual60(int p0,int p1){
 void *value0;
 void *value8;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 float value5;
 float value6;
 void *value7;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)(int)value0==-1){
  value8=igGamecubeVisualContext_virtual134((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value8;
  if((unsigned int)p1!=0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+140);
  if((value2&&(value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)))){
   fn_80066E1C(value2);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=(void *)p1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=1;
 }
 if((!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+145)||(value4=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144),value4))){
  igGamecubeVisualContext_virtual150((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+32));
  igGamecubeVisualContext_virtual148((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+48));
  igGamecubeVisualContext_virtual158((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+64));
  switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  case 1:
   igGamecubeVisualContext_virtual180((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+100));
   break;
  case 2:
   value5=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+96);
   igGamecubeVisualContext_virtual170((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),value5);
   value6=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+92);
   igGamecubeVisualContext_virtual178((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),value6);
   igGamecubeVisualContext_virtual180((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+100));
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=0;
 }
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 switch((int)(int)value7){
 case 0:
  igGamecubeVisualContext_virtual168((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+80));
  return;
 case 1:
  igGamecubeVisualContext_virtual160((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+20));
  return;
 case 2:
  igGamecubeVisualContext_virtual168((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+80));
  igGamecubeVisualContext_virtual160((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+20));
  return;
 }
}
}
#pragma pop
