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
void fn_80149144();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049EEA4[];
extern char lbl_8049EEBC[];
extern char lbl_804A91BC[];
extern char lbl_804A9220[];
extern char lbl_804A9284[];
extern char lbl_804A92E8[];
extern char lbl_8055FAF8[8];
extern char lbl_8055FB00[8];
extern void *lbl_80564274;
extern void *lbl_80564278;
void *fn_80148E44();
void *fn_80148E80();
void fn_80148EF0();
void fn_80148F18();
void *fn_80148F84();
void *fn_80148FDC();
void *fn_80149018();
void fn_80149088();
void fn_801490B0();
void *fn_80149124();
}
struct UnknownGenObject80148E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149018_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80148E0C(void *object){
 fn_80148EF0();
 return fn_8006546C(lbl_80564274,object);
}
void *fn_80148E44(){
 if(!lbl_80564274 || !(reinterpret_cast<unsigned int *>(lbl_80564274)[0x24/4]&4)) fn_80148EF0();
 return lbl_80564274;
}
void *fn_80148E80(){
 UnknownGenObject80148E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A92E8;
 object.unknown00=lbl_804A9284;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80148EF0(){
 fn_80066188((int)fn_80148F18);
}
void fn_80148F18(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564274,(int)fn_8002907C,(int)fn_80024180,(int)fn_80148F84,(int)lbl_8049EEA4,20,(int)fn_80148E80,0,0,(int)lbl_8055FAF8);
}
void *fn_80148F84(){return fn_80148E44();}
void *fn_80148FA4(void *object){
 fn_80149088();
 return fn_8006546C(lbl_80564278,object);
}
void *fn_80148FDC(){
 if(!lbl_80564278 || !(reinterpret_cast<unsigned int *>(lbl_80564278)[0x24/4]&4)) fn_80149088();
 return lbl_80564278;
}
void *fn_80149018(){
 UnknownGenObject80149018_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9220;
 object.unknown00=lbl_804A91BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149088(){
 fn_80066188((int)fn_801490B0);
}
void fn_801490B0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564278,(int)fn_8002907C,(int)fn_80024180,(int)fn_80149124,(int)lbl_8049EEBC,24,(int)fn_80149018,(int)fn_80149144,0,(int)lbl_8055FB00);
}
void *fn_80149124(){return fn_80148FDC();}
}
#pragma pop
