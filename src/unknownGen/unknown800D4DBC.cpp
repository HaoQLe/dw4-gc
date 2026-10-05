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
void fn_800CE2F8();
void fn_800D5070();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A420[];
extern char lbl_804932F0[];
extern char lbl_80493354[];
extern char lbl_8055ECC8[8];
extern void *lbl_80563080;
extern void *lbl_80563084;
void *fn_800D4DF4();
void *fn_800D4E30();
void fn_800D4EA0();
void fn_800D4EC8();
void *fn_800D4F34();
}
struct UnknownGenObject800D4E30 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D4DBC(void *object){
 fn_800D4EA0();
 return fn_8006546C(lbl_80563080,object);
}
void *fn_800D4DF4(){
 if(!lbl_80563080 || !(reinterpret_cast<unsigned int *>(lbl_80563080)[0x24/4]&4)) fn_800D4EA0();
 return lbl_80563080;
}
void *fn_800D4E30(){
 UnknownGenObject800D4E30 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493354;
 object.unknown00=lbl_804932F0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4EA0(){
 fn_80066188((int)fn_800D4EC8);
}
void fn_800D4EC8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563080,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D4F34,(int)lbl_8048A420,20,(int)fn_800D4E30,0,0,(int)lbl_8055ECC8);
}
void *fn_800D4F34(){return fn_800D4DF4();}
void *fn_800D4F54(void *object){
 fn_800D5070();
 return fn_8006546C(lbl_80563084,object);
}
void *fn_800D4F8C(){
 if(!lbl_80563084 || !(reinterpret_cast<unsigned int *>(lbl_80563084)[0x24/4]&4)) fn_800D5070();
 return lbl_80563084;
}
}
#pragma pop
