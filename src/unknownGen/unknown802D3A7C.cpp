#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char beLayerCtl_vtable[];
}
struct UnknownGenRoot802D3A7C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D3A7C(){igObject_construct(this);}
};
struct UnknownGenObject802D3A7C_0 : UnknownGenRoot802D3A7C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D3A7C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D3A7C_1 : UnknownGenObject802D3A7C_0 {
 inline ~UnknownGenObject802D3A7C_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802D3A7C_2 : UnknownGenObject802D3A7C_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D3A7C_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802D3A7C : UnknownGenObject802D3A7C_2 {
 char unknown1C[8];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject802D3A7C(){unknown00=beLayerCtl_vtable;}
};
extern "C" {
void *beLayerCtl_vtableRead(){
 UnknownGenObject802D3A7C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=beLayerCtl_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
