#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047B650[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){fn_8006665C(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=lbl_8047B650;}
};
extern "C" {
void *fn_800B1454(){
 UnknownGenObject800B1454 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B650;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
