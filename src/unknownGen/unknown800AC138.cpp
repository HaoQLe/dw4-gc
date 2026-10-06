#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047A680[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800AC138 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC138(){fn_8006665C(this);}
};
struct UnknownGenObject800AC138 : UnknownGenRoot800AC138 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject800AC138(){unknown00=lbl_8047A680;}
};
extern "C" {
void *fn_800AC138(){
 UnknownGenObject800AC138 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A680;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
