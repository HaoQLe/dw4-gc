#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCDF0[];
extern char lbl_804E67FC[];
}
struct UnknownGenRoot8033446C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033446C(){fn_8006665C(this);}
};
struct UnknownGenObject8033446C_0 : UnknownGenRoot8033446C {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8033446C_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject8033446C : UnknownGenObject8033446C_0 {
 char unknown2C[4];
 inline ~UnknownGenObject8033446C(){unknown00=lbl_804E67FC;}
};
extern "C" {
void *fn_8033446C(){
 UnknownGenObject8033446C object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804E67FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
