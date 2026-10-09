#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E5C8C[];
}
struct UnknownGenRoot8033C7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033C7F8(){fn_8006665C(this);}
};
struct UnknownGenObject8033C7F8_0 : UnknownGenRoot8033C7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033C7F8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033C7F8_1 : UnknownGenObject8033C7F8_0 {
 inline ~UnknownGenObject8033C7F8_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033C7F8 : UnknownGenObject8033C7F8_1 {
 char unknown0C[68];
 inline ~UnknownGenObject8033C7F8(){unknown00=lbl_804E5C8C;}
};
extern "C" {
void *beNDMWLoadIntf2ChrDataSel_vtableRead(){
 UnknownGenObject8033C7F8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E5C8C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
