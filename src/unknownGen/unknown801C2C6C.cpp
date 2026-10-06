#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B4F7C[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
}
struct UnknownGenRoot801C2C6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C2C6C(){fn_8006665C(this);}
};
struct UnknownGenObject801C2C6C : UnknownGenRoot801C2C6C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[52];
 inline ~UnknownGenObject801C2C6C(){unknown00=lbl_804B4F7C;}
};
extern "C" {
void *fn_801C2C6C(){
 UnknownGenObject801C2C6C object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=lbl_804B4F7C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
