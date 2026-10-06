#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804741D4[];
}
struct UnknownGenRoot80037268 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037268(){fn_8006665C(this);}
};
struct UnknownGenObject80037268 : UnknownGenRoot80037268 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80037268(){unknown00=lbl_804741D4;}
};
extern "C" {
void *fn_80037268(){
 UnknownGenObject80037268 object;
 object.unknown00=lbl_804741D4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
