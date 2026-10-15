#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beActionStarterInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802E4258 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E4258(){igObject_construct(this);}
};
struct UnknownGenObject802E4258_0 : UnknownGenRoot802E4258 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802E4258_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802E4258 : UnknownGenObject802E4258_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802E4258(){unknown00=beActionStarterInfoRam_vtable;}
};
extern "C" {
void *beActionStarterInfoRam_vtableRead(){
 UnknownGenObject802E4258 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beActionStarterInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
