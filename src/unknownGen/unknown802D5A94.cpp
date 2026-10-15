#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beHitLandResultData_vtable[];
}
struct UnknownGenRoot802D5A94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D5A94(){igObject_construct(this);}
};
struct UnknownGenObject802D5A94 : UnknownGenRoot802D5A94 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[84];
 inline ~UnknownGenObject802D5A94(){unknown00=beHitLandResultData_vtable;}
};
extern "C" {
void *beHitLandResultData_vtableRead(){
 UnknownGenObject802D5A94 object;
 object.unknown00=beHitLandResultData_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
