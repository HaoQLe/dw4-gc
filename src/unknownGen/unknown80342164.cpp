#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804EA71C[];
}
struct UnknownGenRoot80342164 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80342164(){fn_8006665C(this);}
};
struct UnknownGenObject80342164_0 : UnknownGenRoot80342164 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80342164_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80342164_1 : UnknownGenObject80342164_0 {
 inline ~UnknownGenObject80342164_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject80342164_2 : UnknownGenObject80342164_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80342164_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject80342164 : UnknownGenObject80342164_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[20];
 inline ~UnknownGenObject80342164(){unknown00=lbl_804EA71C;}
};
extern "C" {
void *beNDMWLoadCtrl2_vtableRead(){
 UnknownGenObject80342164 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804EA71C;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
