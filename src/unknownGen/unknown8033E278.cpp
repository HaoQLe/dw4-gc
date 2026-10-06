#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E57F4[];
}
struct UnknownGenRoot8033E278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033E278(){fn_8006665C(this);}
};
struct UnknownGenObject8033E278_0 : UnknownGenRoot8033E278 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033E278_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033E278_1 : UnknownGenObject8033E278_0 {
 inline ~UnknownGenObject8033E278_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033E278 : UnknownGenObject8033E278_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8033E278(){unknown00=lbl_804E57F4;}
};
extern "C" {
void *fn_8033E278(){
 UnknownGenObject8033E278 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E57F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
