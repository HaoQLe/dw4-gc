#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80125584();
extern char lbl_805669DC[4];
}
extern "C" {
void *fn_8012614C(){return fn_80125584();}
void *fn_8012616C(int p0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<float *>((lbl_805669DC+0));
 return (void *)p0;
}
}
#pragma pop
