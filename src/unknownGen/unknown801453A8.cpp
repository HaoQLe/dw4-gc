#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_804A9860[];
}
struct UnknownGenRoot801453A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801453A8(){fn_800638E0(this);}
};
struct UnknownGenObject801453A8_0 : UnknownGenRoot801453A8 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801453A8_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject801453A8_1 : UnknownGenObject801453A8_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject801453A8_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject801453A8 : UnknownGenObject801453A8_1 {
 char unknown38[8];
 inline ~UnknownGenObject801453A8(){unknown00=lbl_804A9860;}
};
extern "C" {
void *fn_801453A8(){
 UnknownGenObject801453A8 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804A9860;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
