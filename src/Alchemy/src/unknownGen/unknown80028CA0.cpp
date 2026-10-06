#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006ACA4(void *);
extern char lbl_80471384[];
extern char lbl_80471650[];
extern char lbl_80471914[];
extern char lbl_804762FC[];
}
struct UnknownGenRoot80028CA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80028CA0(){fn_8006ACA4(this);}
};
struct UnknownGenObject80028CA0_0 : UnknownGenRoot80028CA0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80028CA0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80028CA0_1 : UnknownGenObject80028CA0_0 {
 inline ~UnknownGenObject80028CA0_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80028CA0_2 : UnknownGenObject80028CA0_1 {
 char unknown10[48];
 UnknownGenString unknown40;
 inline ~UnknownGenObject80028CA0_2(){unknown00=lbl_804762FC;}
};
struct UnknownGenObject80028CA0 : UnknownGenObject80028CA0_2 {
 char unknown44[12];
 inline ~UnknownGenObject80028CA0(){unknown00=lbl_80471650;}
};
extern "C" {
void *fn_80028CA0(){
 UnknownGenObject80028CA0 object;
 object.unknown00=lbl_80471650;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
