#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B4158[];
}
struct UnknownGenRoot801B8F24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B8F24(){fn_8006665C(this);}
};
struct UnknownGenObject801B8F24 : UnknownGenRoot801B8F24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[64];
 inline ~UnknownGenObject801B8F24(){unknown00=lbl_804B4158;}
};
extern "C" {
void *fn_801B8F24(){
 UnknownGenObject801B8F24 object;
 object.unknown00=lbl_804B4158;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
