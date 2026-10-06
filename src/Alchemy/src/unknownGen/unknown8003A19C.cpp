#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80471914[];
extern char lbl_804735DC[];
extern char lbl_80474018[];
}
struct UnknownGenRoot8003A19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A19C(){fn_800638E0(this);}
};
struct UnknownGenObject8003A19C_0 : UnknownGenRoot8003A19C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8003A19C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8003A19C_1 : UnknownGenObject8003A19C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject8003A19C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject8003A19C : UnknownGenObject8003A19C_1 {
 char unknown38[8];
 inline ~UnknownGenObject8003A19C(){unknown00=lbl_804735DC;}
};
extern "C" {
void *fn_8003A19C(){
 UnknownGenObject8003A19C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804735DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
