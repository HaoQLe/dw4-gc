#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B6570[];
}
struct UnknownGenRoot801CA260 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA260(){fn_8006665C(this);}
};
struct UnknownGenObject801CA260 : UnknownGenRoot801CA260 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CA260(){unknown00=lbl_804B6570;}
};
extern "C" {
void *fn_801CA260(){
 UnknownGenObject801CA260 object;
 object.unknown00=lbl_804B6570;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
