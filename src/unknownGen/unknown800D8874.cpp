#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80491718[];
extern char lbl_804927D4[];
extern char lbl_80492B34[];
}
struct UnknownGenRoot800D8874 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D8874(){fn_8006665C(this);}
};
struct UnknownGenObject800D8874_0 : UnknownGenRoot800D8874 {
 char unknown04[64];
 UnknownGenRefMember unknown44;
 char unknown48[16];
 UnknownGenString unknown58;
 inline ~UnknownGenObject800D8874_0(){unknown00=lbl_804927D4;}
};
struct UnknownGenObject800D8874_1 : UnknownGenObject800D8874_0 {
 inline ~UnknownGenObject800D8874_1(){unknown00=lbl_80492B34;}
};
struct UnknownGenObject800D8874 : UnknownGenObject800D8874_1 {
 char unknown5C[132];
 inline ~UnknownGenObject800D8874(){unknown00=lbl_80491718;}
};
extern "C" {
void *fn_800D8874(){
 UnknownGenObject800D8874 object;
 object.unknown00=lbl_804927D4;
 object.unknown44.value=0;
 object.unknown58.value=0;
 object.unknown00=lbl_80492B34;
 object.unknown00=lbl_80491718;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
