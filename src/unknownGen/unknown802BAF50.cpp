#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DB614[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802BAF50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BAF50(){fn_8006665C(this);}
};
struct UnknownGenObject802BAF50_0 : UnknownGenRoot802BAF50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802BAF50_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802BAF50_1 : UnknownGenObject802BAF50_0 {
 inline ~UnknownGenObject802BAF50_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802BAF50 : UnknownGenObject802BAF50_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802BAF50(){unknown00=lbl_804DB614;}
};
extern "C" {
void *fn_802BAF50(){
 UnknownGenObject802BAF50 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804DB614;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
