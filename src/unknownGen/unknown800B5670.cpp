#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047C23C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){fn_8006665C(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=lbl_8047C23C;}
};
extern "C" {
void *fn_800B5670(){
 UnknownGenObject800B5670 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C23C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
