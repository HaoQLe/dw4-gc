#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B4C5C[];
extern char lbl_804BA150[];
}
struct UnknownGenRoot801C15B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C15B8(){fn_8006665C(this);}
};
struct UnknownGenObject801C15B8 : UnknownGenRoot801C15B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801C15B8(){unknown00=lbl_804B4C5C;}
};
extern "C" {
void *fn_801C15B8(){
 UnknownGenObject801C15B8 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B4C5C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
