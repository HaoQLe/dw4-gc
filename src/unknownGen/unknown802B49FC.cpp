#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beWaterMoveData_vtable[];
}
struct UnknownGenRoot802B49FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B49FC(){fn_8006665C(this);}
};
struct UnknownGenObject802B49FC : UnknownGenRoot802B49FC {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802B49FC(){unknown00=beWaterMoveData_vtable;}
};
extern "C" {
void *beWaterMoveData_vtableRead(){
 UnknownGenObject802B49FC object;
 object.unknown00=beWaterMoveData_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
