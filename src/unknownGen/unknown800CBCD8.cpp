#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80480288[];
extern char lbl_80480690[];
extern char lbl_80480E60[];
}
struct UnknownGenRoot800CBCD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBCD8(){fn_8006665C(this);}
};
struct UnknownGenObject800CBCD8 : UnknownGenRoot800CBCD8 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[8];
 UnknownGenString unknown24;
 char unknown28[8];
 inline ~UnknownGenObject800CBCD8(){unknown00=lbl_80480288;}
};
extern "C" {
void *fn_800CBCD8(){
 UnknownGenObject800CBCD8 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480690;
 object.unknown00=lbl_80480288;
 object.unknown18.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
