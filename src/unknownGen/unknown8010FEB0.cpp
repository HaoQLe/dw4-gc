#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804975A4[];
}
struct UnknownGenRoot8010FEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8010FEB0 : UnknownGenRoot8010FEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject8010FEB0(){unknown00=lbl_804975A4;}
};
extern "C" {
void *fn_8010FEB0(){
 UnknownGenObject8010FEB0 object;
 object.unknown00=lbl_804975A4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
