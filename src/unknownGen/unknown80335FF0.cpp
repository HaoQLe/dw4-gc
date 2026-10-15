#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWSaveCtrlCtrlData_vtable[];
}
struct UnknownGenRoot80335FF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80335FF0(){igObject_construct(this);}
};
struct UnknownGenObject80335FF0_0 : UnknownGenRoot80335FF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80335FF0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80335FF0_1 : UnknownGenObject80335FF0_0 {
 inline ~UnknownGenObject80335FF0_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80335FF0 : UnknownGenObject80335FF0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80335FF0(){unknown00=beNDMWSaveCtrlCtrlData_vtable;}
};
extern "C" {
void *beNDMWSaveCtrlCtrlData_vtableRead(){
 UnknownGenObject80335FF0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWSaveCtrlCtrlData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
