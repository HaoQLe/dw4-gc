#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047C364[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B5FFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5FFC(){fn_8006665C(this);}
};
struct UnknownGenObject800B5FFC : UnknownGenRoot800B5FFC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800B5FFC(){unknown00=lbl_8047C364;}
};
extern "C" {
void *fn_800B5FFC(){
 UnknownGenObject800B5FFC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C364;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
