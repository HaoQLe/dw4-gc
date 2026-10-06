#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B60D0[];
}
struct UnknownGenRoot801CB59C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CB59C(){fn_8006665C(this);}
};
struct UnknownGenObject801CB59C : UnknownGenRoot801CB59C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[44];
 inline ~UnknownGenObject801CB59C(){unknown00=lbl_804B60D0;}
};
extern "C" {
void *fn_801CB59C(){
 UnknownGenObject801CB59C object;
 object.unknown00=lbl_804B60D0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
