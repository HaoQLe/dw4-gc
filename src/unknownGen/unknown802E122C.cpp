#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char beChangePosTransform_vtable[];
}
struct UnknownGenRoot802E122C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E122C(){igObject_construct(this);}
};
struct UnknownGenObject802E122C_0 : UnknownGenRoot802E122C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E122C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E122C_1 : UnknownGenObject802E122C_0 {
 inline ~UnknownGenObject802E122C_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802E122C_2 : UnknownGenObject802E122C_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E122C_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802E122C : UnknownGenObject802E122C_2 {
 char unknown1C[20];
 inline ~UnknownGenObject802E122C(){unknown00=beChangePosTransform_vtable;}
};
extern "C" {
void *beChangePosTransform_vtableRead(){
 UnknownGenObject802E122C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=beChangePosTransform_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
