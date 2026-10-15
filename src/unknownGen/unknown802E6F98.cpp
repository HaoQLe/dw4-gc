#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beAction2Data_vtable[];
}
struct UnknownGenRoot802E6F98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6F98(){igObject_construct(this);}
};
struct UnknownGenObject802E6F98_0 : UnknownGenRoot802E6F98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6F98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E6F98 : UnknownGenObject802E6F98_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802E6F98(){unknown00=beAction2Data_vtable;}
};
extern "C" {
void *beAction2Data_vtableRead(){
 UnknownGenObject802E6F98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beAction2Data_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
