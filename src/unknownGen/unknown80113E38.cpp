#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8049659C[];
extern char lbl_8049705C[];
}
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){fn_8006665C(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=lbl_8049659C;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=lbl_8049705C;}
};
extern "C" {
void *fn_80113E38(){
 UnknownGenObject80113E38 object;
 object.unknown00=lbl_8049659C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 object.unknown00=lbl_8049705C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
