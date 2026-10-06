#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3B58[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80136210 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136210(){fn_8006665C(this);}
};
struct UnknownGenObject80136210_0 : UnknownGenRoot80136210 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136210_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136210 : UnknownGenObject80136210_0 {
 char unknown28[8];
 inline ~UnknownGenObject80136210(){unknown00=lbl_804A3B58;}
};
extern "C" {
void *fn_80136210(){
 UnknownGenObject80136210 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3B58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
