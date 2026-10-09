#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804E123C[];
}
struct UnknownGenRoot802CFBD4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CFBD4(){fn_8006665C(this);}
};
struct UnknownGenObject802CFBD4_0 : UnknownGenRoot802CFBD4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CFBD4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CFBD4_1 : UnknownGenObject802CFBD4_0 {
 inline ~UnknownGenObject802CFBD4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802CFBD4 : UnknownGenObject802CFBD4_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802CFBD4(){unknown00=lbl_804E123C;}
};
extern "C" {
void *beMemory_vtableRead(){
 UnknownGenObject802CFBD4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804E123C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
