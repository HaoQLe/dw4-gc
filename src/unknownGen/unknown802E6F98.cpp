#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D359C[];
}
struct UnknownGenRoot802E6F98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6F98(){fn_8006665C(this);}
};
struct UnknownGenObject802E6F98_0 : UnknownGenRoot802E6F98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6F98_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E6F98 : UnknownGenObject802E6F98_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802E6F98(){unknown00=lbl_804D359C;}
};
extern "C" {
void *fn_802E6F98(){
 UnknownGenObject802E6F98 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D359C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
