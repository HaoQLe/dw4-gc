#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beMessengerGroup_vtable[];
}
struct UnknownGenRoot802CEB88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CEB88(){igObject_construct(this);}
};
struct UnknownGenObject802CEB88_0 : UnknownGenRoot802CEB88 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CEB88_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CEB88 : UnknownGenObject802CEB88_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802CEB88(){unknown00=beMessengerGroup_vtable;}
};
extern "C" {
void *beMessengerGroup_vtableRead(){
 UnknownGenObject802CEB88 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beMessengerGroup_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
