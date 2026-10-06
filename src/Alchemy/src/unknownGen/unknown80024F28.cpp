#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core11igStringObjFv();
void fn_80021B94();
void *fn_80024180();
void *fn_80024E54();
void fn_80024E90();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80463654[];
extern char lbl_80476A30[];
extern char lbl_8055D0B0[8];
extern void *lbl_805615A4;
extern void *lbl_805615A8;
extern void *lbl_805621F4;
void *fn_80024F94();
}
struct UnknownGenObject80025064_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_80024F28(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615A4,(int)fn_8002907C,(int)fn_80024180,(int)fn_80024F94,(int)lbl_80463654,20,(int)fn_80024E90,0,0,(int)lbl_8055D0B0);
}
void *fn_80024F94(){return fn_80024E54();}
void *fn_80024FB4(void *object){
 arkRegister__Q33Gap4Core11igStringObjFv();
 return fn_8006546C(lbl_805615A8,object);
}
void *fn_80024FEC(){
 if(!lbl_805615A8) lbl_805615A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805615A8;
}
void *fn_80025028(){
 if(!lbl_805615A8 || !(reinterpret_cast<unsigned int *>(lbl_805615A8)[0x24/4]&4)) arkRegister__Q33Gap4Core11igStringObjFv();
 return lbl_805615A8;
}
void *fn_80025064(){
 UnknownGenObject80025064_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80476A30;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
