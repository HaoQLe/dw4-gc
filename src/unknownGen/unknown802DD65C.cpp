#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D5470[];
}
struct UnknownGenRoot802DD65C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD65C(){fn_8006665C(this);}
};
struct UnknownGenObject802DD65C_0 : UnknownGenRoot802DD65C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD65C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DD65C : UnknownGenObject802DD65C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802DD65C(){unknown00=lbl_804D5470;}
};
extern "C" {
void *beDataObjInt_vtableRead(){
 UnknownGenObject802DD65C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D5470;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
