#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D4D04[];
extern char lbl_804D5160[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802DFB80 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DFB80(){fn_8006665C(this);}
};
struct UnknownGenObject802DFB80_0 : UnknownGenRoot802DFB80 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DFB80_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DFB80_1 : UnknownGenObject802DFB80_0 {
 inline ~UnknownGenObject802DFB80_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802DFB80_2 : UnknownGenObject802DFB80_1 {
 inline ~UnknownGenObject802DFB80_2(){unknown00=lbl_804D5160;}
};
struct UnknownGenObject802DFB80 : UnknownGenObject802DFB80_2 {
 char unknown0C[20];
 inline ~UnknownGenObject802DFB80(){unknown00=lbl_804D4D04;}
};
extern "C" {
void *fn_802DFB80(){
 UnknownGenObject802DFB80 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D5160;
 object.unknown00=lbl_804D4D04;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
