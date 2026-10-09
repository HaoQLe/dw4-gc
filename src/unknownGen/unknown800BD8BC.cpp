#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
void fn_800BCB74(void *);
void *fn_8012E1D8(void *,int);
void igGamecubeVisualContext_virtual37C(void *,void *);
}
extern "C" {
void igClearAttr_virtual2C(int p0){
 fn_800667D0();
 void *value1=fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+16),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=value1;
 double value0=*reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+48);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+64)=(float)value0;
}
void igClearAttr_virtual44(int p0){
 fn_800BCB74((void *)p0);
 void *value1=fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+16),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=value1;
 double value0=*reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+48);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+64)=(float)value0;
}
void igClippingStateAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual37C((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
