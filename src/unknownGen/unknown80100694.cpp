#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80100694(int p0,int p1,int p2){
 void *value0;
 float value1;
 float value2;
 float value3;
 if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)&0x800000)){
  return (void *)p0;
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+4);
 value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+0);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+0)=value1;
 value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+4);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+4)=value2;
 value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+8)=value3;
 return (void *)(int)((int)value0+(((p1*3)+2)*12));
}
void *fn_801006D4(int p0,int p1){
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)&0x800000)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+4)+(((p1*3)+2)*12));
 }
 return (void *)0;
}
}
#pragma pop
