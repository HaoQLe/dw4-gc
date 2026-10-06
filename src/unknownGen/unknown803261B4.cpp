#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E6B64[];
}
struct UnknownGenRoot803261B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803261B4(){fn_8006665C(this);}
};
struct UnknownGenObject803261B4_0 : UnknownGenRoot803261B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803261B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject803261B4_1 : UnknownGenObject803261B4_0 {
 inline ~UnknownGenObject803261B4_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject803261B4 : UnknownGenObject803261B4_1 {
 char unknown0C[52];
 inline ~UnknownGenObject803261B4(){unknown00=lbl_804E6B64;}
};
extern "C" {
void *fn_803261B4(){
 UnknownGenObject803261B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E6B64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
