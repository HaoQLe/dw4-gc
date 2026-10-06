#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047B6D4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){fn_8006665C(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=lbl_8047B6D4;}
};
extern "C" {
void *fn_800B17B0(){
 UnknownGenObject800B17B0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B6D4;
 object.unknown20.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
