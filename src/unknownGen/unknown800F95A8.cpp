#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeVisualContext_virtual3E0(int p0,int p1){
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1240);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1244);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)=value1;
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1248);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)=value2;
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1252);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+12)=value3;
 return (void *)p0;
}
void *igGamecubeVisualContext_virtual3E4(void *p0,float f0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>(p0)+1256)=f0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x8);
 return p0;
}
}
#pragma pop
