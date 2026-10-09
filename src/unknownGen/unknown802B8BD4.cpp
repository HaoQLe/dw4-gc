#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBBF4[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802B8BD4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B8BD4(){fn_8006665C(this);}
};
struct UnknownGenObject802B8BD4_0 : UnknownGenRoot802B8BD4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B8BD4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B8BD4_1 : UnknownGenObject802B8BD4_0 {
 inline ~UnknownGenObject802B8BD4_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802B8BD4 : UnknownGenObject802B8BD4_1 {
 char unknown0C[20];
 inline ~UnknownGenObject802B8BD4(){unknown00=lbl_804DBBF4;}
};
extern "C" {
void *beSoundData_vtableRead(){
 UnknownGenObject802B8BD4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804DBBF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
