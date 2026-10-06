#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_800286F4();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_804640A4[];
extern char lbl_804640B0[];
extern char lbl_804763F0[];
extern void *lbl_805616DC;
extern void *lbl_805619F8;
extern void *lbl_805621F4;
void *fn_80028530();
void *fn_8002856C();
void fn_80028634();
void fn_8002865C();
void *fn_800286D4();
}
struct UnknownGenRoot8002856C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002856C(){fn_8006665C(this);}
};
struct UnknownGenObject8002856C : UnknownGenRoot8002856C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8002856C(){unknown00=lbl_804763F0;}
};
extern "C" {
void *fn_800284EC(){return lbl_805619F8;}
void *fn_800284F4(){
 if(!lbl_805616DC) lbl_805616DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616DC;
}
void *fn_80028530(){
 if(!lbl_805616DC || !(reinterpret_cast<unsigned int *>(lbl_805616DC)[0x24/4]&4)) fn_80028634();
 return lbl_805616DC;
}
void *fn_8002856C(){
 UnknownGenObject8002856C object;
 object.unknown00=lbl_804763F0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80028634(){
 fn_80066188((int)fn_8002865C);
}
void fn_8002865C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800286D4,(int)lbl_804640B0,16,(int)fn_8002856C,(int)fn_800286F4,0,(int)lbl_804640A4);
}
void *fn_800286D4(){return fn_80028530();}
}
#pragma pop
