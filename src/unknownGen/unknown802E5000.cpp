#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D3E68[];
}
struct UnknownGenRoot802E5000 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E5000(){fn_8006665C(this);}
};
struct UnknownGenObject802E5000_0 : UnknownGenRoot802E5000 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E5000_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E5000 : UnknownGenObject802E5000_0 {
 UnknownGenString unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject802E5000(){unknown00=lbl_804D3E68;}
};
extern "C" {
void *beActionStarterData_vtableRead(){
 UnknownGenObject802E5000 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D3E68;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
