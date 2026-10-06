#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047C2C0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800B5ADC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5ADC(){fn_8006665C(this);}
};
struct UnknownGenObject800B5ADC : UnknownGenRoot800B5ADC {
 char unknown04[136];
 UnknownGenRefMember unknown8C;
 char unknown90[16];
 inline ~UnknownGenObject800B5ADC(){unknown00=lbl_8047C2C0;}
};
extern "C" {
void *fn_800B5ADC(){
 UnknownGenObject800B5ADC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C2C0;
 object.unknown8C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
