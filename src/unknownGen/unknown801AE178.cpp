#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B3748[];
extern char lbl_804B977C[];
}
struct UnknownGenRoot801AE178 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AE178(){fn_8006665C(this);}
};
struct UnknownGenObject801AE178 : UnknownGenRoot801AE178 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801AE178(){unknown00=lbl_804B3748;}
};
extern "C" {
void *fn_801AE178(){
 UnknownGenObject801AE178 object;
 object.unknown00=lbl_804B977C;
 object.unknown00=lbl_804B3748;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
