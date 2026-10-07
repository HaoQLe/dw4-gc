#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801246A0();
}
extern "C" {
void *fn_80125178(){return fn_801246A0();}
void fn_80125198(){}
int fn_8012519C(){return 0;}
float fn_801251A4(int p0,int p1){
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)=(value0*value1);
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)=(value0*value2);
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)=(value0*value3);
 return value0;
}
}
#pragma pop
