#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804B3D68[];
}
struct UnknownGenRoot801B4020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4020(){fn_8006665C(this);}
};
struct UnknownGenObject801B4020_0 : UnknownGenRoot801B4020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B4020_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B4020_1 : UnknownGenObject801B4020_0 {
 inline ~UnknownGenObject801B4020_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B4020 : UnknownGenObject801B4020_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801B4020(){unknown00=lbl_804B3D68;}
};
extern "C" {
void *fn_801B4020(){
 UnknownGenObject801B4020 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3D68;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
