#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E5C0C[];
}
struct UnknownGenRoot8033CB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033CB98(){fn_8006665C(this);}
};
struct UnknownGenObject8033CB98_0 : UnknownGenRoot8033CB98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033CB98_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033CB98_1 : UnknownGenObject8033CB98_0 {
 inline ~UnknownGenObject8033CB98_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033CB98 : UnknownGenObject8033CB98_1 {
 char unknown0C[84];
 inline ~UnknownGenObject8033CB98(){unknown00=lbl_804E5C0C;}
};
extern "C" {
void *fn_8033CB98(){
 UnknownGenObject8033CB98 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E5C0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
