#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8012E1D8(void *,int);
}
extern "C" {
void igGamecubeVisualContext_virtual2D0(int p0){
 fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+1024),1);
}
void *igGamecubeVisualContext_virtual2CC(int p0,int p1){
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1024);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1028);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)=value1;
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1032);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)=value2;
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1036);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+12)=value3;
 return (void *)p0;
}
}
#pragma pop
