#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D81F0[];
}
struct UnknownGenRoot802CF0F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CF0F4(){fn_8006665C(this);}
};
struct UnknownGenObject802CF0F4 : UnknownGenRoot802CF0F4 {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject802CF0F4(){unknown00=lbl_804D81F0;}
};
extern "C" {
void *beMessengerDelay_vtableRead(){
 UnknownGenObject802CF0F4 object;
 object.unknown00=lbl_804D81F0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
