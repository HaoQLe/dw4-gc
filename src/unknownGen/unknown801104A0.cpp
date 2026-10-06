#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495AD8[];
extern char lbl_80496284[];
}
struct UnknownGenRoot801104A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801104A0(){fn_8006665C(this);}
};
struct UnknownGenObject801104A0 : UnknownGenRoot801104A0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801104A0(){unknown00=lbl_80496284;}
};
extern "C" {
void *fn_801104A0(){
 UnknownGenObject801104A0 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80496284;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
