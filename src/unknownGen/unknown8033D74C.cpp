#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E5A8C[];
}
struct UnknownGenRoot8033D74C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033D74C(){fn_8006665C(this);}
};
struct UnknownGenObject8033D74C_0 : UnknownGenRoot8033D74C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033D74C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033D74C_1 : UnknownGenObject8033D74C_0 {
 inline ~UnknownGenObject8033D74C_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033D74C : UnknownGenObject8033D74C_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8033D74C(){unknown00=lbl_804E5A8C;}
};
extern "C" {
void *fn_8033D74C(){
 UnknownGenObject8033D74C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E5A8C;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
