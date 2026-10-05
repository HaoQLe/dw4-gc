#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8003873C();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561E48;
extern void *lbl_80561E4C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80038890(){return fn_8003873C();}
void fn_800388B0(){
 if(!lbl_80561E4C){
  void *object=(lbl_80561E4C=fn_8006546C(lbl_80561E48,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E4C));
   reinterpret_cast<short *>(lbl_80561E4C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E4C);
  }
 }
}
}
#pragma pop
