#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E4DAC[];
}
struct UnknownGenRoot80341158 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80341158(){fn_8006665C(this);}
};
struct UnknownGenObject80341158_0 : UnknownGenRoot80341158 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80341158_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80341158_1 : UnknownGenObject80341158_0 {
 inline ~UnknownGenObject80341158_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80341158 : UnknownGenObject80341158_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80341158(){unknown00=lbl_804E4DAC;}
};
extern "C" {
void *beNDMWLoadIntf2ComMdlCtrl_vtableRead(){
 UnknownGenObject80341158 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E4DAC;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
