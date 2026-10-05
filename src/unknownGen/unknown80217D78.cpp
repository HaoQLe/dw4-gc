#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_802181E0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804BA5A4[];
extern char lbl_804BA5C4[];
extern char lbl_804BC224[];
extern char lbl_804BC288[];
extern char lbl_804BC2EC[];
extern char lbl_804BC350[];
extern char lbl_80560C14[8];
extern char lbl_80560C1C[8];
extern void *lbl_805621F4;
extern void *lbl_80565A58;
extern void *lbl_80565A5C;
extern void *lbl_80565A60;
void *fn_80217DB4();
void *fn_80217DF0();
void fn_80217E60();
void fn_80217E88();
void *fn_80217EF4();
void *fn_80217F88();
void *fn_80217FC4();
void fn_80218034();
void fn_8021805C();
void *fn_802180C8();
}
struct UnknownGenObject80217DF0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217D78(){
 if(!lbl_80565A58) lbl_80565A58=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A58;
}
void *fn_80217DB4(){
 if(!lbl_80565A58 || !(reinterpret_cast<unsigned int *>(lbl_80565A58)[0x24/4]&4)) fn_80217E60();
 return lbl_80565A58;
}
void *fn_80217DF0(){
 UnknownGenObject80217DF0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804BC350;
 object.unknown00=lbl_804BC2EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217E60(){
 fn_80066188((int)fn_80217E88);
}
void fn_80217E88(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A58,(int)fn_80029694,(int)fn_80023FDC,(int)fn_80217EF4,(int)lbl_804BA5A4,20,(int)fn_80217DF0,0,0,(int)lbl_80560C14);
}
void *fn_80217EF4(){return fn_80217DB4();}
void *fn_80217F14(void *object){
 fn_80218034();
 return fn_8006546C(lbl_80565A5C,object);
}
void *fn_80217F4C(){
 if(!lbl_80565A5C) lbl_80565A5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A5C;
}
void *fn_80217F88(){
 if(!lbl_80565A5C || !(reinterpret_cast<unsigned int *>(lbl_80565A5C)[0x24/4]&4)) fn_80218034();
 return lbl_80565A5C;
}
void *fn_80217FC4(){
 UnknownGenObject80217FC4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BC288;
 object.unknown00=lbl_804BC224;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218034(){
 fn_80066188((int)fn_8021805C);
}
void fn_8021805C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A5C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802180C8,(int)lbl_804BA5C4,20,(int)fn_80217FC4,0,0,(int)lbl_80560C1C);
}
void *fn_802180C8(){return fn_80217F88();}
void *fn_802180E8(void *object){
 fn_802181E0();
 return fn_8006546C(lbl_80565A60,object);
}
void *fn_80218120(){
 if(!lbl_80565A60) lbl_80565A60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A60;
}
void *fn_8021815C(){
 if(!lbl_80565A60 || !(reinterpret_cast<unsigned int *>(lbl_80565A60)[0x24/4]&4)) fn_802181E0();
 return lbl_80565A60;
}
}
#pragma pop
