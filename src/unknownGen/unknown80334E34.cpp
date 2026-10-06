#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E6664[];
}
struct UnknownGenRoot80334E34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80334E34(){fn_8006665C(this);}
};
struct UnknownGenObject80334E34_0 : UnknownGenRoot80334E34 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80334E34_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80334E34_1 : UnknownGenObject80334E34_0 {
 inline ~UnknownGenObject80334E34_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80334E34 : UnknownGenObject80334E34_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80334E34(){unknown00=lbl_804E6664;}
};
extern "C" {
void *fn_80334E34(){
 UnknownGenObject80334E34 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E6664;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
