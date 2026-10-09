#include <unknownGen.h>
#include <meta/igGamecubeVertexArray1_1.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeVertexArray1_1_virtual9C(int p0,int p1,int p2){
 void *value0;
 float value1;
 float value2;
 float value3;
 if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)&0x800000)){
  return (void *)p0;
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata)+4);
 value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+0);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+0)=value1;
 value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+4);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+4)=value2;
 value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value0+(((p1*3)+2)*12)))+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+8)=value3;
 return (void *)(int)((int)value0+(((p1*3)+2)*12));
}
void *igGamecubeVertexArray1_1_virtualA0(int p0,int p1){
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)&0x800000)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata)+4)+(((p1*3)+2)*12));
 }
 return (void *)0;
}
}
#pragma pop
