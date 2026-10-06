#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047B754[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B1BF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1BF4(){fn_8006665C(this);}
};
struct UnknownGenObject800B1BF4 : UnknownGenRoot800B1BF4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800B1BF4(){unknown00=lbl_8047B754;}
};
extern "C" {
void *fn_800B1BF4(){
 UnknownGenObject800B1BF4 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B754;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
