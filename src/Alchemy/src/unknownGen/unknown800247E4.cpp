#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800249F4();
void *fn_80029E64(void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561560;
extern void *lbl_80561564;
extern void *lbl_80561578;
extern void *lbl_805621F4;
}
extern "C" {
void fn_800247E4(){
 if(!lbl_80561564){
  void *object=(lbl_80561564=fn_8006546C(lbl_80561560,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561564));
   reinterpret_cast<short *>(lbl_80561564)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561564);
  }
 }
}
void *fn_8002487C(void *object){
 fn_800249F4();
 return fn_8006546C(lbl_80561578,object);
}
void *fn_800248B4(){
 if(!lbl_80561578) lbl_80561578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561578;
}
void *fn_800248F0(){
 if(!lbl_80561578 || !(reinterpret_cast<unsigned int *>(lbl_80561578)[0x24/4]&4)) fn_800249F4();
 return lbl_80561578;
}
}
#pragma pop
