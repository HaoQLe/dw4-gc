#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B39E8[];
extern char lbl_804B5434[];
}
struct UnknownGenRoot801C75C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C75C8(){fn_8006665C(this);}
};
struct UnknownGenObject801C75C8 : UnknownGenRoot801C75C8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801C75C8(){unknown00=lbl_804B5434;}
};
extern "C" {
void *fn_801C75C8(){
 UnknownGenObject801C75C8 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B5434;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
