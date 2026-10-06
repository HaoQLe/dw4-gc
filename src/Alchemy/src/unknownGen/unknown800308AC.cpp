#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804729A4[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot800308AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800308AC(){fn_8006665C(this);}
};
struct UnknownGenObject800308AC_0 : UnknownGenRoot800308AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800308AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800308AC_1 : UnknownGenObject800308AC_0 {
 inline ~UnknownGenObject800308AC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800308AC : UnknownGenObject800308AC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800308AC(){unknown00=lbl_804729A4;}
};
extern "C" {
void *fn_800308AC(){
 UnknownGenObject800308AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804729A4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
