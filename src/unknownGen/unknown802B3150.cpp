#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DCB00[];
}
struct UnknownGenRoot802B3150 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B3150(){fn_8006665C(this);}
};
struct UnknownGenObject802B3150_0 : UnknownGenRoot802B3150 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B3150_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B3150 : UnknownGenObject802B3150_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802B3150(){unknown00=lbl_804DCB00;}
};
extern "C" {
void *beWeaponSeqData_vtableRead(){
 UnknownGenObject802B3150 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DCB00;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
