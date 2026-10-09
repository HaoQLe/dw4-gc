#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D54E8[];
}
struct UnknownGenRoot802DD32C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD32C(){fn_8006665C(this);}
};
struct UnknownGenObject802DD32C_0 : UnknownGenRoot802DD32C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD32C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DD32C : UnknownGenObject802DD32C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DD32C(){unknown00=lbl_804D54E8;}
};
extern "C" {
void *beDataObjIntList_vtableRead(){
 UnknownGenObject802DD32C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D54E8;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
