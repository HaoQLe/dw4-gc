#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B56D0[];
extern char lbl_804B5F8C[];
}
struct UnknownGenRoot801CBA50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CBA50(){fn_8006665C(this);}
};
struct UnknownGenObject801CBA50_0 : UnknownGenRoot801CBA50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CBA50_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CBA50_1 : UnknownGenObject801CBA50_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CBA50_1(){unknown00=lbl_804B5F8C;}
};
struct UnknownGenObject801CBA50 : UnknownGenObject801CBA50_1 {
 char unknown10[32];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[36];
 inline ~UnknownGenObject801CBA50(){unknown00=lbl_804B56D0;}
};
extern "C" {
void *fn_801CBA50(){
 UnknownGenObject801CBA50 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B5F8C;
 object.unknown0C.value=0;
 object.unknown00=lbl_804B56D0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
