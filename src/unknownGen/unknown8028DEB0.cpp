#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CCCB0[];
}
struct UnknownGenRoot8028DEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028DEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8028DEB0 : UnknownGenRoot8028DEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8028DEB0(){unknown00=lbl_804CCCB0;}
};
extern "C" {
void *fn_8028DEB0(){
 UnknownGenObject8028DEB0 object;
 object.unknown00=lbl_804CCCB0;
 object.unknown08.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
