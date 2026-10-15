#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beMessengerWork_vtable[];
}
struct UnknownGenRoot802CE630 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CE630(){igObject_construct(this);}
};
struct UnknownGenObject802CE630 : UnknownGenRoot802CE630 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802CE630(){unknown00=beMessengerWork_vtable;}
};
extern "C" {
void *beMessengerWork_vtableRead(){
 UnknownGenObject802CE630 object;
 object.unknown00=beMessengerWork_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
