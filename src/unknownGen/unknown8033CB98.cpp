#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWLoadIntf2SelSlot_vtable[];
}
struct UnknownGenRoot8033CB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033CB98(){igObject_construct(this);}
};
struct UnknownGenObject8033CB98_0 : UnknownGenRoot8033CB98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033CB98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8033CB98_1 : UnknownGenObject8033CB98_0 {
 inline ~UnknownGenObject8033CB98_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033CB98 : UnknownGenObject8033CB98_1 {
 char unknown0C[84];
 inline ~UnknownGenObject8033CB98(){unknown00=beNDMWLoadIntf2SelSlot_vtable;}
};
extern "C" {
void *beNDMWLoadIntf2SelSlot_vtableRead(){
 UnknownGenObject8033CB98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWLoadIntf2SelSlot_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
