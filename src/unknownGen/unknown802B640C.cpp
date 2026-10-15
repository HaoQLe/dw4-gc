#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beTextureCtrlAttr_vtable[];
}
struct UnknownGenRoot802B640C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B640C(){igObject_construct(this);}
};
struct UnknownGenObject802B640C_0 : UnknownGenRoot802B640C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B640C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802B640C : UnknownGenObject802B640C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802B640C(){unknown00=beTextureCtrlAttr_vtable;}
};
extern "C" {
void *beTextureCtrlAttr_vtableRead(){
 UnknownGenObject802B640C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beTextureCtrlAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
