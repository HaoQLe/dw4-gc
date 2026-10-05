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
void fn_801BD010();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AEEEC[];
extern char lbl_804B77DC[];
extern char lbl_804B7840[];
extern char lbl_8056053C[8];
extern void *lbl_805621F4;
extern void *lbl_80564DF4;
extern void *lbl_80564DF8;
void *fn_801BCB58();
void *fn_801BCB94();
void fn_801BCC04();
void fn_801BCC2C();
void *fn_801BCC98();
}
struct UnknownGenObject801BCB94 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BCB1C(){
 if(!lbl_80564DF4) lbl_80564DF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DF4;
}
void *fn_801BCB58(){
 if(!lbl_80564DF4 || !(reinterpret_cast<unsigned int *>(lbl_80564DF4)[0x24/4]&4)) fn_801BCC04();
 return lbl_80564DF4;
}
void *fn_801BCB94(){
 UnknownGenObject801BCB94 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7840;
 object.unknown00=lbl_804B77DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BCC04(){
 fn_80066188((int)fn_801BCC2C);
}
void fn_801BCC2C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DF4,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BCC98,(int)lbl_804AEEEC,20,(int)fn_801BCB94,0,0,(int)lbl_8056053C);
}
void *fn_801BCC98(){return fn_801BCB58();}
void *fn_801BCCB8(){
 if(!lbl_80564DF8 || !(reinterpret_cast<unsigned int *>(lbl_80564DF8)[0x24/4]&4)) fn_801BD010();
 return lbl_80564DF8;
}
}
#pragma pop
