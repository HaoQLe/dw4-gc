#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D47CC[];
}
struct UnknownGenRoot802E1DC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E1DC0(){fn_8006665C(this);}
};
struct UnknownGenObject802E1DC0 : UnknownGenRoot802E1DC0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject802E1DC0(){unknown00=lbl_804D47CC;}
};
extern "C" {
void *fn_802E1DC0(){
 UnknownGenObject802E1DC0 object;
 object.unknown00=lbl_804D47CC;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
