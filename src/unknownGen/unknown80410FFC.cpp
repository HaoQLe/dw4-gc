#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80410FFC(int p0,float f0,float f1){
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+140)=f0;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+144)=f1;
 return (void *)p0;
}
}
#pragma pop
