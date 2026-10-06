#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6D58[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014B4F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B4F0(){fn_8006665C(this);}
};
struct UnknownGenObject8014B4F0 : UnknownGenRoot8014B4F0 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014B4F0(){unknown00=lbl_804A6D58;}
};
extern "C" {
void *fn_8014B4F0(){
 UnknownGenObject8014B4F0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A6D58;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
