#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B7CB8[];
}
struct UnknownGenRoot801B97D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B97D8(){fn_8006665C(this);}
};
struct UnknownGenObject801B97D8 : UnknownGenRoot801B97D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject801B97D8(){unknown00=lbl_804B7CB8;}
};
extern "C" {
void *fn_801B97D8(){
 UnknownGenObject801B97D8 object;
 object.unknown00=lbl_804B7CB8;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
