#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B326C[];
extern char lbl_804B4474[];
extern char lbl_804D7134[];
}
struct UnknownGenRoot802D50D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D50D4(){fn_8006665C(this);}
};
struct UnknownGenObject802D50D4_0 : UnknownGenRoot802D50D4 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802D50D4_0(){unknown00=lbl_804B326C;}
};
struct UnknownGenObject802D50D4_1 : UnknownGenObject802D50D4_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802D50D4_1(){unknown00=lbl_804B4474;}
};
struct UnknownGenObject802D50D4 : UnknownGenObject802D50D4_1 {
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject802D50D4(){unknown00=lbl_804D7134;}
};
extern "C" {
void *beHitLandModelTraversal_vtableRead(){
 UnknownGenObject802D50D4 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4474;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=lbl_804D7134;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
