#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B4D40[];
extern char lbl_804B559C[];
}
struct UnknownGenRoot801C1AF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1AF4(){fn_8006665C(this);}
};
struct UnknownGenObject801C1AF4_0 : UnknownGenRoot801C1AF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 inline ~UnknownGenObject801C1AF4_0(){unknown00=lbl_804B559C;}
};
struct UnknownGenObject801C1AF4 : UnknownGenObject801C1AF4_0 {
 char unknown7C[44];
 inline ~UnknownGenObject801C1AF4(){unknown00=lbl_804B4D40;}
};
extern "C" {
void *fn_801C1AF4(){
 UnknownGenObject801C1AF4 object;
 object.unknown00=lbl_804B559C;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 object.unknown00=lbl_804B4D40;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
