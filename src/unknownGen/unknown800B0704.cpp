#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047B340[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B0704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0704(){fn_8006665C(this);}
};
struct UnknownGenObject800B0704 : UnknownGenRoot800B0704 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject800B0704(){unknown00=lbl_8047B340;}
};
extern "C" {
void *fn_800B0704(){
 UnknownGenObject800B0704 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B340;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
