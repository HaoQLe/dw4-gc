#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beDataObjInt_vtable[];
}
struct UnknownGenRoot802DD65C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD65C(){fn_8006665C(this);}
};
struct UnknownGenObject802DD65C_0 : UnknownGenRoot802DD65C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD65C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DD65C : UnknownGenObject802DD65C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802DD65C(){unknown00=beDataObjInt_vtable;}
};
extern "C" {
void *beDataObjInt_vtableRead(){
 UnknownGenObject802DD65C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjInt_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
