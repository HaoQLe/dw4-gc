#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804729A4[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern char lbl_804929B4[];
}
struct UnknownGenRoot800D4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4910(){fn_8006665C(this);}
};
struct UnknownGenObject800D4910_0 : UnknownGenRoot800D4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4910_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4910_1 : UnknownGenObject800D4910_0 {
 inline ~UnknownGenObject800D4910_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800D4910_2 : UnknownGenObject800D4910_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 inline ~UnknownGenObject800D4910_2(){unknown00=lbl_804729A4;}
};
struct UnknownGenObject800D4910 : UnknownGenObject800D4910_2 {
 char unknown2C[12];
 inline ~UnknownGenObject800D4910(){unknown00=lbl_804929B4;}
};
extern "C" {
void *fn_800D4910(){
 UnknownGenObject800D4910 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804729A4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804929B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
