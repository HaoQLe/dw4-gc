#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beSeInfoData_vtable[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802BAF50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BAF50(){igObject_construct(this);}
};
struct UnknownGenObject802BAF50_0 : UnknownGenRoot802BAF50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802BAF50_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802BAF50_1 : UnknownGenObject802BAF50_0 {
 inline ~UnknownGenObject802BAF50_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802BAF50 : UnknownGenObject802BAF50_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802BAF50(){unknown00=beSeInfoData_vtable;}
};
extern "C" {
void *beSeInfoData_vtableRead(){
 UnknownGenObject802BAF50 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beSeInfoData_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
