#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_80493AF4[];
}
struct UnknownGenRoot800D29B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D29B4(){fn_800638E0(this);}
};
struct UnknownGenObject800D29B4_0 : UnknownGenRoot800D29B4 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800D29B4_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800D29B4_1 : UnknownGenObject800D29B4_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800D29B4_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800D29B4 : UnknownGenObject800D29B4_1 {
 char unknown38[8];
 inline ~UnknownGenObject800D29B4(){unknown00=lbl_80493AF4;}
};
extern "C" {
void *fn_800D29B4(){
 UnknownGenObject800D29B4 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_80493AF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
