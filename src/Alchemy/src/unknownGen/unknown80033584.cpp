#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80033474();
void fn_800334B0();
void fn_80037938();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80467454[];
extern char lbl_8055D5C8[8];
extern void *lbl_80561D34;
extern void *lbl_80561D38;
extern void *lbl_80561E10;
extern void *lbl_805621F4;
void fn_800335AC();
void *fn_80033618();
void *fn_80033638();
}
extern "C" {
void fn_80033584(){
 fn_80066188((int)fn_800335AC);
}
void fn_800335AC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D34,(int)fn_80037938,(int)fn_80033638,(int)fn_80033618,(int)lbl_80467454,56,(int)fn_800334B0,0,0,(int)lbl_8055D5C8);
}
void *fn_80033618(){return fn_80033474();}
void *fn_80033638(){return lbl_80561E10;}
void fn_80033640(){
 if(!lbl_80561D38){
  void *object=(lbl_80561D38=fn_8006546C(lbl_80561D34,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561D38));
   reinterpret_cast<short *>(lbl_80561D38)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561D38);
  }
 }
}
}
#pragma pop
