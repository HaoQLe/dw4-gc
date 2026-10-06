#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801ADA38();
void *fn_801AF130();
void fn_801CB724();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B21A4[];
extern char lbl_804B21C4[];
extern char lbl_804B21E8[];
extern char lbl_804B2208[];
extern char lbl_804B2214[];
extern char lbl_804B60D0[];
extern char lbl_804B612C[];
extern char lbl_804B6190[];
extern char lbl_804B61F4[];
extern char lbl_804B6258[];
extern char lbl_804B62BC[];
extern char lbl_804B6320[];
extern char lbl_804B9898[];
extern char lbl_805609B0[8];
extern char lbl_805609B8[8];
extern char lbl_805609C0[8];
extern void *lbl_805621F4;
extern void *lbl_80565480;
extern void *lbl_80565484;
extern void *lbl_80565488;
extern void *lbl_8056548C;
void *fn_801CB088();
void *fn_801CB0C4();
void fn_801CB140();
void fn_801CB168();
void *fn_801CB1D4();
void *fn_801CB230();
void *fn_801CB26C();
void fn_801CB2DC();
void fn_801CB304();
void *fn_801CB370();
void *fn_801CB3C8();
void *fn_801CB404();
void fn_801CB474();
void fn_801CB49C();
void *fn_801CB508();
void *fn_801CB560();
void *fn_801CB59C();
void fn_801CB664();
void fn_801CB68C();
void *fn_801CB704();
}
struct UnknownGenObject801CB0C4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801CB26C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801CB404_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CB59C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CB59C(){fn_8006665C(this);}
};
struct UnknownGenObject801CB59C : UnknownGenRoot801CB59C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[44];
 inline ~UnknownGenObject801CB59C(){unknown00=lbl_804B60D0;}
};
extern "C" {
void *fn_801CB050(void *object){
 fn_801CB140();
 return fn_8006546C(lbl_80565480,object);
}
void *fn_801CB088(){
 if(!lbl_80565480 || !(reinterpret_cast<unsigned int *>(lbl_80565480)[0x24/4]&4)) fn_801CB140();
 return lbl_80565480;
}
void *fn_801CB0C4(){
 UnknownGenObject801CB0C4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 object.unknown00=lbl_804B6320;
 object.unknown00=lbl_804B62BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB140(){
 fn_80066188((int)fn_801CB168);
}
void fn_801CB168(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565480,(int)fn_801ADA38,(int)fn_801AF130,(int)fn_801CB1D4,(int)lbl_804B21A4,32,(int)fn_801CB0C4,0,0,(int)lbl_805609B0);
}
void *fn_801CB1D4(){return fn_801CB088();}
void *fn_801CB1F4(){
 if(!lbl_80565484) lbl_80565484=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565484;
}
void *fn_801CB230(){
 if(!lbl_80565484 || !(reinterpret_cast<unsigned int *>(lbl_80565484)[0x24/4]&4)) fn_801CB2DC();
 return lbl_80565484;
}
void *fn_801CB26C(){
 UnknownGenObject801CB26C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6258;
 object.unknown00=lbl_804B61F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB2DC(){
 fn_80066188((int)fn_801CB304);
}
void fn_801CB304(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565484,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CB370,(int)lbl_804B21C4,20,(int)fn_801CB26C,0,0,(int)lbl_805609B8);
}
void *fn_801CB370(){return fn_801CB230();}
void *fn_801CB390(void *object){
 fn_801CB474();
 return fn_8006546C(lbl_80565488,object);
}
void *fn_801CB3C8(){
 if(!lbl_80565488 || !(reinterpret_cast<unsigned int *>(lbl_80565488)[0x24/4]&4)) fn_801CB474();
 return lbl_80565488;
}
void *fn_801CB404(){
 UnknownGenObject801CB404_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6190;
 object.unknown00=lbl_804B612C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB474(){
 fn_80066188((int)fn_801CB49C);
}
void fn_801CB49C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565488,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CB508,(int)lbl_804B21E8,20,(int)fn_801CB404,0,0,(int)lbl_805609C0);
}
void *fn_801CB508(){return fn_801CB3C8();}
void *fn_801CB528(void *object){
 fn_801CB664();
 return fn_8006546C(lbl_8056548C,object);
}
void *fn_801CB560(){
 if(!lbl_8056548C || !(reinterpret_cast<unsigned int *>(lbl_8056548C)[0x24/4]&4)) fn_801CB664();
 return lbl_8056548C;
}
void *fn_801CB59C(){
 UnknownGenObject801CB59C object;
 object.unknown00=lbl_804B60D0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB664(){
 fn_80066188((int)fn_801CB68C);
}
void fn_801CB68C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056548C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CB704,(int)lbl_804B2214,60,(int)fn_801CB59C,(int)fn_801CB724,0,(int)lbl_804B2208);
}
void *fn_801CB704(){return fn_801CB560();}
}
#pragma pop
