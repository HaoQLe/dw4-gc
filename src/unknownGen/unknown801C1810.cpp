#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B4CE4[];
}
struct UnknownGenRoot801C1810 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1810(){fn_8006665C(this);}
};
struct UnknownGenObject801C1810 : UnknownGenRoot801C1810 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801C1810(){unknown00=lbl_804B4CE4;}
};
extern "C" {
void *fn_801C1810(){
 UnknownGenObject801C1810 object;
 object.unknown00=lbl_804B4CE4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
