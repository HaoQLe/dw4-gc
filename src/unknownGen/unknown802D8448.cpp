#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beGeneraterItemDataOne_vtable[];
}
struct UnknownGenRoot802D8448 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D8448(){igObject_construct(this);}
};
struct UnknownGenObject802D8448_0 : UnknownGenRoot802D8448 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D8448_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D8448 : UnknownGenObject802D8448_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802D8448(){unknown00=beGeneraterItemDataOne_vtable;}
};
extern "C" {
void *beGeneraterItemDataOne_vtableRead(){
 UnknownGenObject802D8448 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beGeneraterItemDataOne_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
