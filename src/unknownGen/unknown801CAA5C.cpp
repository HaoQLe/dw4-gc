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
void fn_801AA6DC();
void fn_801CAE80();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B20C4[];
extern char lbl_804B6384[];
extern char lbl_804B63E8[];
extern char lbl_805609A8[8];
extern void *lbl_805621F4;
extern void *lbl_80565464;
extern void *lbl_80565468;
void *fn_801CAA98();
void *fn_801CAAD4();
void fn_801CAB44();
void fn_801CAB6C();
void *fn_801CABD8();
}
struct UnknownGenObject801CAAD4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CAA5C(){
 if(!lbl_80565464) lbl_80565464=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565464;
}
void *fn_801CAA98(){
 if(!lbl_80565464 || !(reinterpret_cast<unsigned int *>(lbl_80565464)[0x24/4]&4)) fn_801CAB44();
 return lbl_80565464;
}
void *fn_801CAAD4(){
 UnknownGenObject801CAAD4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B63E8;
 object.unknown00=lbl_804B6384;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CAB44(){
 fn_80066188((int)fn_801CAB6C);
}
void fn_801CAB6C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565464,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CABD8,(int)lbl_804B20C4,20,(int)fn_801CAAD4,0,0,(int)lbl_805609A8);
}
void *fn_801CABD8(){return fn_801CAA98();}
void *fn_801CABF8(void *object){
 fn_801CAE80();
 return fn_8006546C(lbl_80565468,object);
}
void *fn_801CAC30(){
 if(!lbl_80565468) lbl_80565468=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565468;
}
void *fn_801CAC6C(){
 if(!lbl_80565468 || !(reinterpret_cast<unsigned int *>(lbl_80565468)[0x24/4]&4)) fn_801CAE80();
 return lbl_80565468;
}
}
#pragma pop
