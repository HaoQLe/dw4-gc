#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_804B6A10[];
extern char lbl_804B6A70[];
}
struct UnknownGenRoot801C85E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C85E4(){fn_8006665C(this);}
};
struct UnknownGenObject801C85E4 : UnknownGenRoot801C85E4 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[40];
 inline ~UnknownGenObject801C85E4(){unknown00=lbl_804B6A10;}
};
extern "C" {
void *fn_801C85E4(){
 UnknownGenObject801C85E4 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 object.unknown00=lbl_804B6A70;
 object.unknown00=lbl_804B6A10;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
