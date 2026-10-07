#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80566060;
extern void *lbl_80566064;
}
extern "C" {
void *fn_802727DC(int p0){
 if((unsigned int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80566064;
 }
 return lbl_80566060;
}
}
#pragma pop
