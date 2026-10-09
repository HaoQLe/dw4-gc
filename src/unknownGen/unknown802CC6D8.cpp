#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8B58[];
}
struct UnknownGenRoot802CC6D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC6D8(){fn_8006665C(this);}
};
struct UnknownGenObject802CC6D8_0 : UnknownGenRoot802CC6D8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC6D8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CC6D8 : UnknownGenObject802CC6D8_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802CC6D8(){unknown00=lbl_804D8B58;}
};
extern "C" {
void *beModelCtrlLUACALL_vtableRead(){
 UnknownGenObject802CC6D8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8B58;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
