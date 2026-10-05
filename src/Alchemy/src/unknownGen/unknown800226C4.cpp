#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80022570();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_805614A8;
extern void *lbl_805614AC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800226C4(){return fn_80022570();}
void fn_800226E4(){
 if(!lbl_805614AC){
  void *object=(lbl_805614AC=fn_8006546C(lbl_805614A8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614AC));
   reinterpret_cast<short *>(lbl_805614AC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614AC);
  }
 }
}
}
#pragma pop
