#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D4524[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802E34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E34A8(){fn_8006665C(this);}
};
struct UnknownGenObject802E34A8_0 : UnknownGenRoot802E34A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E34A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E34A8_1 : UnknownGenObject802E34A8_0 {
 inline ~UnknownGenObject802E34A8_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802E34A8 : UnknownGenObject802E34A8_1 {
 char unknown0C[52];
 inline ~UnknownGenObject802E34A8(){unknown00=lbl_804D4524;}
};
extern "C" {
void *beBaseInfoRamTimer_vtableRead(){
 UnknownGenObject802E34A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D4524;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
