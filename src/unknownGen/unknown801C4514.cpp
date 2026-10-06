#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B6FA0[];
}
struct UnknownGenRoot801C4514 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C4514(){fn_8006665C(this);}
};
struct UnknownGenObject801C4514 : UnknownGenRoot801C4514 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 char unknown1C[20];
 inline ~UnknownGenObject801C4514(){unknown00=lbl_804B6FA0;}
};
extern "C" {
void *fn_801C4514(){
 UnknownGenObject801C4514 object;
 object.unknown00=lbl_804B6FA0;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
