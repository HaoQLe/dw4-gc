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
void fn_801CBBF0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2344[];
extern char lbl_804B6008[];
extern char lbl_804B606C[];
extern char lbl_805609C8[8];
extern void *lbl_805621F4;
extern void *lbl_805654B0;
extern void *lbl_805654B4;
void *fn_801CB87C();
void *fn_801CB8B8();
void fn_801CB928();
void fn_801CB950();
void *fn_801CB9BC();
}
struct UnknownGenObject801CB8B8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CB808(void *object){
 fn_801CB928();
 return fn_8006546C(lbl_805654B0,object);
}
void *fn_801CB840(){
 if(!lbl_805654B0) lbl_805654B0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805654B0;
}
void *fn_801CB87C(){
 if(!lbl_805654B0 || !(reinterpret_cast<unsigned int *>(lbl_805654B0)[0x24/4]&4)) fn_801CB928();
 return lbl_805654B0;
}
void *fn_801CB8B8(){
 UnknownGenObject801CB8B8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B606C;
 object.unknown00=lbl_804B6008;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB928(){
 fn_80066188((int)fn_801CB950);
}
void fn_801CB950(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805654B0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CB9BC,(int)lbl_804B2344,20,(int)fn_801CB8B8,0,0,(int)lbl_805609C8);
}
void *fn_801CB9BC(){return fn_801CB87C();}
void *fn_801CB9DC(void *object){
 fn_801CBBF0();
 return fn_8006546C(lbl_805654B4,object);
}
void *fn_801CBA14(){
 if(!lbl_805654B4 || !(reinterpret_cast<unsigned int *>(lbl_805654B4)[0x24/4]&4)) fn_801CBBF0();
 return lbl_805654B4;
}
}
#pragma pop
