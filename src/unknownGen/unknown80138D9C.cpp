#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80139024();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049D334[];
extern char lbl_8049D354[];
extern char lbl_804AA3C4[];
extern char lbl_804AA428[];
extern char lbl_8055F720[8];
extern void *lbl_80563DCC;
extern void *lbl_80563DD0;
void *fn_80138DD4();
void *fn_80138E10();
void fn_80138E80();
void fn_80138EA8();
void *fn_80138F14();
void *fn_80138F34();
void fn_80138F70();
void fn_80138F98();
void *fn_80139004();
}
struct UnknownGenObject80138E10 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80138D9C(void *object){
 fn_80138E80();
 return fn_8006546C(lbl_80563DCC,object);
}
void *fn_80138DD4(){
 if(!lbl_80563DCC || !(reinterpret_cast<unsigned int *>(lbl_80563DCC)[0x24/4]&4)) fn_80138E80();
 return lbl_80563DCC;
}
void *fn_80138E10(){
 UnknownGenObject80138E10 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA428;
 object.unknown00=lbl_804AA3C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138E80(){
 fn_80066188((int)fn_80138EA8);
}
void fn_80138EA8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DCC,(int)fn_8002907C,(int)fn_80024180,(int)fn_80138F14,(int)lbl_8049D334,20,(int)fn_80138E10,0,0,(int)lbl_8055F720);
}
void *fn_80138F14(){return fn_80138DD4();}
void *fn_80138F34(){
 if(!lbl_80563DD0 || !(reinterpret_cast<unsigned int *>(lbl_80563DD0)[0x24/4]&4)) fn_80138F70();
 return lbl_80563DD0;
}
void fn_80138F70(){
 fn_80066188((int)fn_80138F98);
}
void fn_80138F98(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563DD0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80139004,(int)lbl_8049D354,12,0,(int)fn_80139024,0,0);
}
void *fn_80139004(){return fn_80138F34();}
}
#pragma pop
