#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B70C4[];
}
struct UnknownGenRoot801C3A90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C3A90(){fn_8006665C(this);}
};
struct UnknownGenObject801C3A90 : UnknownGenRoot801C3A90 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801C3A90(){unknown00=lbl_804B70C4;}
};
extern "C" {
void *fn_801C3A90(){
 UnknownGenObject801C3A90 object;
 object.unknown00=lbl_804B70C4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
