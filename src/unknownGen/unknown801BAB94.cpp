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
void fn_801BAF58();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AEC3C[];
extern char lbl_804B7B50[];
extern char lbl_804B7BB4[];
extern char lbl_8056048C[8];
extern void *lbl_805621F4;
extern void *lbl_80564D80;
extern void *lbl_80564D84;
void *fn_801BABD0();
void *fn_801BAC0C();
void fn_801BAC7C();
void fn_801BACA4();
void *fn_801BAD10();
}
struct UnknownGenObject801BAC0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BAB94(){
 if(!lbl_80564D80) lbl_80564D80=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D80;
}
void *fn_801BABD0(){
 if(!lbl_80564D80 || !(reinterpret_cast<unsigned int *>(lbl_80564D80)[0x24/4]&4)) fn_801BAC7C();
 return lbl_80564D80;
}
void *fn_801BAC0C(){
 UnknownGenObject801BAC0C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7BB4;
 object.unknown00=lbl_804B7B50;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BAC7C(){
 fn_80066188((int)fn_801BACA4);
}
void fn_801BACA4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D80,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BAD10,(int)lbl_804AEC3C,20,(int)fn_801BAC0C,0,0,(int)lbl_8056048C);
}
void *fn_801BAD10(){return fn_801BABD0();}
void *fn_801BAD30(void *object){
 fn_801BAF58();
 return fn_8006546C(lbl_80564D84,object);
}
void *fn_801BAD68(){
 if(!lbl_80564D84) lbl_80564D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D84;
}
void *fn_801BADA4(){
 if(!lbl_80564D84 || !(reinterpret_cast<unsigned int *>(lbl_80564D84)[0x24/4]&4)) fn_801BAF58();
 return lbl_80564D84;
}
}
#pragma pop
