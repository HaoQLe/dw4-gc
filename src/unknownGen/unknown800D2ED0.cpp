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
void fn_800CE2F8();
void fn_800D31F8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80489E8C[];
extern char lbl_80493A2C[];
extern char lbl_80493A90[];
extern char lbl_8055EBF8[8];
extern void *lbl_805621F4;
extern void *lbl_80562FE4;
extern void *lbl_80562FE8;
void *fn_800D2F44();
void *fn_800D2F80();
void fn_800D2FF0();
void fn_800D3018();
void *fn_800D3084();
}
struct UnknownGenObject800D2F80 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D2ED0(void *object){
 fn_800D2FF0();
 return fn_8006546C(lbl_80562FE4,object);
}
void *fn_800D2F08(){
 if(!lbl_80562FE4) lbl_80562FE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FE4;
}
void *fn_800D2F44(){
 if(!lbl_80562FE4 || !(reinterpret_cast<unsigned int *>(lbl_80562FE4)[0x24/4]&4)) fn_800D2FF0();
 return lbl_80562FE4;
}
void *fn_800D2F80(){
 UnknownGenObject800D2F80 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493A90;
 object.unknown00=lbl_80493A2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D2FF0(){
 fn_80066188((int)fn_800D3018);
}
void fn_800D3018(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FE4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D3084,(int)lbl_80489E8C,20,(int)fn_800D2F80,0,0,(int)lbl_8055EBF8);
}
void *fn_800D3084(){return fn_800D2F44();}
void *fn_800D30A4(void *object){
 fn_800D31F8();
 return fn_8006546C(lbl_80562FE8,object);
}
void *fn_800D30DC(){
 if(!lbl_80562FE8 || !(reinterpret_cast<unsigned int *>(lbl_80562FE8)[0x24/4]&4)) fn_800D31F8();
 return lbl_80562FE8;
}
}
#pragma pop
