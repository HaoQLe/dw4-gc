#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80024AB4();
void *fn_80029E64(void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80463578[];
extern char lbl_80463584[];
extern char lbl_80470EF4[];
extern void *lbl_80561560;
extern void *lbl_80561564;
extern void *lbl_80561578;
extern void *lbl_805621F4;
void *fn_800248F0();
void *fn_8002492C();
void fn_800249F4();
void fn_80024A1C();
void *fn_80024A94();
}
struct UnknownGenRoot8002492C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002492C(){fn_8006665C(this);}
};
struct UnknownGenObject8002492C : UnknownGenRoot8002492C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002492C(){unknown00=lbl_80470EF4;}
};
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
void *fn_8002492C(){
 UnknownGenObject8002492C object;
 object.unknown00=lbl_80470EF4;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800249F4(){
 fn_80066188((int)fn_80024A1C);
}
void fn_80024A1C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561578,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80024A94,(int)lbl_80463584,24,(int)fn_8002492C,(int)fn_80024AB4,0,(int)lbl_80463578);
}
void *fn_80024A94(){return fn_800248F0();}
}
#pragma pop
