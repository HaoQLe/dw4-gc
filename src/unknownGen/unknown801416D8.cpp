#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A5EC4[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
}
struct UnknownGenRoot801416D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801416D8(){fn_8006665C(this);}
};
struct UnknownGenObject801416D8 : UnknownGenRoot801416D8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801416D8(){unknown00=lbl_804A5EC4;}
};
extern "C" {
void *fn_801416D8(){
 UnknownGenObject801416D8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A5EC4;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
