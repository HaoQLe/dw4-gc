#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D67BC[];
}
struct UnknownGenRoot802D7B64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D7B64(){fn_8006665C(this);}
};
struct UnknownGenObject802D7B64 : UnknownGenRoot802D7B64 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802D7B64(){unknown00=lbl_804D67BC;}
};
extern "C" {
void *beGeneraterPlayerData_vtableRead(){
 UnknownGenObject802D7B64 object;
 object.unknown00=lbl_804D67BC;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
