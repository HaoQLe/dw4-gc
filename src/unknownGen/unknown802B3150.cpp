#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beWeaponSeqData_vtable[];
}
struct UnknownGenRoot802B3150 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B3150(){fn_8006665C(this);}
};
struct UnknownGenObject802B3150_0 : UnknownGenRoot802B3150 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B3150_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802B3150 : UnknownGenObject802B3150_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802B3150(){unknown00=beWeaponSeqData_vtable;}
};
extern "C" {
void *beWeaponSeqData_vtableRead(){
 UnknownGenObject802B3150 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beWeaponSeqData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
