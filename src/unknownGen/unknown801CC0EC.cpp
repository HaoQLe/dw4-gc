#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B5E68[];
}
struct UnknownGenRoot801CC0EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC0EC(){fn_8006665C(this);}
};
struct UnknownGenObject801CC0EC : UnknownGenRoot801CC0EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801CC0EC(){unknown00=lbl_804B5E68;}
};
extern "C" {
void *fn_801CC0EC(){
 UnknownGenObject801CC0EC object;
 object.unknown00=lbl_804B5E68;
 object.unknown08.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
