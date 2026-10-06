#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E4B94[];
}
struct UnknownGenRoot80341A24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80341A24(){fn_8006665C(this);}
};
struct UnknownGenObject80341A24_0 : UnknownGenRoot80341A24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80341A24_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80341A24_1 : UnknownGenObject80341A24_0 {
 inline ~UnknownGenObject80341A24_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80341A24 : UnknownGenObject80341A24_1 {
 char unknown0C[20];
 inline ~UnknownGenObject80341A24(){unknown00=lbl_804E4B94;}
};
extern "C" {
void *fn_80341A24(){
 UnknownGenObject80341A24 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E4B94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
