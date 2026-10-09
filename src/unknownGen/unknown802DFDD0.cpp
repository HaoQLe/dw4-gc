#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DDCD4[];
}
struct UnknownGenRoot802DFDD0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DFDD0(){fn_8006665C(this);}
};
struct UnknownGenObject802DFDD0_0 : UnknownGenRoot802DFDD0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DFDD0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DFDD0_1 : UnknownGenObject802DFDD0_0 {
 inline ~UnknownGenObject802DFDD0_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802DFDD0 : UnknownGenObject802DFDD0_1 {
 char unknown0C[20];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[28];
 inline ~UnknownGenObject802DFDD0(){unknown00=lbl_804DDCD4;}
};
extern "C" {
void *beCri_vtableRead(){
 UnknownGenObject802DFDD0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DDCD4;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
