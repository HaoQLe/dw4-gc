#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472E8C[];
extern char lbl_80472FA0[];
extern char lbl_80475A34[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
}
struct UnknownGenRoot80032718 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032718(){fn_8006665C(this);}
};
struct UnknownGenObject80032718 : UnknownGenRoot80032718 {
 char unknown04[16];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 char unknown40[4];
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject80032718(){unknown00=lbl_80472E8C;}
};
extern "C" {
void *fn_80032718(){
 UnknownGenObject80032718 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475A34;
 object.unknown00=lbl_80472E8C;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown3C.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
