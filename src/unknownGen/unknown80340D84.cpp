#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E4E2C[];
}
struct UnknownGenRoot80340D84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80340D84(){fn_8006665C(this);}
};
struct UnknownGenObject80340D84_0 : UnknownGenRoot80340D84 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80340D84_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80340D84_1 : UnknownGenObject80340D84_0 {
 inline ~UnknownGenObject80340D84_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80340D84 : UnknownGenObject80340D84_1 {
 char unknown0C[52];
 inline ~UnknownGenObject80340D84(){unknown00=lbl_804E4E2C;}
};
extern "C" {
void *beNDMWLoadIntf2MesWin_vtableRead(){
 UnknownGenObject80340D84 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E4E2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
