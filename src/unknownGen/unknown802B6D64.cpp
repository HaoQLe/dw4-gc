#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beTextureCtrlWork_vtable[];
}
struct UnknownGenRoot802B6D64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B6D64(){fn_8006665C(this);}
};
struct UnknownGenObject802B6D64 : UnknownGenRoot802B6D64 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802B6D64(){unknown00=beTextureCtrlWork_vtable;}
};
extern "C" {
void *beTextureCtrlWork_vtableRead(){
 UnknownGenObject802B6D64 object;
 object.unknown00=beTextureCtrlWork_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
