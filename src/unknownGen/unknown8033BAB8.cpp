#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWLogoCtrlData_vtable[];
}
struct UnknownGenRoot8033BAB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033BAB8(){igObject_construct(this);}
};
struct UnknownGenObject8033BAB8_0 : UnknownGenRoot8033BAB8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033BAB8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8033BAB8_1 : UnknownGenObject8033BAB8_0 {
 inline ~UnknownGenObject8033BAB8_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033BAB8 : UnknownGenObject8033BAB8_1 {
 char unknown0C[20];
 inline ~UnknownGenObject8033BAB8(){unknown00=beNDMWLogoCtrlData_vtable;}
};
extern "C" {
void *beNDMWLogoCtrlData_vtableRead(){
 UnknownGenObject8033BAB8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWLogoCtrlData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
