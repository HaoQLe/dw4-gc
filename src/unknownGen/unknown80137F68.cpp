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
void fn_8012FC48();
void fn_8013826C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049CF84[];
extern char lbl_804A40EC[];
extern char lbl_804AA48C[];
extern char lbl_804AA4F0[];
extern char lbl_8055F6D4[8];
extern char lbl_8055F6DC[8];
extern void *lbl_805621F4;
extern void *lbl_80563D7C;
extern void *lbl_80563D80;
void *fn_80137FA4();
void *fn_80137FE0();
void fn_80138050();
void fn_80138078();
void *fn_801380E4();
void *fn_8013813C();
void *fn_80138178();
void fn_801381B8();
void fn_801381E0();
void *fn_8013824C();
}
struct UnknownGenObject80137FE0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80138178 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80137F68(){
 if(!lbl_80563D7C) lbl_80563D7C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563D7C;
}
void *fn_80137FA4(){
 if(!lbl_80563D7C || !(reinterpret_cast<unsigned int *>(lbl_80563D7C)[0x24/4]&4)) fn_80138050();
 return lbl_80563D7C;
}
void *fn_80137FE0(){
 UnknownGenObject80137FE0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA4F0;
 object.unknown00=lbl_804AA48C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138050(){
 fn_80066188((int)fn_80138078);
}
void fn_80138078(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D7C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801380E4,(int)lbl_8049CF84,20,(int)fn_80137FE0,0,0,(int)lbl_8055F6D4);
}
void *fn_801380E4(){return fn_80137FA4();}
void *fn_80138104(void *object){
 fn_801381B8();
 return fn_8006546C(lbl_80563D80,object);
}
void *fn_8013813C(){
 if(!lbl_80563D80 || !(reinterpret_cast<unsigned int *>(lbl_80563D80)[0x24/4]&4)) fn_801381B8();
 return lbl_80563D80;
}
void *fn_80138178(){
 UnknownGenObject80138178 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A40EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801381B8(){
 fn_80066188((int)fn_801381E0);
}
void fn_801381E0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D80,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8013824C,(int)lbl_8055F6DC,24,(int)fn_80138178,(int)fn_8013826C,0,0);
}
void *fn_8013824C(){return fn_8013813C();}
}
#pragma pop
