#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DF3EC[];
}
struct UnknownGenRoot802C1168 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C1168(){fn_8006665C(this);}
};
struct UnknownGenObject802C1168_0 : UnknownGenRoot802C1168 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C1168_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C1168_1 : UnknownGenObject802C1168_0 {
 inline ~UnknownGenObject802C1168_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802C1168_2 : UnknownGenObject802C1168_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C1168_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802C1168 : UnknownGenObject802C1168_2 {
 char unknown1C[20];
 inline ~UnknownGenObject802C1168(){unknown00=lbl_804DF3EC;}
};
extern "C" {
void *fn_802C1168(){
 UnknownGenObject802C1168 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DF3EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
