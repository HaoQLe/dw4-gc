#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566CA0[4];
extern char lbl_80566CA4[4];
}
extern "C" {
void *fn_80208C98(int p0,int p1,float f0){
 float value0;
 float value1;
 value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+12);
 if((((value0*value1+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+0)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+4)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)))))<*reinterpret_cast<float *>((lbl_80566CA0+0)))||((*reinterpret_cast<float *>((lbl_80566CA4+0))-(value0*value1+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+0)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)+(*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+4)**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4))))))>f0))){
  return (void *)0;
 }
 return (void *)1;
}
}
#pragma pop
