#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80566060;
extern void *lbl_80566064;
}
extern "C" {
void *fn_802727D0(int p0,int p1){
 lbl_80566060=(void *)p0;
 lbl_80566064=(void *)p1;
 return (void *)p0;
}
void *fn_802727DC(int p0){
 if((unsigned int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80566064;
 }
 return lbl_80566060;
}
}
#pragma pop
