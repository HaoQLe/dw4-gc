#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80216984();
void *fn_80218670();
void fn_80218A20();
extern char lbl_804BA6C8[];
extern char lbl_804BA6D8[];
extern char lbl_804BBD38[];
extern char lbl_804BBD94[];
extern char lbl_804BBDF0[];
extern char lbl_804BCA64[];
extern char lbl_80560C48[4];
extern char lbl_80560C4C[4];
extern char lbl_80560C50[4];
extern char lbl_80560C54[4];
extern void *lbl_80565A90;
extern void *lbl_80565A98;
void *fn_802186E8();
void *fn_80218724();
void fn_80218764();
void fn_8021878C();
void *fn_802187FC();
void fn_8021881C();
void *fn_80218884();
void *fn_802188C0();
void fn_80218968();
void fn_80218990();
void *fn_80218A00();
}
struct UnknownGenObject80218724_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802188C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802188C0(){fn_8006665C(this);}
};
struct UnknownGenObject802188C0_0 : UnknownGenRoot802188C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802188C0_0(){unknown00=lbl_804BCA64;}
};
struct UnknownGenObject802188C0_1 : UnknownGenObject802188C0_0 {
 inline ~UnknownGenObject802188C0_1(){unknown00=lbl_804BBD94;}
};
struct UnknownGenObject802188C0 : UnknownGenObject802188C0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802188C0(){unknown00=lbl_804BBD38;}
};
extern "C" {
void *fn_802186E8(){
 if(!lbl_80565A90 || !(reinterpret_cast<unsigned int *>(lbl_80565A90)[0x24/4]&4)) fn_80218764();
 return lbl_80565A90;
}
void *fn_80218724(){
 UnknownGenObject80218724_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BBDF0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218764(){
 fn_80066188((int)fn_8021878C);
}
void fn_8021878C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A90,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802187FC,(int)lbl_804BA6C8,12,(int)fn_80218724,(int)fn_8021881C,0,0);
}
void *fn_802187FC(){return fn_802186E8();}
void fn_8021881C(){
 void *value0=lbl_80565A90;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C48,1);
 fn_800659C0(value0,lbl_80560C4C,lbl_80560C50,lbl_80560C54,value1);
}
void *fn_80218884(){
 if(!lbl_80565A98 || !(reinterpret_cast<unsigned int *>(lbl_80565A98)[0x24/4]&4)) fn_80218968();
 return lbl_80565A98;
}
void *fn_802188C0(){
 UnknownGenObject802188C0 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 object.unknown00=lbl_804BBD94;
 object.unknown00=lbl_804BBD38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218968(){
 fn_80066188((int)fn_80218990);
}
void fn_80218990(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A98,(int)fn_80216984,(int)fn_80218670,(int)fn_80218A00,(int)lbl_804BA6D8,36,(int)fn_802188C0,(int)fn_80218A20,0,0);
}
void *fn_80218A00(){return fn_80218884();}
}
#pragma pop
