#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beMeterCtrlOneData_vtable[];
}
struct UnknownGenRoot802CD898 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CD898(){igObject_construct(this);}
};
struct UnknownGenObject802CD898_0 : UnknownGenRoot802CD898 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CD898_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CD898 : UnknownGenObject802CD898_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[48];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject802CD898(){unknown00=beMeterCtrlOneData_vtable;}
};
extern "C" {
void *beMeterCtrlOneData_vtableRead(){
 UnknownGenObject802CD898 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beMeterCtrlOneData_vtable;
 object.unknown0C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
