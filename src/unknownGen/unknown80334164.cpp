#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E80EC[];
}
struct UnknownGenRoot80334164 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80334164(){fn_8006665C(this);}
};
struct UnknownGenObject80334164_0 : UnknownGenRoot80334164 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80334164_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80334164_1 : UnknownGenObject80334164_0 {
 inline ~UnknownGenObject80334164_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject80334164_2 : UnknownGenObject80334164_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80334164_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject80334164 : UnknownGenObject80334164_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[20];
 inline ~UnknownGenObject80334164(){unknown00=lbl_804E80EC;}
};
extern "C" {
void *fn_80334164(){
 UnknownGenObject80334164 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E80EC;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
