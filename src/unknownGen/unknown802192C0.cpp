#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80219564();
extern char lbl_804BA990[];
extern char lbl_804BA9A0[];
extern char lbl_804BB680[];
extern void *lbl_80565B08;
void *fn_802192F8();
void *fn_80219334();
void fn_802194A4();
void fn_802194CC();
void *fn_80219544();
}
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){fn_8006665C(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=lbl_804BB680;}
};
extern "C" {
void *fn_802192C0(void *object){
 fn_802194A4();
 return fn_8006546C(lbl_80565B08,object);
}
void *fn_802192F8(){
 if(!lbl_80565B08 || !(reinterpret_cast<unsigned int *>(lbl_80565B08)[0x24/4]&4)) fn_802194A4();
 return lbl_80565B08;
}
void *fn_80219334(){
 UnknownGenObject80219334 object;
 object.unknown00=lbl_804BB680;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802194A4(){
 fn_80066188((int)fn_802194CC);
}
void fn_802194CC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80219544,(int)lbl_804BA9A0,28,(int)fn_80219334,(int)fn_80219564,0,(int)lbl_804BA990);
}
void *fn_80219544(){return fn_802192F8();}
}
#pragma pop
