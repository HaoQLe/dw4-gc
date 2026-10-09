#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DDE84[];
}
struct UnknownGenRoot802DA570 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DA570(){fn_8006665C(this);}
};
struct UnknownGenObject802DA570_0 : UnknownGenRoot802DA570 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DA570_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DA570_1 : UnknownGenObject802DA570_0 {
 inline ~UnknownGenObject802DA570_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802DA570 : UnknownGenObject802DA570_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 char unknown38[8];
 inline ~UnknownGenObject802DA570(){unknown00=lbl_804DDE84;}
};
extern "C" {
void *beFileListInfoManager_vtableRead(){
 UnknownGenObject802DA570 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DDE84;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
