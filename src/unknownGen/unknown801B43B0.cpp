#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B49CC();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AD430[];
extern char lbl_804AD440[];
extern char lbl_804AD450[];
extern char lbl_804AD460[];
extern char lbl_804AD46C[];
extern char lbl_804B8658[];
extern char lbl_804B86B4[];
extern char lbl_804B8718[];
extern char lbl_80560334[8];
extern void *lbl_805621F4;
extern void *lbl_80564A34;
extern void *lbl_80564A38;
extern void *lbl_80564A3C;
extern void *lbl_80564A40;
void *fn_801B43EC();
void fn_801B4428();
void fn_801B4450();
void *fn_801B44B4();
void *fn_801B4510();
void fn_801B454C();
void fn_801B4574();
void *fn_801B45D8();
void *fn_801B4634();
void *fn_801B4670();
void fn_801B46E0();
void fn_801B4708();
void *fn_801B4774();
void *fn_801B4808();
void *fn_801B4844();
void fn_801B490C();
void fn_801B4934();
void *fn_801B49AC();
}
struct UnknownGenObject801B4670_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B4844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4844(){fn_8006665C(this);}
};
struct UnknownGenObject801B4844 : UnknownGenRoot801B4844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801B4844(){unknown00=lbl_804B8658;}
};
extern "C" {
void *fn_801B43B0(){
 if(!lbl_80564A34) lbl_80564A34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A34;
}
void *fn_801B43EC(){
 if(!lbl_80564A34 || !(reinterpret_cast<unsigned int *>(lbl_80564A34)[0x24/4]&4)) fn_801B4428();
 return lbl_80564A34;
}
void fn_801B4428(){
 fn_80066188((int)fn_801B4450);
}
void fn_801B4450(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564A34,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B44B4,(int)lbl_804AD430,8,0,0,0,0);
}
void *fn_801B44B4(){return fn_801B43EC();}
void *fn_801B44D4(){
 if(!lbl_80564A38) lbl_80564A38=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A38;
}
void *fn_801B4510(){
 if(!lbl_80564A38 || !(reinterpret_cast<unsigned int *>(lbl_80564A38)[0x24/4]&4)) fn_801B454C();
 return lbl_80564A38;
}
void fn_801B454C(){
 fn_80066188((int)fn_801B4574);
}
void fn_801B4574(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564A38,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B45D8,(int)lbl_804AD440,8,0,0,0,0);
}
void *fn_801B45D8(){return fn_801B4510();}
void *fn_801B45F8(){
 if(!lbl_80564A3C) lbl_80564A3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A3C;
}
void *fn_801B4634(){
 if(!lbl_80564A3C || !(reinterpret_cast<unsigned int *>(lbl_80564A3C)[0x24/4]&4)) fn_801B46E0();
 return lbl_80564A3C;
}
void *fn_801B4670(){
 UnknownGenObject801B4670_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B8718;
 object.unknown00=lbl_804B86B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B46E0(){
 fn_80066188((int)fn_801B4708);
}
void fn_801B4708(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A3C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B4774,(int)lbl_804AD450,20,(int)fn_801B4670,0,0,(int)lbl_80560334);
}
void *fn_801B4774(){return fn_801B4634();}
void *fn_801B4794(void *object){
 fn_801B490C();
 return fn_8006546C(lbl_80564A40,object);
}
void *fn_801B47CC(){
 if(!lbl_80564A40) lbl_80564A40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A40;
}
void *fn_801B4808(){
 if(!lbl_80564A40 || !(reinterpret_cast<unsigned int *>(lbl_80564A40)[0x24/4]&4)) fn_801B490C();
 return lbl_80564A40;
}
void *fn_801B4844(){
 UnknownGenObject801B4844 object;
 object.unknown00=lbl_804B8658;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B490C(){
 fn_80066188((int)fn_801B4934);
}
void fn_801B4934(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A40,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B49AC,(int)lbl_804AD46C,16,(int)fn_801B4844,(int)fn_801B49CC,0,(int)lbl_804AD460);
}
void *fn_801B49AC(){return fn_801B4808();}
}
#pragma pop
