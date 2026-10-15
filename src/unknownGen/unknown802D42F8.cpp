#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igEventReceiver_vtable[];
extern char beKeyboardReceiver_vtable[];
}
struct UnknownGenRoot802D42F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D42F8(){igObject_construct(this);}
};
struct UnknownGenObject802D42F8 : UnknownGenRoot802D42F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802D42F8(){unknown00=beKeyboardReceiver_vtable;}
};
extern "C" {
void *beKeyboardReceiver_vtableRead(){
 UnknownGenObject802D42F8 object;
 object.unknown00=igEventReceiver_vtable;
 object.unknown00=beKeyboardReceiver_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
