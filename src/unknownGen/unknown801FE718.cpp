#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801FC6D8();
void fn_801FD040(void *);
void fn_801FE348(void *,void *);
void fn_801FE5E4(void *,void *);
}
extern "C" {
void fn_801FE718(int p0,int p1){
 void *value0;
 void *value1;
 float value2;
 float value3;
 float value4;
 void *value5;
 float value6;
 float value7;
 float value8;
 void *value9;
 float value10;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104);
 if((int)(int)value0==0){
  fn_801FC6D8();
  fn_801FD040((void *)p0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+104)=(void *)1;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+200);
 if(value1){
  value2=*reinterpret_cast<float *>(reinterpret_cast<char *>(value1)+116);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+32)=value2;
  value3=*reinterpret_cast<float *>(reinterpret_cast<char *>(value1)+120);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+36)=value3;
  value4=*reinterpret_cast<float *>(reinterpret_cast<char *>(value1)+124);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+40)=value4;
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+200);
  value6=*reinterpret_cast<float *>(reinterpret_cast<char *>(value5)+128);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+44)=value6;
  value7=*reinterpret_cast<float *>(reinterpret_cast<char *>(value5)+132);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+48)=value7;
  value8=*reinterpret_cast<float *>(reinterpret_cast<char *>(value5)+136);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+52)=value8;
  value9=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+200);
  value10=*reinterpret_cast<float *>(reinterpret_cast<char *>(value9)+96);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+56)=value10;
 }
 fn_801FE5E4((void *)p0,(reinterpret_cast<char *>((void *)p1)+164));
 fn_801FE348((void *)p0,(void *)p1);
}
}
#pragma pop
