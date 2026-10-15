#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWLoadSlotPlayer_vtable[];
}
struct UnknownGenRoot80340584 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80340584(){igObject_construct(this);}
};
struct UnknownGenObject80340584 : UnknownGenRoot80340584 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject80340584(){unknown00=beNDMWLoadSlotPlayer_vtable;}
};
extern "C" {
void *beNDMWLoadSlotPlayer_vtableRead(){
 UnknownGenObject80340584 object;
 object.unknown00=beNDMWLoadSlotPlayer_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
