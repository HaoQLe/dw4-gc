#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80463FD4[];
extern char lbl_80472FA0[];
extern char lbl_80476568[];
extern char lbl_804765CC[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D1C4[8];
extern void *lbl_805616C4;
extern void *lbl_805621F4;
void *fn_800280B4();
void *fn_800280F0();
void fn_80028160();
void fn_80028188();
void *fn_800281F4();
}
struct UnknownGenObject800280F0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80028078(){
 if(!lbl_805616C4) lbl_805616C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616C4;
}
void *fn_800280B4(){
 if(!lbl_805616C4 || !(reinterpret_cast<unsigned int *>(lbl_805616C4)[0x24/4]&4)) fn_80028160();
 return lbl_805616C4;
}
void *fn_800280F0(){
 UnknownGenObject800280F0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804765CC;
 object.unknown00=lbl_80476568;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80028160(){
 fn_80066188((int)fn_80028188);
}
void fn_80028188(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616C4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800281F4,(int)lbl_80463FD4,20,(int)fn_800280F0,0,0,(int)lbl_8055D1C4);
}
void *fn_800281F4(){return fn_800280B4();}
}
#pragma pop
