#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9170[];
}
struct UnknownGenRoot802CADEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CADEC(){fn_8006665C(this);}
};
struct UnknownGenObject802CADEC_0 : UnknownGenRoot802CADEC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CADEC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CADEC : UnknownGenObject802CADEC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CADEC(){unknown00=lbl_804D9170;}
};
extern "C" {
void *fn_802CADEC(){
 UnknownGenObject802CADEC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D9170;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
