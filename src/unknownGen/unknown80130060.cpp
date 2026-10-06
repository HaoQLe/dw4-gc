#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6460[];
extern char lbl_804AADE0[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80130060 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130060(){fn_8006665C(this);}
};
struct UnknownGenObject80130060 : UnknownGenRoot80130060 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80130060(){unknown00=lbl_804AADE0;}
};
extern "C" {
void *fn_80130060(){
 UnknownGenObject80130060 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 object.unknown00=lbl_804AADE0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
