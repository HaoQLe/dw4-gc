#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D5740[];
}
struct UnknownGenRoot802DC574 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DC574(){fn_8006665C(this);}
};
struct UnknownGenObject802DC574_0 : UnknownGenRoot802DC574 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DC574_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DC574 : UnknownGenObject802DC574_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DC574(){unknown00=lbl_804D5740;}
};
extern "C" {
void *fn_802DC574(){
 UnknownGenObject802DC574 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D5740;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
