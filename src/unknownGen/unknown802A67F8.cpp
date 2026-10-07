#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80530FDC[];
extern char lbl_80530FE0[];
}
extern "C" {
void *fn_802A67F8(int p0,int p1){
 *reinterpret_cast<void * *>((lbl_80530FE0+0))=(void *)p0;
 *reinterpret_cast<void * *>((lbl_80530FDC+0))=(void *)p1;
 return (void *)p0;
}
}
#pragma pop
