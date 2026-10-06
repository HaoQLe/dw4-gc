#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471328[];
}
struct UnknownGenRoot80026B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80026B8C(){fn_8006665C(this);}
};
struct UnknownGenObject80026B8C : UnknownGenRoot80026B8C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80026B8C(){unknown00=lbl_80471328;}
};
extern "C" {
void *fn_80026B8C(){
 UnknownGenObject80026B8C object;
 object.unknown00=lbl_80471328;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
