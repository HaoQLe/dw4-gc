#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beWaterMove_vtable[];
}
struct UnknownGenRoot802B45E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B45E8(){igObject_construct(this);}
};
struct UnknownGenObject802B45E8 : UnknownGenRoot802B45E8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802B45E8(){unknown00=beWaterMove_vtable;}
};
extern "C" {
void *beWaterMove_vtableRead(){
 UnknownGenObject802B45E8 object;
 object.unknown00=beWaterMove_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
