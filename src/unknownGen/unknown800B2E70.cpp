#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047BAE4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B2E70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B2E70(){fn_8006665C(this);}
};
struct UnknownGenObject800B2E70 : UnknownGenRoot800B2E70 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[28];
 inline ~UnknownGenObject800B2E70(){unknown00=lbl_8047BAE4;}
};
extern "C" {
void *fn_800B2E70(){
 UnknownGenObject800B2E70 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BAE4;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
