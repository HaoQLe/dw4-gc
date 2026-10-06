#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B76E0[];
}
struct UnknownGenRoot801CC610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC610(){fn_8006665C(this);}
};
struct UnknownGenObject801CC610_0 : UnknownGenRoot801CC610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CC610_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CC610 : UnknownGenObject801CC610_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801CC610(){unknown00=lbl_804B76E0;}
};
extern "C" {
void *fn_801CC610(){
 UnknownGenObject801CC610 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B76E0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
