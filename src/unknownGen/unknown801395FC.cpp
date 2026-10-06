#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4360[];
extern char lbl_804AA298[];
}
struct UnknownGenRoot801395FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801395FC(){fn_8006665C(this);}
};
struct UnknownGenObject801395FC_0 : UnknownGenRoot801395FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801395FC_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject801395FC : UnknownGenObject801395FC_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801395FC(){unknown00=lbl_804A4360;}
};
extern "C" {
void *fn_801395FC(){
 UnknownGenObject801395FC object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A4360;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
