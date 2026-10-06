#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B82A8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804ADFB0[];
extern char lbl_804B7FFC[];
extern char lbl_804B8058[];
extern char lbl_804B80BC[];
extern char lbl_8056040C[8];
extern char lbl_80560414[8];
extern char lbl_8056041C[6];
extern void *lbl_805621F4;
extern void *lbl_80564C04;
extern void *lbl_80564C08;
void *fn_801B7FD8();
void *fn_801B8014();
void fn_801B8084();
void fn_801B80AC();
void *fn_801B8118();
void *fn_801B8174();
void *fn_801B81B0();
void fn_801B81F0();
void fn_801B8218();
void *fn_801B8288();
}
struct UnknownGenObject801B8014_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B81B0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801B7F9C(){
 if(!lbl_80564C04) lbl_80564C04=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C04;
}
void *fn_801B7FD8(){
 if(!lbl_80564C04 || !(reinterpret_cast<unsigned int *>(lbl_80564C04)[0x24/4]&4)) fn_801B8084();
 return lbl_80564C04;
}
void *fn_801B8014(){
 UnknownGenObject801B8014_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B80BC;
 object.unknown00=lbl_804B8058;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B8084(){
 fn_80066188((int)fn_801B80AC);
}
void fn_801B80AC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C04,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B8118,(int)lbl_804ADFB0,20,(int)fn_801B8014,0,0,(int)lbl_8056040C);
}
void *fn_801B8118(){return fn_801B7FD8();}
void *fn_801B8138(){
 if(!lbl_80564C08) lbl_80564C08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C08;
}
void *fn_801B8174(){
 if(!lbl_80564C08 || !(reinterpret_cast<unsigned int *>(lbl_80564C08)[0x24/4]&4)) fn_801B81F0();
 return lbl_80564C08;
}
void *fn_801B81B0(){
 UnknownGenObject801B81B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B7FFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B81F0(){
 fn_80066188((int)fn_801B8218);
}
void fn_801B8218(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B8288,(int)lbl_8056041C,36,(int)fn_801B81B0,(int)fn_801B82A8,0,(int)lbl_80560414);
}
void *fn_801B8288(){return fn_801B8174();}
}
#pragma pop
