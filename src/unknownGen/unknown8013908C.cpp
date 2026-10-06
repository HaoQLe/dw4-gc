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
void fn_8012FC48();
void fn_80139410();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049D380[];
extern char lbl_804AA2FC[];
extern char lbl_804AA360[];
extern char lbl_8055F738[8];
extern void *lbl_805621F4;
extern void *lbl_80563DD8;
extern void *lbl_80563DDC;
void *fn_801390C8();
void *fn_80139104();
void fn_80139174();
void fn_8013919C();
void *fn_80139208();
}
struct UnknownGenObject80139104_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8013908C(){
 if(!lbl_80563DD8) lbl_80563DD8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DD8;
}
void *fn_801390C8(){
 if(!lbl_80563DD8 || !(reinterpret_cast<unsigned int *>(lbl_80563DD8)[0x24/4]&4)) fn_80139174();
 return lbl_80563DD8;
}
void *fn_80139104(){
 UnknownGenObject80139104_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA360;
 object.unknown00=lbl_804AA2FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139174(){
 fn_80066188((int)fn_8013919C);
}
void fn_8013919C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DD8,(int)fn_8002907C,(int)fn_80024180,(int)fn_80139208,(int)lbl_8049D380,20,(int)fn_80139104,0,0,(int)lbl_8055F738);
}
void *fn_80139208(){return fn_801390C8();}
void *fn_80139228(void *object){
 fn_80139410();
 return fn_8006546C(lbl_80563DDC,object);
}
void *fn_80139260(){
 if(!lbl_80563DDC) lbl_80563DDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DDC;
}
void *fn_8013929C(){
 if(!lbl_80563DDC || !(reinterpret_cast<unsigned int *>(lbl_80563DDC)[0x24/4]&4)) fn_80139410();
 return lbl_80563DDC;
}
}
#pragma pop
