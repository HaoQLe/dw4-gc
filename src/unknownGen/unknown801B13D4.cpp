#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B3B28[];
}
struct UnknownGenRoot801B13D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B13D4(){fn_8006665C(this);}
};
struct UnknownGenObject801B13D4 : UnknownGenRoot801B13D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801B13D4(){unknown00=lbl_804B3B28;}
};
extern "C" {
void *fn_801B13D4(){
 UnknownGenObject801B13D4 object;
 object.unknown00=lbl_804B3B28;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
