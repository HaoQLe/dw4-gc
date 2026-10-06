#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_804A9524[];
}
struct UnknownGenRoot80145F0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80145F0C(){fn_800638E0(this);}
};
struct UnknownGenObject80145F0C_0 : UnknownGenRoot80145F0C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80145F0C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80145F0C_1 : UnknownGenObject80145F0C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80145F0C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80145F0C : UnknownGenObject80145F0C_1 {
 char unknown38[8];
 inline ~UnknownGenObject80145F0C(){unknown00=lbl_804A9524;}
};
extern "C" {
void *fn_80145F0C(){
 UnknownGenObject80145F0C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804A9524;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
