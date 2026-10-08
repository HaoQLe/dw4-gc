#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273388(void *,double);
float fn_80274214(void *,int);
extern char lbl_805671D8[8];
}
extern "C" {
void *fn_8027B7C8(int p0){
 float value0=fn_80274214((void *)p0,1);
 fn_80273388((void *)p0,(*reinterpret_cast<double *>((lbl_805671D8+0))*value0));
 return (void *)1;
}
}
#pragma pop
