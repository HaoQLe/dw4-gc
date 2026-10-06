#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047B9E4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){fn_8006665C(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=lbl_8047B9E4;}
};
extern "C" {
void *fn_800B26F0(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B9E4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
