#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E56E4[];
}
struct UnknownGenRoot8033ED48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033ED48(){fn_8006665C(this);}
};
struct UnknownGenObject8033ED48_0 : UnknownGenRoot8033ED48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033ED48_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033ED48_1 : UnknownGenObject8033ED48_0 {
 inline ~UnknownGenObject8033ED48_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033ED48 : UnknownGenObject8033ED48_1 {
 char unknown0C[20];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 char unknown38[24];
 inline ~UnknownGenObject8033ED48(){unknown00=lbl_804E56E4;}
};
extern "C" {
void *beNDMWLoadCtrl2CommonIntf_vtableRead(){
 UnknownGenObject8033ED48 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E56E4;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
