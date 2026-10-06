#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3D00[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80136B6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136B6C(){fn_8006665C(this);}
};
struct UnknownGenObject80136B6C_0 : UnknownGenRoot80136B6C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136B6C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136B6C : UnknownGenObject80136B6C_0 {
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 UnknownGenString unknown40;
 char unknown44[4];
 inline ~UnknownGenObject80136B6C(){unknown00=lbl_804A3D00;}
};
extern "C" {
void *fn_80136B6C(){
 UnknownGenObject80136B6C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3D00;
 object.unknown28.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
