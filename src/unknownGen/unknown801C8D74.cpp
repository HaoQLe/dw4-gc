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
void fn_801AA6DC();
void fn_801C9148();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B19A8[];
extern char lbl_804B6880[];
extern char lbl_804B68E4[];
extern char lbl_80560898[8];
extern void *lbl_805621F4;
extern void *lbl_80565384;
extern void *lbl_80565388;
void *fn_801C8DB0();
void *fn_801C8DEC();
void fn_801C8E5C();
void fn_801C8E84();
void *fn_801C8EF0();
}
struct UnknownGenObject801C8DEC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C8D74(){
 if(!lbl_80565384) lbl_80565384=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565384;
}
void *fn_801C8DB0(){
 if(!lbl_80565384 || !(reinterpret_cast<unsigned int *>(lbl_80565384)[0x24/4]&4)) fn_801C8E5C();
 return lbl_80565384;
}
void *fn_801C8DEC(){
 UnknownGenObject801C8DEC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B68E4;
 object.unknown00=lbl_804B6880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C8E5C(){
 fn_80066188((int)fn_801C8E84);
}
void fn_801C8E84(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565384,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C8EF0,(int)lbl_804B19A8,20,(int)fn_801C8DEC,0,0,(int)lbl_80560898);
}
void *fn_801C8EF0(){return fn_801C8DB0();}
void *fn_801C8F10(){
 if(!lbl_80565388) lbl_80565388=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565388;
}
void *fn_801C8F4C(){
 if(!lbl_80565388 || !(reinterpret_cast<unsigned int *>(lbl_80565388)[0x24/4]&4)) fn_801C9148();
 return lbl_80565388;
}
}
#pragma pop
