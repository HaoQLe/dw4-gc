#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80033638();
void fn_80037938();
void *fn_8003A160();
void fn_8003A19C();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046842C[];
extern char lbl_8055D6C8[8];
extern void *lbl_8056200C;
extern void *lbl_80562010;
extern void *lbl_805621F4;
void fn_8003A298();
void *fn_8003A304();
}
extern "C" {
void fn_8003A270(){
 fn_80066188((int)fn_8003A298);
}
void fn_8003A298(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056200C,(int)fn_80037938,(int)fn_80033638,(int)fn_8003A304,(int)lbl_8046842C,56,(int)fn_8003A19C,0,0,(int)lbl_8055D6C8);
}
void *fn_8003A304(){return fn_8003A160();}
void fn_8003A324(){
 if(!lbl_80562010){
  void *object=(lbl_80562010=fn_8006546C(lbl_8056200C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562010));
   reinterpret_cast<short *>(lbl_80562010)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562010);
  }
 }
}
}
#pragma pop
