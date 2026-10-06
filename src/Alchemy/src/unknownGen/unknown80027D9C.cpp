#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804715F4[];
}
struct UnknownGenRoot80027D9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027D9C(){fn_8006665C(this);}
};
struct UnknownGenObject80027D9C : UnknownGenRoot80027D9C {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80027D9C(){unknown00=lbl_804715F4;}
};
extern "C" {
void *fn_80027D9C(){
 UnknownGenObject80027D9C object;
 object.unknown00=lbl_804715F4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
