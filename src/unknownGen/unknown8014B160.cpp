#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void fn_8014B3F0();
extern char lbl_8049F120[];
extern char lbl_8049F12C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6CC0[];
extern char lbl_804AAF48[];
extern void *lbl_80564300;
void *fn_8014B160();
void *fn_8014B19C();
void fn_8014B330();
void fn_8014B358();
void *fn_8014B3D0();
}
struct UnknownGenRoot8014B19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B19C(){fn_8006665C(this);}
};
struct UnknownGenObject8014B19C : UnknownGenRoot8014B19C {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8014B19C(){unknown00=lbl_804A6CC0;}
};
extern "C" {
void *fn_8014B160(){
 if(!lbl_80564300 || !(reinterpret_cast<unsigned int *>(lbl_80564300)[0x24/4]&4)) fn_8014B330();
 return lbl_80564300;
}
void *fn_8014B19C(){
 UnknownGenObject8014B19C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A6CC0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B330(){
 fn_80066188((int)fn_8014B358);
}
void fn_8014B358(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564300,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014B3D0,(int)lbl_8049F12C,52,(int)fn_8014B19C,(int)fn_8014B3F0,0,(int)lbl_8049F120);
}
void *fn_8014B3D0(){return fn_8014B160();}
}
#pragma pop
