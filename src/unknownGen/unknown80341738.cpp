#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E4C04[];
}
struct UnknownGenRoot80341738 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80341738(){fn_8006665C(this);}
};
struct UnknownGenObject80341738 : UnknownGenRoot80341738 {
 char unknown04[8];
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[12];
 inline ~UnknownGenObject80341738(){unknown00=lbl_804E4C04;}
};
extern "C" {
void *beLoadIntf2ComMdlData_vtableRead(){
 UnknownGenObject80341738 object;
 object.unknown00=lbl_804E4C04;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
