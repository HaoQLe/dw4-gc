#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B7DDC[];
}
struct UnknownGenRoot801B936C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B936C(){fn_8006665C(this);}
};
struct UnknownGenObject801B936C : UnknownGenRoot801B936C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[20];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject801B936C(){unknown00=lbl_804B7DDC;}
};
extern "C" {
void *fn_801B936C(){
 UnknownGenObject801B936C object;
 object.unknown00=lbl_804B7DDC;
 object.unknown0C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
