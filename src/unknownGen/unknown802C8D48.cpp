#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9828[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802C8D48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C8D48(){fn_8006665C(this);}
};
struct UnknownGenObject802C8D48_0 : UnknownGenRoot802C8D48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C8D48_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C8D48_1 : UnknownGenObject802C8D48_0 {
 inline ~UnknownGenObject802C8D48_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802C8D48 : UnknownGenObject802C8D48_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802C8D48(){unknown00=lbl_804D9828;}
};
extern "C" {
void *beModelCtrlInfoRamData_vtableRead(){
 UnknownGenObject802C8D48 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D9828;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
