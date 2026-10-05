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
void fn_8012FC48();
void *fn_80145ED0();
void fn_80145F0C();
extern char lbl_8049E78C[];
extern char lbl_8055FA58[8];
extern void *lbl_805621F4;
extern void *lbl_80564170;
extern void *lbl_80564174;
void fn_80146008();
void *fn_80146074();
}
extern "C" {
void fn_80145FE0(){
 fn_80066188((int)fn_80146008);
}
void fn_80146008(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564170,(int)fn_80037938,(int)fn_80033638,(int)fn_80146074,(int)lbl_8049E78C,56,(int)fn_80145F0C,0,0,(int)lbl_8055FA58);
}
void *fn_80146074(){return fn_80145ED0();}
void fn_80146094(){
 if(!lbl_80564174){
  void *object=(lbl_80564174=fn_8006546C(lbl_80564170,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80564174));
   reinterpret_cast<short *>(lbl_80564174)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80564174);
  }
 }
}
}
#pragma pop
