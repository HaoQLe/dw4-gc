#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_80497D64[];
extern char lbl_80497DC0[];
extern char lbl_80497E78[];
}
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){fn_8006665C(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=lbl_80497DC0;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=lbl_80497D64;}
};
extern "C" {
void *fn_8010D764(){
 UnknownGenObject8010D764 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497DC0;
 object.unknown24.value=0;
 object.unknown00=lbl_80497D64;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
