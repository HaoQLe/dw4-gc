#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804D9E80[];
extern char beModelCtrlSCEffect_vtable[];
}
struct UnknownGenRoot802C5A44 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C5A44(){igObject_construct(this);}
};
struct UnknownGenObject802C5A44 : UnknownGenRoot802C5A44 {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[32];
 inline ~UnknownGenObject802C5A44(){unknown00=beModelCtrlSCEffect_vtable;}
};
extern "C" {
void *beModelCtrlSCEffect_vtableRead(){
 UnknownGenObject802C5A44 object;
 object.unknown00=lbl_804D9E80;
 object.unknown00=beModelCtrlSCEffect_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
