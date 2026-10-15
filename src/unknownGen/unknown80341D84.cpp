#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWLoadCtrl2CtrlData_vtable[];
}
struct UnknownGenRoot80341D84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80341D84(){igObject_construct(this);}
};
struct UnknownGenObject80341D84_0 : UnknownGenRoot80341D84 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80341D84_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80341D84_1 : UnknownGenObject80341D84_0 {
 inline ~UnknownGenObject80341D84_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80341D84 : UnknownGenObject80341D84_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80341D84(){unknown00=beNDMWLoadCtrl2CtrlData_vtable;}
};
extern "C" {
void *beNDMWLoadCtrl2CtrlData_vtableRead(){
 UnknownGenObject80341D84 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWLoadCtrl2CtrlData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
