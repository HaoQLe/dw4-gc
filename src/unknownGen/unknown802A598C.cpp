#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_805305D8[];
extern char lbl_805305DC[];
}
extern "C" {
void *fn_802A598C(int p0,int p1){
 *reinterpret_cast<void * *>((lbl_805305D8+0))=(void *)p0;
 *reinterpret_cast<void * *>((lbl_805305DC+0))=(void *)p1;
 return (void *)p0;
}
}
#pragma pop
