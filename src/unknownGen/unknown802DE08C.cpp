#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804D5258[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802DE08C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DE08C(){fn_8006665C(this);}
};
struct UnknownGenObject802DE08C_0 : UnknownGenRoot802DE08C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DE08C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DE08C_1 : UnknownGenObject802DE08C_0 {
 inline ~UnknownGenObject802DE08C_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802DE08C_2 : UnknownGenObject802DE08C_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802DE08C_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802DE08C : UnknownGenObject802DE08C_2 {
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802DE08C(){unknown00=lbl_804D5258;}
};
extern "C" {
void *beDBManagerInfo_vtableRead(){
 UnknownGenObject802DE08C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804D5258;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
