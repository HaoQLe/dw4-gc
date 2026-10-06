#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804731E0[];
}
struct UnknownGenRoot800383B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800383B0(){fn_8006665C(this);}
};
struct UnknownGenObject800383B0 : UnknownGenRoot800383B0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800383B0(){unknown00=lbl_804731E0;}
};
extern "C" {
void *fn_800383B0(){
 UnknownGenObject800383B0 object;
 object.unknown00=lbl_804731E0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
