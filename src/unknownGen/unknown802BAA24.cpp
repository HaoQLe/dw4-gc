#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DF644[];
}
struct UnknownGenRoot802BAA24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BAA24(){fn_8006665C(this);}
};
struct UnknownGenObject802BAA24_0 : UnknownGenRoot802BAA24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802BAA24_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802BAA24_1 : UnknownGenObject802BAA24_0 {
 inline ~UnknownGenObject802BAA24_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802BAA24_2 : UnknownGenObject802BAA24_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802BAA24_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802BAA24 : UnknownGenObject802BAA24_2 {
 char unknown1C[20];
 inline ~UnknownGenObject802BAA24(){unknown00=lbl_804DF644;}
};
extern "C" {
void *fn_802BAA24(){
 UnknownGenObject802BAA24 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DF644;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
