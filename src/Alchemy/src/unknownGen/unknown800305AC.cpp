#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804728F8[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot800305AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800305AC(){fn_8006665C(this);}
};
struct UnknownGenObject800305AC_0 : UnknownGenRoot800305AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800305AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800305AC_1 : UnknownGenObject800305AC_0 {
 inline ~UnknownGenObject800305AC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800305AC : UnknownGenObject800305AC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject800305AC(){unknown00=lbl_804728F8;}
};
extern "C" {
void *fn_800305AC(){
 UnknownGenObject800305AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804728F8;
 object.unknown24.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
