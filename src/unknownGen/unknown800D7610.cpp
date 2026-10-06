#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804912BC[];
extern char lbl_8049233C[];
}
struct UnknownGenRoot800D7610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7610(){fn_8006665C(this);}
};
struct UnknownGenObject800D7610_0 : UnknownGenRoot800D7610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D7610_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D7610_1 : UnknownGenObject800D7610_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D7610_1(){unknown00=lbl_8049233C;}
};
struct UnknownGenObject800D7610 : UnknownGenObject800D7610_1 {
 inline ~UnknownGenObject800D7610(){unknown00=lbl_804912BC;}
};
extern "C" {
void *fn_800D7610(){
 UnknownGenObject800D7610 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804912BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
