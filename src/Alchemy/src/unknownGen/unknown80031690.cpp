#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561C30;
extern void *lbl_80561C34;
extern void *lbl_805621F4;
}
extern "C" {
void fn_80031690(){
 if(!lbl_80561C34){
  void *object=(lbl_80561C34=fn_8006546C(lbl_80561C30,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C34));
   reinterpret_cast<short *>(lbl_80561C34)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C34);
  }
 }
}
}
#pragma pop
