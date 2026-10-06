#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80491194[];
extern char lbl_804927D4[];
extern char lbl_80492F94[];
}
struct UnknownGenRoot800D5E64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5E64(){fn_8006665C(this);}
};
struct UnknownGenObject800D5E64_0 : UnknownGenRoot800D5E64 {
 char unknown04[64];
 UnknownGenRefMember unknown44;
 char unknown48[16];
 UnknownGenString unknown58;
 inline ~UnknownGenObject800D5E64_0(){unknown00=lbl_804927D4;}
};
struct UnknownGenObject800D5E64_1 : UnknownGenObject800D5E64_0 {
 inline ~UnknownGenObject800D5E64_1(){unknown00=lbl_80492F94;}
};
struct UnknownGenObject800D5E64 : UnknownGenObject800D5E64_1 {
 UnknownGenRefMember unknown5C;
 char unknown60[8];
 inline ~UnknownGenObject800D5E64(){unknown00=lbl_80491194;}
};
extern "C" {
void *fn_800D5E64(){
 UnknownGenObject800D5E64 object;
 object.unknown00=lbl_804927D4;
 object.unknown44.value=0;
 object.unknown58.value=0;
 object.unknown00=lbl_80492F94;
 object.unknown00=lbl_80491194;
 object.unknown5C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
