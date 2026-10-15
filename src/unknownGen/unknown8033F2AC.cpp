#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWMcUtilCtrl_vtable[];
}
struct UnknownGenRoot8033F2AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033F2AC(){igObject_construct(this);}
};
struct UnknownGenObject8033F2AC : UnknownGenRoot8033F2AC {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[16];
 inline ~UnknownGenObject8033F2AC(){unknown00=beNDMWMcUtilCtrl_vtable;}
};
extern "C" {
void *beNDMWMcUtilCtrl_vtableRead(){
 UnknownGenObject8033F2AC object;
 object.unknown00=beNDMWMcUtilCtrl_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
