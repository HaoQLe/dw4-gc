#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80033638();
void fn_80037938();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D2978();
void fn_800D29B4();
extern char lbl_80489E70[];
extern char lbl_8055EBD8[8];
extern void *lbl_805621F4;
extern void *lbl_80562FDC;
extern void *lbl_80562FE0;
void fn_800D2AB0();
void *fn_800D2B1C();
}
extern "C" {
void fn_800D2A88(){
 fn_80066188((int)fn_800D2AB0);
}
void fn_800D2AB0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FDC,(int)fn_80037938,(int)fn_80033638,(int)fn_800D2B1C,(int)lbl_80489E70,56,(int)fn_800D29B4,0,0,(int)lbl_8055EBD8);
}
void *fn_800D2B1C(){return fn_800D2978();}
void fn_800D2B3C(){
 if(!lbl_80562FE0){
  void *object=(lbl_80562FE0=fn_8006546C(lbl_80562FDC,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562FE0));
   reinterpret_cast<short *>(lbl_80562FE0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562FE0);
  }
 }
}
}
#pragma pop
