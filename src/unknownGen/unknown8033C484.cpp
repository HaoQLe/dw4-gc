#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWLoadIntf2NameSel_vtable[];
}
struct UnknownGenRoot8033C484 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033C484(){fn_8006665C(this);}
};
struct UnknownGenObject8033C484_0 : UnknownGenRoot8033C484 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033C484_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8033C484_1 : UnknownGenObject8033C484_0 {
 inline ~UnknownGenObject8033C484_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033C484 : UnknownGenObject8033C484_1 {
 char unknown0C[276];
 inline ~UnknownGenObject8033C484(){unknown00=beNDMWLoadIntf2NameSel_vtable;}
};
extern "C" {
void *beNDMWLoadIntf2NameSel_vtableRead(){
 UnknownGenObject8033C484 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWLoadIntf2NameSel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
