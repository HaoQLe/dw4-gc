#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D97A8[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802C91B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C91B0(){fn_8006665C(this);}
};
struct UnknownGenObject802C91B0_0 : UnknownGenRoot802C91B0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C91B0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C91B0_1 : UnknownGenObject802C91B0_0 {
 inline ~UnknownGenObject802C91B0_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802C91B0 : UnknownGenObject802C91B0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802C91B0(){unknown00=lbl_804D97A8;}
};
extern "C" {
void *beModelCtrlInfoDataTrc_vtableRead(){
 UnknownGenObject802C91B0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D97A8;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
