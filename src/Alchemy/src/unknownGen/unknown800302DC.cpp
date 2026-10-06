#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047284C[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot800302DC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800302DC(){fn_8006665C(this);}
};
struct UnknownGenObject800302DC_0 : UnknownGenRoot800302DC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800302DC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800302DC_1 : UnknownGenObject800302DC_0 {
 inline ~UnknownGenObject800302DC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800302DC : UnknownGenObject800302DC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenString unknown24;
 inline ~UnknownGenObject800302DC(){unknown00=lbl_8047284C;}
};
extern "C" {
void *fn_800302DC(){
 UnknownGenObject800302DC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_8047284C;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
