#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWStatusInfoWork_vtable[];
}
struct UnknownGenRoot8032B098 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032B098(){igObject_construct(this);}
};
struct UnknownGenObject8032B098 : UnknownGenRoot8032B098 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8032B098(){unknown00=beNDMWStatusInfoWork_vtable;}
};
extern "C" {
void *beNDMWStatusInfoWork_vtableRead(){
 UnknownGenObject8032B098 object;
 object.unknown00=beNDMWStatusInfoWork_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
