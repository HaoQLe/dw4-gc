#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800F6588(void *,void *);
void fn_800F6940(void *,void *,void *);
void fn_800F6984(void *,void *,void *);
void fn_800F69C8(void *,void *,void *);
void fn_800F6A0C(void *,void *,void *);
void fn_800F6AD8(void *,void *,void *);
void fn_800F6B5C(void *,void *,float);
void fn_800F6B84(void *,void *,float);
void fn_800F6BB4(void *,void *,void *);
}
extern "C" {
void fn_800C0914(int p0,int p1){
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
  value8=fn_800F6588((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
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
  fn_800F69C8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+32));
  fn_800F6940((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+48));
  fn_800F6984((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+64));
  switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  case 1:
   fn_800F6BB4((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+100));
   break;
  case 2:
   value5=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+96);
   fn_800F6B5C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),value5);
   value6=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+92);
   fn_800F6B84((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),value6);
   fn_800F6BB4((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+100));
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=0;
 }
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 switch((int)(int)value7){
 case 0:
  fn_800F6A0C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+80));
  return;
 case 1:
  fn_800F6AD8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+20));
  return;
 case 2:
  fn_800F6A0C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+80));
  fn_800F6AD8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>((void *)p0)+20));
  return;
 }
}
}
#pragma pop
