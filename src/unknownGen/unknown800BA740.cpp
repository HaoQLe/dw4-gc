#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047D430[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){fn_8006665C(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=lbl_8047D430;}
};
extern "C" {
void *fn_800BA740(){
 UnknownGenObject800BA740 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D430;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
