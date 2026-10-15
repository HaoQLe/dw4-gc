#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beGeneraterInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802D6CD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D6CD8(){fn_8006665C(this);}
};
struct UnknownGenObject802D6CD8_0 : UnknownGenRoot802D6CD8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D6CD8_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802D6CD8 : UnknownGenObject802D6CD8_0 {
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject802D6CD8(){unknown00=beGeneraterInfoRam_vtable;}
};
extern "C" {
void *beGeneraterInfoRam_vtableRead(){
 UnknownGenObject802D6CD8 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beGeneraterInfoRam_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
