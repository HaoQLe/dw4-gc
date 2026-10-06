#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80269380();
void fn_8026958C();
extern char lbl_8047650C[];
extern char lbl_804C92B0[];
extern char lbl_804C9AF0[];
extern char lbl_80560EB0[8];
extern void *lbl_80565FEC;
void *fn_802693B4();
void *fn_802693F0();
void fn_802694D0();
void fn_802694F8();
void *fn_8026956C();
}
struct UnknownGenRoot802693F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802693F0(){fn_8006665C(this);}
};
struct UnknownGenObject802693F0_0 : UnknownGenRoot802693F0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802693F0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802693F0 : UnknownGenObject802693F0_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802693F0(){unknown00=lbl_804C9AF0;}
};
extern "C" {
void *fn_802693B4(){
 if(!lbl_80565FEC || !(reinterpret_cast<unsigned int *>(lbl_80565FEC)[0x24/4]&4)) fn_802694D0();
 return lbl_80565FEC;
}
void *fn_802693F0(){
 UnknownGenObject802693F0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804C9AF0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802694D0(){
 fn_80066188((int)fn_802694F8);
}
void fn_802694F8(){
 fn_80269380();
 fn_80066204(0,(int)&lbl_80565FEC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8026956C,(int)lbl_804C92B0,20,(int)fn_802693F0,(int)fn_8026958C,0,(int)lbl_80560EB0);
}
void *fn_8026956C(){return fn_802693B4();}
}
#pragma pop
