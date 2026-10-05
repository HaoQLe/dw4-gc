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
void fn_8010CBD4();
void *fn_80114F90();
void fn_80114FCC();
extern char lbl_80495710[];
extern char lbl_8055F264[8];
extern void *lbl_805621F4;
extern void *lbl_8056384C;
extern void *lbl_80563850;
void fn_801150C8();
void *fn_80115134();
}
extern "C" {
void fn_801150A0(){
 fn_80066188((int)fn_801150C8);
}
void fn_801150C8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056384C,(int)fn_80037938,(int)fn_80033638,(int)fn_80115134,(int)lbl_80495710,56,(int)fn_80114FCC,0,0,(int)lbl_8055F264);
}
void *fn_80115134(){return fn_80114F90();}
void fn_80115154(){
 if(!lbl_80563850){
  void *object=(lbl_80563850=fn_8006546C(lbl_8056384C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563850));
   reinterpret_cast<short *>(lbl_80563850)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563850);
  }
 }
}
}
#pragma pop
