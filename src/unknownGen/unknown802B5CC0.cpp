#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beTimerData_vtable[];
}
struct UnknownGenRoot802B5CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B5CC0(){igObject_construct(this);}
};
struct UnknownGenObject802B5CC0 : UnknownGenRoot802B5CC0 {
 char unknown04[12];
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802B5CC0(){unknown00=beTimerData_vtable;}
};
extern "C" {
void *beTimerData_vtableRead(){
 UnknownGenObject802B5CC0 object;
 object.unknown00=beTimerData_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
