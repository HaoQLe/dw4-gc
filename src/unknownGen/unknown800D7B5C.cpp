#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D03C4();
void *fn_800D0464();
void fn_800D7D34();
extern char lbl_80473000[];
extern char lbl_8048E4A4[];
extern char lbl_80491580[];
extern char lbl_80492D58[];
extern char lbl_80493EEC[];
extern char lbl_8055EDF8[8];
extern void *lbl_80562E14;
extern void *lbl_805633E4;
void *fn_800D7B98();
void fn_800D7C90();
void fn_800D7CB8();
void *fn_800D7D2C();
}
struct UnknownGenRoot800D7B98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7B98(){fn_8006665C(this);}
};
struct UnknownGenObject800D7B98_0 : UnknownGenRoot800D7B98 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject800D7B98_0(){unknown00=lbl_80473000;}
};
struct UnknownGenObject800D7B98_1 : UnknownGenObject800D7B98_0 {
 inline ~UnknownGenObject800D7B98_1(){unknown00=lbl_80493EEC;}
};
struct UnknownGenObject800D7B98_2 : UnknownGenObject800D7B98_1 {
 inline ~UnknownGenObject800D7B98_2(){unknown00=lbl_80492D58;}
};
struct UnknownGenObject800D7B98 : UnknownGenObject800D7B98_2 {
 char unknown14[28];
 inline ~UnknownGenObject800D7B98(){unknown00=lbl_80491580;}
};
extern "C" {
void *fn_800D7B5C(){
 if(!lbl_805633E4 || !(reinterpret_cast<unsigned int *>(lbl_805633E4)[0x24/4]&4)) fn_800D7C90();
 return lbl_805633E4;
}
void *fn_800D7B98(){
 UnknownGenObject800D7B98 object;
 object.unknown00=lbl_80473000;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_80493EEC;
 object.unknown00=lbl_80492D58;
 object.unknown00=lbl_80491580;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D7C90(){
 fn_80066188((int)fn_800D7CB8);
}
void fn_800D7CB8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633E4,(int)fn_800D03C4,(int)fn_800D7D2C,(int)fn_800D0464,(int)lbl_8048E4A4,44,(int)fn_800D7B98,(int)fn_800D7D34,0,(int)lbl_8055EDF8);
}
void *fn_800D7D2C(){return lbl_80562E14;}
}
#pragma pop
