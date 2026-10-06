#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_804755B0[];
}
struct UnknownGenRoot800334B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800334B0(){fn_800638E0(this);}
};
struct UnknownGenObject800334B0_0 : UnknownGenRoot800334B0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800334B0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800334B0_1 : UnknownGenObject800334B0_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800334B0_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800334B0 : UnknownGenObject800334B0_1 {
 char unknown38[8];
 inline ~UnknownGenObject800334B0(){unknown00=lbl_804755B0;}
};
extern "C" {
void *fn_800334B0(){
 UnknownGenObject800334B0 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804755B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
