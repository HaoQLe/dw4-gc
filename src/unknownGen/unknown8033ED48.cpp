#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWLoadCtrl2CommonIntf_vtable[];
}
struct UnknownGenRoot8033ED48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033ED48(){igObject_construct(this);}
};
struct UnknownGenObject8033ED48_0 : UnknownGenRoot8033ED48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033ED48_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8033ED48_1 : UnknownGenObject8033ED48_0 {
 inline ~UnknownGenObject8033ED48_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033ED48 : UnknownGenObject8033ED48_1 {
 char unknown0C[20];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 char unknown38[24];
 inline ~UnknownGenObject8033ED48(){unknown00=beNDMWLoadCtrl2CommonIntf_vtable;}
};
extern "C" {
void *beNDMWLoadCtrl2CommonIntf_vtableRead(){
 UnknownGenObject8033ED48 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWLoadCtrl2CommonIntf_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
