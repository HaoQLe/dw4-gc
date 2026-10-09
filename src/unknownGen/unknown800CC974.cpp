#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igGamecubeController_virtual7C(int p0,int p1,int p2,int p3){
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)(p0+((p1<<2)&0x3FFFC)))+16);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+0)=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)(p0+((p1<<2)&0x3FFFC)))+24);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p3)+0)=value1;
}
}
#pragma pop
