#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D637C[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802D8D70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D8D70(){fn_8006665C(this);}
};
struct UnknownGenObject802D8D70_0 : UnknownGenRoot802D8D70 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D8D70_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D8D70_1 : UnknownGenObject802D8D70_0 {
 inline ~UnknownGenObject802D8D70_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802D8D70 : UnknownGenObject802D8D70_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[20];
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject802D8D70(){unknown00=lbl_804D637C;}
};
extern "C" {
void *fn_802D8D70(){
 UnknownGenObject802D8D70 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D637C;
 object.unknown10.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
