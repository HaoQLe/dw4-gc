#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8012BE90(void *,void *,void *,float);
void *fn_8012C15C(void *,void *,void *,float);
}
extern "C" {
void *fn_80209858(int p0,int p1,int p2,int p3,float f0){
 void *value0;
 void *value1;
 float value2;
 float value3;
 float value4;
 float value5;
 void *value6;
 void *value7;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+74);
 if(!value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16);
  value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p2<<4)))+0);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)=value2;
  value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p2<<4)))+4);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)=value3;
  value4=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p2<<4)))+8);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)=value4;
  value5=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p2<<4)))+12);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+12)=value5;
  return (void *)(int)((int)value1+(p2<<4));
 } else {
  if((unsigned int)(int)value0==3){
   value6=fn_8012BE90((void *)p1,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p2<<4)),(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p3<<4)),f0);
   return value6;
  } else {
   value7=fn_8012C15C((void *)p1,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p2<<4)),(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p3<<4)),f0);
   return value7;
  }
 }
}
}
#pragma pop
