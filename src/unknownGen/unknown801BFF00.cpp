#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C0394();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF55C[];
extern char lbl_804B730C[];
extern char lbl_804B7370[];
extern char lbl_80560648[8];
extern void *lbl_805621F4;
extern void *lbl_80564EEC;
extern void *lbl_80564EF0;
void *fn_801BFF74();
void *fn_801BFFB0();
void fn_801C0020();
void fn_801C0048();
void *fn_801C00B4();
}
struct UnknownGenObject801BFFB0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BFF00(void *object){
 fn_801C0020();
 return fn_8006546C(lbl_80564EEC,object);
}
void *fn_801BFF38(){
 if(!lbl_80564EEC) lbl_80564EEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EEC;
}
void *fn_801BFF74(){
 if(!lbl_80564EEC || !(reinterpret_cast<unsigned int *>(lbl_80564EEC)[0x24/4]&4)) fn_801C0020();
 return lbl_80564EEC;
}
void *fn_801BFFB0(){
 UnknownGenObject801BFFB0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7370;
 object.unknown00=lbl_804B730C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C0020(){
 fn_80066188((int)fn_801C0048);
}
void fn_801C0048(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EEC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C00B4,(int)lbl_804AF55C,20,(int)fn_801BFFB0,0,0,(int)lbl_80560648);
}
void *fn_801C00B4(){return fn_801BFF74();}
void *fn_801C00D4(void *object){
 fn_801C0394();
 return fn_8006546C(lbl_80564EF0,object);
}
void *fn_801C010C(){
 if(!lbl_80564EF0) lbl_80564EF0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EF0;
}
void *fn_801C0148(){
 if(!lbl_80564EF0 || !(reinterpret_cast<unsigned int *>(lbl_80564EF0)[0x24/4]&4)) fn_801C0394();
 return lbl_80564EF0;
}
}
#pragma pop
