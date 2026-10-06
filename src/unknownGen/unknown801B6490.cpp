#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B39E8[];
extern char lbl_804B3F6C[];
}
struct UnknownGenRoot801B6490 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6490(){fn_8006665C(this);}
};
struct UnknownGenObject801B6490 : UnknownGenRoot801B6490 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[44];
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801B6490(){unknown00=lbl_804B3F6C;}
};
extern "C" {
void *fn_801B6490(){
 UnknownGenObject801B6490 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3F6C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
