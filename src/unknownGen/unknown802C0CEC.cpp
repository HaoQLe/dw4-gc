#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DAB14[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C0CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C0CEC(){fn_8006665C(this);}
};
struct UnknownGenObject802C0CEC_0 : UnknownGenRoot802C0CEC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C0CEC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C0CEC_1 : UnknownGenObject802C0CEC_0 {
 inline ~UnknownGenObject802C0CEC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802C0CEC_2 : UnknownGenObject802C0CEC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C0CEC_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C0CEC : UnknownGenObject802C0CEC_2 {
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject802C0CEC(){unknown00=lbl_804DAB14;}
};
extern "C" {
void *bePoint01Info_vtableRead(){
 UnknownGenObject802C0CEC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DAB14;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
