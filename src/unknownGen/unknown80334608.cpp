#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E677C[];
}
struct UnknownGenRoot80334608 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80334608(){fn_8006665C(this);}
};
struct UnknownGenObject80334608_0 : UnknownGenRoot80334608 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80334608_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80334608_1 : UnknownGenObject80334608_0 {
 inline ~UnknownGenObject80334608_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80334608_2 : UnknownGenObject80334608_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80334608_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80334608 : UnknownGenObject80334608_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80334608(){unknown00=lbl_804E677C;}
};
extern "C" {
void *fn_80334608(){
 UnknownGenObject80334608 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E677C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
