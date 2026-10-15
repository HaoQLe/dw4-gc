#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSvPlatDataPC_vtable[];
extern char beSvPlatBaseData_vtable[];
}
struct UnknownGenRoot802BC2D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BC2D8(){igObject_construct(this);}
};
struct UnknownGenObject802BC2D8_0 : UnknownGenRoot802BC2D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802BC2D8_0(){unknown00=beSvPlatBaseData_vtable;}
};
struct UnknownGenObject802BC2D8 : UnknownGenObject802BC2D8_0 {
 char unknown10[16];
 inline ~UnknownGenObject802BC2D8(){unknown00=beSvPlatDataPC_vtable;}
};
extern "C" {
void *beSvPlatDataPC_vtableRead(){
 UnknownGenObject802BC2D8 object;
 object.unknown00=beSvPlatBaseData_vtable;
 object.unknown0C.value=0;
 object.unknown00=beSvPlatDataPC_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
