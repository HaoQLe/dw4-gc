#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beChangePosTransformInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802E0CB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E0CB4(){igObject_construct(this);}
};
struct UnknownGenObject802E0CB4_0 : UnknownGenRoot802E0CB4 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802E0CB4_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802E0CB4 : UnknownGenObject802E0CB4_0 {
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject802E0CB4(){unknown00=beChangePosTransformInfoRam_vtable;}
};
extern "C" {
void *beChangePosTransformInfoRam_vtableRead(){
 UnknownGenObject802E0CB4 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beChangePosTransformInfoRam_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
