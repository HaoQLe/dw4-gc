#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047AFF4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){fn_8006665C(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=lbl_8047AFF4;}
};
extern "C" {
void *fn_800AF51C(){
 UnknownGenObject800AF51C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AFF4;
 object.unknown0C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
