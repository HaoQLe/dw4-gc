#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beFileChkObj_vtable[];
}
struct UnknownGenRoot802DAE80 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DAE80(){fn_8006665C(this);}
};
struct UnknownGenObject802DAE80 : UnknownGenRoot802DAE80 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802DAE80(){unknown00=beFileChkObj_vtable;}
};
extern "C" {
void *beFileChkObj_vtableRead(){
 UnknownGenObject802DAE80 object;
 object.unknown00=beFileChkObj_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
