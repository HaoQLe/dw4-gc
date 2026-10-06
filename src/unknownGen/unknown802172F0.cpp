#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_80217504();
extern char lbl_8047650C[];
extern char lbl_80493DD4[];
extern char lbl_804BA470[];
extern char lbl_804BA47C[];
extern void *lbl_80565A18;
void *fn_802172F0();
void *fn_8021732C();
void fn_80217444();
void fn_8021746C();
void *fn_802174E4();
}
struct UnknownGenRoot8021732C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021732C(){fn_8006665C(this);}
};
struct UnknownGenObject8021732C_0 : UnknownGenRoot8021732C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021732C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021732C : UnknownGenObject8021732C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8021732C(){unknown00=lbl_80493DD4;}
};
extern "C" {
void *fn_802172F0(){
 if(!lbl_80565A18 || !(reinterpret_cast<unsigned int *>(lbl_80565A18)[0x24/4]&4)) fn_80217444();
 return lbl_80565A18;
}
void *fn_8021732C(){
 UnknownGenObject8021732C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217444(){
 fn_80066188((int)fn_8021746C);
}
void fn_8021746C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A18,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802174E4,(int)lbl_804BA47C,20,(int)fn_8021732C,(int)fn_80217504,0,(int)lbl_804BA470);
}
void *fn_802174E4(){return fn_802172F0();}
}
#pragma pop
