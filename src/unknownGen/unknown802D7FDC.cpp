#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beGeneraterItemData_vtable[];
}
struct UnknownGenRoot802D7FDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D7FDC(){igObject_construct(this);}
};
struct UnknownGenObject802D7FDC_0 : UnknownGenRoot802D7FDC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D7FDC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D7FDC : UnknownGenObject802D7FDC_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802D7FDC(){unknown00=beGeneraterItemData_vtable;}
};
extern "C" {
void *beGeneraterItemData_vtableRead(){
 UnknownGenObject802D7FDC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beGeneraterItemData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
