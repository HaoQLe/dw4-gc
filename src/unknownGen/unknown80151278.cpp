#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A80E8[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80151278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151278(){fn_8006665C(this);}
};
struct UnknownGenObject80151278_0 : UnknownGenRoot80151278 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151278_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80151278 : UnknownGenObject80151278_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80151278(){unknown00=lbl_804A80E8;}
};
extern "C" {
void *fn_80151278(){
 UnknownGenObject80151278 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A80E8;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
