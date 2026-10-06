#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047C4FC[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){fn_8006665C(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=lbl_8047C4FC;}
};
extern "C" {
void *fn_800B690C(){
 UnknownGenObject800B690C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C5AC;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_8047C4FC;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
