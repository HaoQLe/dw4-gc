#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beLayerGroup_vtable[];
}
struct UnknownGenRoot802D378C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D378C(){fn_8006665C(this);}
};
struct UnknownGenObject802D378C_0 : UnknownGenRoot802D378C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D378C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D378C : UnknownGenObject802D378C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802D378C(){unknown00=beLayerGroup_vtable;}
};
extern "C" {
void *beLayerGroup_vtableRead(){
 UnknownGenObject802D378C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beLayerGroup_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
