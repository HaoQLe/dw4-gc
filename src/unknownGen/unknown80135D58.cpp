#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3A38[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80135D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135D58(){fn_8006665C(this);}
};
struct UnknownGenObject80135D58_0 : UnknownGenRoot80135D58 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135D58_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135D58 : UnknownGenObject80135D58_0 {
 char unknown28[8];
 inline ~UnknownGenObject80135D58(){unknown00=lbl_804A3A38;}
};
extern "C" {
void *fn_80135D58(){
 UnknownGenObject80135D58 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3A38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
