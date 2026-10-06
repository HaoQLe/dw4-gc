#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_80496D74[];
}
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=lbl_80496D74;}
};
extern "C" {
void *fn_80114FCC(){
 UnknownGenObject80114FCC object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_80496D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
