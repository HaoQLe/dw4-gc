#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSvPlatBaseData_vtable[];
}
struct UnknownGenRoot802BF5CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BF5CC(){igObject_construct(this);}
};
struct UnknownGenObject802BF5CC : UnknownGenRoot802BF5CC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject802BF5CC(){unknown00=beSvPlatBaseData_vtable;}
};
extern "C" {
void *beSvPlatBaseData_vtableRead(){
 UnknownGenObject802BF5CC object;
 object.unknown00=beSvPlatBaseData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
