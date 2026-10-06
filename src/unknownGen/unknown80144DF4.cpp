#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A62BC[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
}
struct UnknownGenRoot80144DF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144DF4(){fn_8006665C(this);}
};
struct UnknownGenObject80144DF4 : UnknownGenRoot80144DF4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80144DF4(){unknown00=lbl_804A62BC;}
};
extern "C" {
void *fn_80144DF4(){
 UnknownGenObject80144DF4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A62BC;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
