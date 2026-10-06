#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047CEA0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){fn_8006665C(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=lbl_8047CEA0;}
};
extern "C" {
void *fn_800B8C40(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CEA0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
