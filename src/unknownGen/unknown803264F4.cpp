#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWTitle2CtrlData_vtable[];
}
struct UnknownGenRoot803264F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803264F4(){fn_8006665C(this);}
};
struct UnknownGenObject803264F4_0 : UnknownGenRoot803264F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803264F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject803264F4_1 : UnknownGenObject803264F4_0 {
 inline ~UnknownGenObject803264F4_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject803264F4 : UnknownGenObject803264F4_1 {
 char unknown0C[36];
 inline ~UnknownGenObject803264F4(){unknown00=beNDMWTitle2CtrlData_vtable;}
};
extern "C" {
void *beNDMWTitle2CtrlData_vtableRead(){
 UnknownGenObject803264F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWTitle2CtrlData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
