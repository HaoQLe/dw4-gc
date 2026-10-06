#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DE17C[];
}
struct UnknownGenRoot802D8760 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D8760(){fn_8006665C(this);}
};
struct UnknownGenObject802D8760_0 : UnknownGenRoot802D8760 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D8760_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D8760_1 : UnknownGenObject802D8760_0 {
 inline ~UnknownGenObject802D8760_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802D8760_2 : UnknownGenObject802D8760_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D8760_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802D8760 : UnknownGenObject802D8760_2 {
 char unknown1C[20];
 inline ~UnknownGenObject802D8760(){unknown00=lbl_804DE17C;}
};
extern "C" {
void *fn_802D8760(){
 UnknownGenObject802D8760 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DE17C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
