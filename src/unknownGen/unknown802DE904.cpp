#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D5104[];
extern char lbl_804D5160[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802DE904 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DE904(){fn_8006665C(this);}
};
struct UnknownGenObject802DE904_0 : UnknownGenRoot802DE904 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DE904_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DE904_1 : UnknownGenObject802DE904_0 {
 inline ~UnknownGenObject802DE904_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802DE904_2 : UnknownGenObject802DE904_1 {
 inline ~UnknownGenObject802DE904_2(){unknown00=lbl_804D5160;}
};
struct UnknownGenObject802DE904 : UnknownGenObject802DE904_2 {
 char unknown0C[36];
 inline ~UnknownGenObject802DE904(){unknown00=lbl_804D5104;}
};
extern "C" {
void *fn_802DE904(){
 UnknownGenObject802DE904 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D5160;
 object.unknown00=lbl_804D5104;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
