#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_80497D08[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){fn_8006665C(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=lbl_80497E1C;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=lbl_80497D08;}
};
extern "C" {
void *fn_8010DB70(){
 UnknownGenObject8010DB70 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 object.unknown00=lbl_80497D08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
