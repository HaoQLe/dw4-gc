#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801C1FA4();
void *fn_801C20FC();
void *fn_801E57B8();
void *fn_801E57DC();
extern char lbl_804AAFB8[];
extern char lbl_804AFB7C[];
extern char lbl_804B4DAC[];
extern void *lbl_805621F4;
extern void *lbl_80564FA0;
extern void *lbl_80564FA4;
void *fn_801C1E68();
void *fn_801C1EA4();
void fn_801C1EE4();
void fn_801C1F0C();
void *fn_801C1F84();
}
struct UnknownGenObject801C1EA4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801C1D68(){return fn_801E57B8();}
void *fn_801C1D88(){return fn_801E57DC();}
void *fn_801C1DA8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564FA0) lbl_80564FA0=fn_800635C8(data+0x7A0,data+0x4B9C,data+0x4BB0,0x5);
 return lbl_80564FA0;
}
void *fn_801C1DF4(void *object){
 fn_801C1EE4();
 return fn_8006546C(lbl_80564FA4,object);
}
void *fn_801C1E2C(){
 if(!lbl_80564FA4) lbl_80564FA4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FA4;
}
void *fn_801C1E68(){
 if(!lbl_80564FA4 || !(reinterpret_cast<unsigned int *>(lbl_80564FA4)[0x24/4]&4)) fn_801C1EE4();
 return lbl_80564FA4;
}
void *fn_801C1EA4(){
 UnknownGenObject801C1EA4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B4DAC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1EE4(){
 fn_80066188((int)fn_801C1F0C);
}
void fn_801C1F0C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FA4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C1F84,(int)lbl_804AFB7C,40,(int)fn_801C1EA4,(int)fn_801C1FA4,(int)fn_801C20FC,0);
}
void *fn_801C1F84(){return fn_801C1E68();}
}
#pragma pop
