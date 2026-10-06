#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801305C4();
void *fn_8013BA10();
void *fn_801452A8();
void fn_80145E14();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E740[];
extern char lbl_8049E754[];
extern char lbl_8049E764[];
extern char lbl_8049E770[];
extern char lbl_804A9618[];
extern char lbl_804A9674[];
extern char lbl_804A96D0[];
extern char lbl_804A9734[];
extern char lbl_804A9798[];
extern char lbl_804A97FC[];
extern char lbl_804AAD84[];
extern char lbl_8055FA48[8];
extern char lbl_8055FA50[8];
extern void *lbl_8056415C;
extern void *lbl_80564160;
extern void *lbl_80564164;
extern void *lbl_80564168;
void *fn_801458E8();
void *fn_80145924();
void fn_80145994();
void fn_801459BC();
void *fn_80145A28();
void *fn_80145A48();
void *fn_80145A84();
void fn_80145AF4();
void fn_80145B1C();
void *fn_80145B88();
void *fn_80145BA8();
void fn_80145BE4();
void fn_80145C0C();
void *fn_80145C70();
void *fn_80145CC8();
void *fn_80145D04();
void fn_80145D5C();
void fn_80145D84();
void *fn_80145DF4();
}
struct UnknownGenObject80145924_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80145A84_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80145D04_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801458E8(){
 if(!lbl_8056415C || !(reinterpret_cast<unsigned int *>(lbl_8056415C)[0x24/4]&4)) fn_80145994();
 return lbl_8056415C;
}
void *fn_80145924(){
 UnknownGenObject80145924_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A97FC;
 object.unknown00=lbl_804A9798;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145994(){
 fn_80066188((int)fn_801459BC);
}
void fn_801459BC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056415C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80145A28,(int)lbl_8049E740,20,(int)fn_80145924,0,0,(int)lbl_8055FA48);
}
void *fn_80145A28(){return fn_801458E8();}
void *fn_80145A48(){
 if(!lbl_80564160 || !(reinterpret_cast<unsigned int *>(lbl_80564160)[0x24/4]&4)) fn_80145AF4();
 return lbl_80564160;
}
void *fn_80145A84(){
 UnknownGenObject80145A84_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9734;
 object.unknown00=lbl_804A96D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145AF4(){
 fn_80066188((int)fn_80145B1C);
}
void fn_80145B1C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564160,(int)fn_8002907C,(int)fn_80024180,(int)fn_80145B88,(int)lbl_8049E754,20,(int)fn_80145A84,0,0,(int)lbl_8055FA50);
}
void *fn_80145B88(){return fn_80145A48();}
void *fn_80145BA8(){
 if(!lbl_80564164 || !(reinterpret_cast<unsigned int *>(lbl_80564164)[0x24/4]&4)) fn_80145BE4();
 return lbl_80564164;
}
void fn_80145BE4(){
 fn_80066188((int)fn_80145C0C);
}
void fn_80145C0C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564164,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_80145C70,(int)lbl_8049E764,32,0,0,0,0);
}
void *fn_80145C70(){return fn_80145BA8();}
void *fn_80145C90(void *object){
 fn_80145D5C();
 return fn_8006546C(lbl_80564168,object);
}
void *fn_80145CC8(){
 if(!lbl_80564168 || !(reinterpret_cast<unsigned int *>(lbl_80564168)[0x24/4]&4)) fn_80145D5C();
 return lbl_80564168;
}
void *fn_80145D04(){
 UnknownGenObject80145D04_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AAD84;
 object.unknown00=lbl_804A9674;
 object.unknown00=lbl_804A9618;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145D5C(){
 fn_80066188((int)fn_80145D84);
}
void fn_80145D84(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564168,(int)fn_801305C4,(int)fn_801452A8,(int)fn_80145DF4,(int)lbl_8049E770,20,(int)fn_80145D04,(int)fn_80145E14,0,0);
}
void *fn_80145DF4(){return fn_80145CC8();}
}
#pragma pop
