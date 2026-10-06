#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804922CC[];
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=lbl_804922CC;}
};
extern "C" {
void *fn_800CF3B8(){
 UnknownGenObject800CF3B8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804922CC;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
