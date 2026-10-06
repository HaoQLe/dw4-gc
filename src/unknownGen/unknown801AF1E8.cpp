#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B9590[];
}
struct UnknownGenRoot801AF1E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF1E8(){fn_8006665C(this);}
};
struct UnknownGenObject801AF1E8 : UnknownGenRoot801AF1E8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801AF1E8(){unknown00=lbl_804B9590;}
};
extern "C" {
void *fn_801AF1E8(){
 UnknownGenObject801AF1E8 object;
 object.unknown00=lbl_804B9590;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
