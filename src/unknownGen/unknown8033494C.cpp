#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E6EA0[];
}
struct UnknownGenRoot8033494C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033494C(){fn_8006665C(this);}
};
struct UnknownGenObject8033494C_0 : UnknownGenRoot8033494C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033494C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033494C_1 : UnknownGenObject8033494C_0 {
 inline ~UnknownGenObject8033494C_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject8033494C_2 : UnknownGenObject8033494C_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject8033494C_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject8033494C : UnknownGenObject8033494C_2 {
 char unknown1C[20];
 inline ~UnknownGenObject8033494C(){unknown00=lbl_804E6EA0;}
};
extern "C" {
void *fn_8033494C(){
 UnknownGenObject8033494C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E6EA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
