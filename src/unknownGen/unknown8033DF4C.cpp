#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E5874[];
}
struct UnknownGenRoot8033DF4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033DF4C(){fn_8006665C(this);}
};
struct UnknownGenObject8033DF4C_0 : UnknownGenRoot8033DF4C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033DF4C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033DF4C_1 : UnknownGenObject8033DF4C_0 {
 inline ~UnknownGenObject8033DF4C_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject8033DF4C : UnknownGenObject8033DF4C_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8033DF4C(){unknown00=lbl_804E5874;}
};
extern "C" {
void *beNDMWLoadIntf2MakeChr_vtableRead(){
 UnknownGenObject8033DF4C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E5874;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
