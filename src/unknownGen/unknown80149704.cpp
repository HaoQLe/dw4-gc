#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804930AC[];
extern char lbl_804A6B8C[];
extern char lbl_804A903C[];
}
struct UnknownGenRoot80149704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80149704(){fn_8006665C(this);}
};
struct UnknownGenObject80149704_0 : UnknownGenRoot80149704 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80149704_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject80149704 : UnknownGenObject80149704_0 {
 char unknown14[4];
 inline ~UnknownGenObject80149704(){unknown00=lbl_804A903C;}
};
extern "C" {
void *fn_80149704(){
 UnknownGenObject80149704 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A903C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
