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
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80402E28();
void fn_80403828();
extern char lbl_80461D34[];
extern char lbl_80461D4C[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_804EFF58[];
extern char lbl_804EFF60[];
extern char lbl_804F1680[];
extern char lbl_804F16E4[];
extern char lbl_804F1CF0[];
extern void *lbl_8055C740;
extern void *lbl_8055C744;
extern void *lbl_805621F4;
void *fn_804033D0();
void *fn_8040341C();
void fn_80403490();
void fn_804034B8();
void *fn_8040352C();
void *fn_804035A0();
void *fn_804035EC();
void fn_80403764();
void fn_8040378C();
void *fn_80403808();
}
struct UnknownGenObject8040341C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot804035EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804035EC(){fn_8006665C(this);}
};
struct UnknownGenObject804035EC : UnknownGenRoot804035EC {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[16];
 inline ~UnknownGenObject804035EC(){unknown00=lbl_804F1CF0;}
};
extern "C" {
void *fn_8040337C(){
 if(!lbl_8055C740) lbl_8055C740=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C740;
}
void *fn_804033D0(){
 if(!lbl_8055C740 || !(reinterpret_cast<unsigned int *>(lbl_8055C740)[0x24/4]&4)) fn_80403490();
 return lbl_8055C740;
}
void *fn_8040341C(){
 UnknownGenObject8040341C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804F16E4;
 object.unknown00=lbl_804F1680;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80403490(){
 fn_80066188((int)fn_804034B8);
}
void fn_804034B8(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C740,(int)fn_8002907C,(int)fn_80024180,(int)fn_8040352C,(int)lbl_80461D34,20,(int)fn_8040341C,0,0,(int)lbl_804EFF58);
}
void *fn_8040352C(){return fn_804033D0();}
void *fn_8040354C(){
 if(!lbl_8055C744) lbl_8055C744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C744;
}
void *fn_804035A0(){
 if(!lbl_8055C744 || !(reinterpret_cast<unsigned int *>(lbl_8055C744)[0x24/4]&4)) fn_80403764();
 return lbl_8055C744;
}
void *fn_804035EC(){
 UnknownGenObject804035EC object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804F1CF0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80403764(){
 fn_80066188((int)fn_8040378C);
}
void fn_8040378C(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C744,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80403808,(int)lbl_80461D4C,60,(int)fn_804035EC,(int)fn_80403828,0,(int)lbl_804EFF60);
}
void *fn_80403808(){return fn_804035A0();}
}
#pragma pop
