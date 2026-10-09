#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8F18[];
}
struct UnknownGenRoot802CB818 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB818(){fn_8006665C(this);}
};
struct UnknownGenObject802CB818_0 : UnknownGenRoot802CB818 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB818_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CB818 : UnknownGenObject802CB818_0 {
 char unknown0C[36];
 inline ~UnknownGenObject802CB818(){unknown00=lbl_804D8F18;}
};
extern "C" {
void *beModelCtrlMOVEEX_vtableRead(){
 UnknownGenObject802CB818 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8F18;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
