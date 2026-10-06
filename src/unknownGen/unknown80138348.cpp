#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4148[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80138348 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138348(){fn_8006665C(this);}
};
struct UnknownGenObject80138348_0 : UnknownGenRoot80138348 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138348_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138348 : UnknownGenObject80138348_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject80138348(){unknown00=lbl_804A4148;}
};
extern "C" {
void *fn_80138348(){
 UnknownGenObject80138348 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4148;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
