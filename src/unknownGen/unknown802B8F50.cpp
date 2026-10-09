#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DF8DC[];
}
struct UnknownGenRoot802B8F50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B8F50(){fn_8006665C(this);}
};
struct UnknownGenObject802B8F50_0 : UnknownGenRoot802B8F50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B8F50_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B8F50_1 : UnknownGenObject802B8F50_0 {
 inline ~UnknownGenObject802B8F50_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B8F50_2 : UnknownGenObject802B8F50_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B8F50_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802B8F50 : UnknownGenObject802B8F50_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject802B8F50(){unknown00=lbl_804DF8DC;}
};
extern "C" {
void *beSound_vtableRead(){
 UnknownGenObject802B8F50 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DF8DC;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
