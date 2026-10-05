#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_80111E84();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80495148[];
extern char lbl_80497480[];
extern char lbl_804974E4[];
extern char lbl_8055F0F4[8];
extern void *lbl_805621F4;
extern void *lbl_8056374C;
extern void *lbl_80563750;
void *fn_80111B74();
void *fn_80111BB0();
void fn_80111C20();
void fn_80111C48();
void *fn_80111CB4();
}
struct UnknownGenObject80111BB0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80111B38(){
 if(!lbl_8056374C) lbl_8056374C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056374C;
}
void *fn_80111B74(){
 if(!lbl_8056374C || !(reinterpret_cast<unsigned int *>(lbl_8056374C)[0x24/4]&4)) fn_80111C20();
 return lbl_8056374C;
}
void *fn_80111BB0(){
 UnknownGenObject80111BB0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804974E4;
 object.unknown00=lbl_80497480;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80111C20(){
 fn_80066188((int)fn_80111C48);
}
void fn_80111C48(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056374C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80111CB4,(int)lbl_80495148,20,(int)fn_80111BB0,0,0,(int)lbl_8055F0F4);
}
void *fn_80111CB4(){return fn_80111B74();}
void *fn_80111CD4(){
 if(!lbl_80563750) lbl_80563750=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563750;
}
void *fn_80111D10(){
 if(!lbl_80563750 || !(reinterpret_cast<unsigned int *>(lbl_80563750)[0x24/4]&4)) fn_80111E84();
 return lbl_80563750;
}
}
#pragma pop
