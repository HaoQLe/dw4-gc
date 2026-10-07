#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80535698;
extern void *lbl_805356F4;
}
extern "C" {
void *fn_802F29BC(){return lbl_805356F4;}
void *fn_802F29CC(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=0;
 return (void *)p0;
}
void *fn_802F29D8(){return lbl_80535698;}
}
#pragma pop
