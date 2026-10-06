#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A5F30[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80141D38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80141D38(){fn_8006665C(this);}
};
struct UnknownGenObject80141D38_0 : UnknownGenRoot80141D38 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80141D38_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80141D38 : UnknownGenObject80141D38_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80141D38(){unknown00=lbl_804A5F30;}
};
extern "C" {
void *fn_80141D38(){
 UnknownGenObject80141D38 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A5F30;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
