#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DF2B0[];
}
struct UnknownGenRoot802C1F70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C1F70(){fn_8006665C(this);}
};
struct UnknownGenObject802C1F70_0 : UnknownGenRoot802C1F70 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C1F70_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C1F70_1 : UnknownGenObject802C1F70_0 {
 inline ~UnknownGenObject802C1F70_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802C1F70_2 : UnknownGenObject802C1F70_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C1F70_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802C1F70 : UnknownGenObject802C1F70_2 {
 char unknown1C[4];
 inline ~UnknownGenObject802C1F70(){unknown00=lbl_804DF2B0;}
};
extern "C" {
void *fn_802C1F70(){
 UnknownGenObject802C1F70 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DF2B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
