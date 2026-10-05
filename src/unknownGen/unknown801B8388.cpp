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
void fn_801B8708();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AE00C[];
extern char lbl_804B7F34[];
extern char lbl_804B7F98[];
extern char lbl_80560424[8];
extern void *lbl_805621F4;
extern void *lbl_80564C18;
extern void *lbl_80564C1C;
void *fn_801B8388();
void *fn_801B83C4();
void fn_801B8434();
void fn_801B845C();
void *fn_801B84C8();
}
struct UnknownGenObject801B83C4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801B8388(){
 if(!lbl_80564C18 || !(reinterpret_cast<unsigned int *>(lbl_80564C18)[0x24/4]&4)) fn_801B8434();
 return lbl_80564C18;
}
void *fn_801B83C4(){
 UnknownGenObject801B83C4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7F98;
 object.unknown00=lbl_804B7F34;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B8434(){
 fn_80066188((int)fn_801B845C);
}
void fn_801B845C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C18,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B84C8,(int)lbl_804AE00C,20,(int)fn_801B83C4,0,0,(int)lbl_80560424);
}
void *fn_801B84C8(){return fn_801B8388();}
void *fn_801B84E8(){
 if(!lbl_80564C1C) lbl_80564C1C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C1C;
}
void *fn_801B8524(){
 if(!lbl_80564C1C || !(reinterpret_cast<unsigned int *>(lbl_80564C1C)[0x24/4]&4)) fn_801B8708();
 return lbl_80564C1C;
}
}
#pragma pop
