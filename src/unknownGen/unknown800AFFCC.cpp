#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047AF6C[];
extern char lbl_8047B198[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){fn_8006665C(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=lbl_8047AF6C;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=lbl_8047B198;}
};
extern "C" {
void *fn_800AFFCC(){
 UnknownGenObject800AFFCC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AF6C;
 object.unknown0C.value=0;
 object.unknown00=lbl_8047B198;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
