#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E576C[];
}
struct UnknownGenRoot8033E96C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033E96C(){fn_8006665C(this);}
};
struct UnknownGenObject8033E96C_0 : UnknownGenRoot8033E96C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033E96C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033E96C_1 : UnknownGenObject8033E96C_0 {
 inline ~UnknownGenObject8033E96C_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8033E96C_2 : UnknownGenObject8033E96C_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject8033E96C_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject8033E96C : UnknownGenObject8033E96C_2 {
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject8033E96C(){unknown00=lbl_804E576C;}
};
extern "C" {
void *fn_8033E96C(){
 UnknownGenObject8033E96C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E576C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
