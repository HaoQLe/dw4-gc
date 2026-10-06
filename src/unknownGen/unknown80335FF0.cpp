#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E633C[];
}
struct UnknownGenRoot80335FF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80335FF0(){fn_8006665C(this);}
};
struct UnknownGenObject80335FF0_0 : UnknownGenRoot80335FF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80335FF0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80335FF0_1 : UnknownGenObject80335FF0_0 {
 inline ~UnknownGenObject80335FF0_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80335FF0 : UnknownGenObject80335FF0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80335FF0(){unknown00=lbl_804E633C;}
};
extern "C" {
void *fn_80335FF0(){
 UnknownGenObject80335FF0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E633C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
