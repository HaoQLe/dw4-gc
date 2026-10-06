#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80033638();
void fn_80037938();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_80489E70[];
extern char lbl_80493AF4[];
extern char lbl_8055EBD8[8];
extern void *lbl_805621F4;
extern void *lbl_80562FDC;
extern void *lbl_80562FE0;
void *fn_800D2978();
void *fn_800D29B4();
void fn_800D2A88();
void fn_800D2AB0();
void *fn_800D2B1C();
}
struct UnknownGenRoot800D29B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D29B4(){fn_800638E0(this);}
};
struct UnknownGenObject800D29B4_0 : UnknownGenRoot800D29B4 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800D29B4_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800D29B4_1 : UnknownGenObject800D29B4_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800D29B4_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800D29B4 : UnknownGenObject800D29B4_1 {
 char unknown38[8];
 inline ~UnknownGenObject800D29B4(){unknown00=lbl_80493AF4;}
};
extern "C" {
void *fn_800D2978(){
 if(!lbl_80562FDC || !(reinterpret_cast<unsigned int *>(lbl_80562FDC)[0x24/4]&4)) fn_800D2A88();
 return lbl_80562FDC;
}
void *fn_800D29B4(){
 UnknownGenObject800D29B4 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_80493AF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
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
