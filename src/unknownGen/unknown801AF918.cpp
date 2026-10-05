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
void fn_801AFBE8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC838[];
extern char lbl_804B93A4[];
extern char lbl_804B9408[];
extern char lbl_8056024C[8];
extern void *lbl_805621F4;
extern void *lbl_80564890;
extern void *lbl_80564894;
void *fn_801AF954();
void *fn_801AF990();
void fn_801AFA00();
void fn_801AFA28();
void *fn_801AFA94();
}
struct UnknownGenObject801AF990 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801AF918(){
 if(!lbl_80564890) lbl_80564890=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564890;
}
void *fn_801AF954(){
 if(!lbl_80564890 || !(reinterpret_cast<unsigned int *>(lbl_80564890)[0x24/4]&4)) fn_801AFA00();
 return lbl_80564890;
}
void *fn_801AF990(){
 UnknownGenObject801AF990 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9408;
 object.unknown00=lbl_804B93A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFA00(){
 fn_80066188((int)fn_801AFA28);
}
void fn_801AFA28(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564890,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AFA94,(int)lbl_804AC838,20,(int)fn_801AF990,0,0,(int)lbl_8056024C);
}
void *fn_801AFA94(){return fn_801AF954();}
void *fn_801AFAB4(){
 if(!lbl_80564894 || !(reinterpret_cast<unsigned int *>(lbl_80564894)[0x24/4]&4)) fn_801AFBE8();
 return lbl_80564894;
}
}
#pragma pop
