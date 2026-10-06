#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B71E8[];
}
struct UnknownGenRoot801C260C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C260C(){fn_8006665C(this);}
};
struct UnknownGenObject801C260C : UnknownGenRoot801C260C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject801C260C(){unknown00=lbl_804B71E8;}
};
extern "C" {
void *fn_801C260C(){
 UnknownGenObject801C260C object;
 object.unknown00=lbl_804B71E8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
