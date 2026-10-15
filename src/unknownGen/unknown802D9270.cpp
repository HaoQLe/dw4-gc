#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beUnicodeObj_vtable[];
}
struct UnknownGenRoot802D9270 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D9270(){igObject_construct(this);}
};
struct UnknownGenObject802D9270_0 : UnknownGenRoot802D9270 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D9270_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D9270 : UnknownGenObject802D9270_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802D9270(){unknown00=beUnicodeObj_vtable;}
};
extern "C" {
void *beUnicodeObj_vtableRead(){
 UnknownGenObject802D9270 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beUnicodeObj_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
