#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beActionStarterData2_vtable[];
extern char beActionStarterData_vtable[];
}
struct UnknownGenRoot802E4BA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E4BA0(){igObject_construct(this);}
};
struct UnknownGenObject802E4BA0_0 : UnknownGenRoot802E4BA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E4BA0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E4BA0_1 : UnknownGenObject802E4BA0_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802E4BA0_1(){unknown00=beActionStarterData_vtable;}
};
struct UnknownGenObject802E4BA0 : UnknownGenObject802E4BA0_1 {
 char unknown10[32];
 inline ~UnknownGenObject802E4BA0(){unknown00=beActionStarterData2_vtable;}
};
extern "C" {
void *beActionStarterData2_vtableRead(){
 UnknownGenObject802E4BA0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beActionStarterData_vtable;
 object.unknown0C.value=0;
 object.unknown00=beActionStarterData2_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
