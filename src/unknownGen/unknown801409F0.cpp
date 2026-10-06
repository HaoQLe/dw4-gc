#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80140C44();
void fn_80141C74();
void fn_801438C4();
extern char lbl_8049DFD8[];
extern char lbl_8049DFF0[];
extern char lbl_804A6460[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern char lbl_8055F910[8];
extern void *lbl_80564000;
extern void *lbl_80564004;
extern void *lbl_80564050;
extern void *lbl_805640CC;
void *fn_801409F0();
void *fn_80140A2C();
void fn_80140A90();
void fn_80140AB8();
void *fn_80140B20();
void *fn_80140B40();
void *fn_80140B48();
void fn_80140B84();
void fn_80140BAC();
void *fn_80140C1C();
void *fn_80140C3C();
}
struct UnknownGenObject80140A2C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801409F0(){
 if(!lbl_80564000 || !(reinterpret_cast<unsigned int *>(lbl_80564000)[0x24/4]&4)) fn_80140A90();
 return lbl_80564000;
}
void *fn_80140A2C(){
 UnknownGenObject80140A2C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80140A90(){
 fn_80066188((int)fn_80140AB8);
}
void fn_80140AB8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564000,(int)fn_801438C4,(int)fn_80140B40,(int)fn_80140B20,(int)lbl_8049DFD8,32,(int)fn_80140A2C,0,0,0);
}
void *fn_80140B20(){return fn_801409F0();}
void *fn_80140B40(){return lbl_805640CC;}
void *fn_80140B48(){
 if(!lbl_80564004 || !(reinterpret_cast<unsigned int *>(lbl_80564004)[0x24/4]&4)) fn_80140B84();
 return lbl_80564004;
}
void fn_80140B84(){
 fn_80066188((int)fn_80140BAC);
}
void fn_80140BAC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564004,(int)fn_80141C74,(int)fn_80140C3C,(int)fn_80140C1C,(int)lbl_8049DFF0,36,0,(int)fn_80140C44,0,(int)lbl_8055F910);
}
void *fn_80140C1C(){return fn_80140B48();}
void *fn_80140C3C(){return lbl_80564050;}
}
#pragma pop
