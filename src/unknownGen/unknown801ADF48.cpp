#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B97E0[];
extern char lbl_804B983C[];
}
struct UnknownGenRoot801ADF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADF48(){fn_8006665C(this);}
};
struct UnknownGenObject801ADF48 : UnknownGenRoot801ADF48 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801ADF48(){unknown00=lbl_804B97E0;}
};
extern "C" {
void *fn_801ADF48(){
 UnknownGenObject801ADF48 object;
 object.unknown00=lbl_804B983C;
 object.unknown00=lbl_804B97E0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
