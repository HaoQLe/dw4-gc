#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A37E4[];
extern char lbl_804A4744[];
extern char lbl_804A4878[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80135340 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135340(){fn_8006665C(this);}
};
struct UnknownGenObject80135340_0 : UnknownGenRoot80135340 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135340_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135340_1 : UnknownGenObject80135340_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject80135340_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject80135340_2 : UnknownGenObject80135340_1 {
 inline ~UnknownGenObject80135340_2(){unknown00=lbl_804A4878;}
};
struct UnknownGenObject80135340 : UnknownGenObject80135340_2 {
 char unknown30[8];
 inline ~UnknownGenObject80135340(){unknown00=lbl_804A37E4;}
};
extern "C" {
void *fn_80135340(){
 UnknownGenObject80135340 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A4878;
 object.unknown00=lbl_804A37E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
