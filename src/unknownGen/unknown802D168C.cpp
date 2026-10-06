#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804C9AF0[];
extern char lbl_804DE7E4[];
}
struct UnknownGenRoot802D168C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D168C(){fn_8006665C(this);}
};
struct UnknownGenObject802D168C_0 : UnknownGenRoot802D168C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D168C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D168C_1 : UnknownGenObject802D168C_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802D168C_1(){unknown00=lbl_804C9AF0;}
};
struct UnknownGenObject802D168C : UnknownGenObject802D168C_1 {
 char unknown14[12];
 inline ~UnknownGenObject802D168C(){unknown00=lbl_804DE7E4;}
};
extern "C" {
void *fn_802D168C(){
 UnknownGenObject802D168C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804C9AF0;
 object.unknown10.value=0;
 object.unknown00=lbl_804DE7E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
