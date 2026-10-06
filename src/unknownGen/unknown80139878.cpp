#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A43C4[];
extern char lbl_804AA298[];
}
struct UnknownGenRoot80139878 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139878(){fn_8006665C(this);}
};
struct UnknownGenObject80139878_0 : UnknownGenRoot80139878 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139878_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139878 : UnknownGenObject80139878_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80139878(){unknown00=lbl_804A43C4;}
};
extern "C" {
void *fn_80139878(){
 UnknownGenObject80139878 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A43C4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
