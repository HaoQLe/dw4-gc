#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B6EB0[];
}
struct UnknownGenRoot801C6BE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C6BE0(){fn_8006665C(this);}
};
struct UnknownGenObject801C6BE0 : UnknownGenRoot801C6BE0 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801C6BE0(){unknown00=lbl_804B6EB0;}
};
extern "C" {
void *fn_801C6BE0(){
 UnknownGenObject801C6BE0 object;
 object.unknown00=lbl_804B6EB0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
