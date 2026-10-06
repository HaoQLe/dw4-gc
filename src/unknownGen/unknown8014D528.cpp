#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A71C4[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014D528 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D528(){fn_8006665C(this);}
};
struct UnknownGenObject8014D528_0 : UnknownGenRoot8014D528 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D528_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D528 : UnknownGenObject8014D528_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014D528(){unknown00=lbl_804A71C4;}
};
extern "C" {
void *fn_8014D528(){
 UnknownGenObject8014D528 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A71C4;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
