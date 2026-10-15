#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beAction2FADESET_vtable[];
}
struct UnknownGenRoot802E6638 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6638(){fn_8006665C(this);}
};
struct UnknownGenObject802E6638_0 : UnknownGenRoot802E6638 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6638_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E6638 : UnknownGenObject802E6638_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802E6638(){unknown00=beAction2FADESET_vtable;}
};
extern "C" {
void *beAction2FADESET_vtableRead(){
 UnknownGenObject802E6638 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beAction2FADESET_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
