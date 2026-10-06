#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80480338[];
extern char lbl_80480590[];
extern char lbl_80480E60[];
}
struct UnknownGenRoot800CBF94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBF94(){fn_8006665C(this);}
};
struct UnknownGenObject800CBF94_0 : UnknownGenRoot800CBF94 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CBF94_0(){unknown00=lbl_80480590;}
};
struct UnknownGenObject800CBF94 : UnknownGenObject800CBF94_0 {
 char unknown0C[4];
 inline ~UnknownGenObject800CBF94(){unknown00=lbl_80480338;}
};
extern "C" {
void *fn_800CBF94(){
 UnknownGenObject800CBF94 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480590;
 object.unknown08.value=0;
 object.unknown00=lbl_80480338;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
