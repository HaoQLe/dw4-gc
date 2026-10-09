#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D5560[];
}
struct UnknownGenRoot802DD0C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD0C8(){fn_8006665C(this);}
};
struct UnknownGenObject802DD0C8_0 : UnknownGenRoot802DD0C8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD0C8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DD0C8 : UnknownGenObject802DD0C8_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802DD0C8(){unknown00=lbl_804D5560;}
};
extern "C" {
void *beDataObjBool_vtableRead(){
 UnknownGenObject802DD0C8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D5560;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
