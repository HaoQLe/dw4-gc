#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A823C(void *);
void fn_800A8244(void *);
extern char lbl_804F2B80[];
}
extern "C" {
void fn_800A6430(int p0){
 if((int)p0!=-1){
  if((int)p0>=0){
   if((int)p0<3){
    fn_800A8244((void *)(int)((int)lbl_804F2B80+(p0*2192)));
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)((int)lbl_804F2B80+(p0*2192)))+4)=(void *)0;
    fn_800A823C((void *)(int)((int)lbl_804F2B80+(p0*2192)));
    return;
   } else {
    return;
   }
  }
 }
}
}
#pragma pop
