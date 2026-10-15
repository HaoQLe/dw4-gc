#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beLayerInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802D30D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D30D8(){igObject_construct(this);}
};
struct UnknownGenObject802D30D8_0 : UnknownGenRoot802D30D8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D30D8_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802D30D8 : UnknownGenObject802D30D8_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802D30D8(){unknown00=beLayerInfoRam_vtable;}
};
extern "C" {
void *beLayerInfoRam_vtableRead(){
 UnknownGenObject802D30D8 object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beLayerInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
