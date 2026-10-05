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
void fn_8012FC48();
void *fn_8013BA10();
void fn_80141E68();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E130[];
extern char lbl_8049E144[];
extern char lbl_8049E154[];
extern char lbl_804A6460[];
extern char lbl_804A9F64[];
extern char lbl_804A9FC8[];
extern char lbl_804AA02C[];
extern char lbl_804AA090[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055F940[8];
extern char lbl_8055F948[8];
extern void *lbl_805621F4;
extern void *lbl_80564048;
extern void *lbl_8056404C;
extern void *lbl_80564050;
extern void *lbl_80564054;
void *fn_801418BC();
void *fn_801418F8();
void fn_80141968();
void fn_80141990();
void *fn_801419FC();
void *fn_80141A58();
void *fn_80141A94();
void fn_80141B04();
void fn_80141B2C();
void *fn_80141B98();
void *fn_80141BB8();
void *fn_80141BF4();
void fn_80141C4C();
void fn_80141C74();
void *fn_80141CDC();
}
struct UnknownGenObject801418F8 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141A94 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141BF4 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801418BC(){
 if(!lbl_80564048 || !(reinterpret_cast<unsigned int *>(lbl_80564048)[0x24/4]&4)) fn_80141968();
 return lbl_80564048;
}
void *fn_801418F8(){
 UnknownGenObject801418F8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA090;
 object.unknown00=lbl_804AA02C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141968(){
 fn_80066188((int)fn_80141990);
}
void fn_80141990(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564048,(int)fn_8002907C,(int)fn_80024180,(int)fn_801419FC,(int)lbl_8049E130,20,(int)fn_801418F8,0,0,(int)lbl_8055F940);
}
void *fn_801419FC(){return fn_801418BC();}
void *fn_80141A1C(){
 if(!lbl_8056404C) lbl_8056404C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056404C;
}
void *fn_80141A58(){
 if(!lbl_8056404C || !(reinterpret_cast<unsigned int *>(lbl_8056404C)[0x24/4]&4)) fn_80141B04();
 return lbl_8056404C;
}
void *fn_80141A94(){
 UnknownGenObject80141A94 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9FC8;
 object.unknown00=lbl_804A9F64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141B04(){
 fn_80066188((int)fn_80141B2C);
}
void fn_80141B2C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056404C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80141B98,(int)lbl_8049E144,20,(int)fn_80141A94,0,0,(int)lbl_8055F948);
}
void *fn_80141B98(){return fn_80141A58();}
void *fn_80141BB8(){
 if(!lbl_80564050 || !(reinterpret_cast<unsigned int *>(lbl_80564050)[0x24/4]&4)) fn_80141C4C();
 return lbl_80564050;
}
void *fn_80141BF4(){
 UnknownGenObject80141BF4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141C4C(){
 fn_80066188((int)fn_80141C74);
}
void fn_80141C74(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564050,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_80141CDC,(int)lbl_8049E154,32,(int)fn_80141BF4,0,0,0);
}
void *fn_80141CDC(){return fn_80141BB8();}
void *fn_80141CFC(){
 if(!lbl_80564054 || !(reinterpret_cast<unsigned int *>(lbl_80564054)[0x24/4]&4)) fn_80141E68();
 return lbl_80564054;
}
}
#pragma pop
