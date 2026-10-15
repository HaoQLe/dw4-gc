#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igFileName_vtable[];
}
struct UnknownGenRoot802AAFA4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AAFA4(){igObject_construct(this);}
};
struct UnknownGenObject802AAFA4_0 : UnknownGenRoot802AAFA4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AAFA4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802AAFA4 : UnknownGenObject802AAFA4_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802AAFA4(){unknown00=igFileName_vtable;}
};
extern "C" {
void *igFileName_vtableRead(){
 UnknownGenObject802AAFA4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igFileName_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
