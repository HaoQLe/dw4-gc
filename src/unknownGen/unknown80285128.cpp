#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB79C[];
}
struct UnknownGenRoot80285128 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285128(){fn_8006665C(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=lbl_804CB79C;}
};
extern "C" {
void *fn_80285128(){
 UnknownGenObject80285128 object;
 object.unknown00=lbl_804CB79C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
