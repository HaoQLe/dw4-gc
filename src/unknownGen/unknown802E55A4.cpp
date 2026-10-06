#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D3C48[];
}
struct UnknownGenRoot802E55A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E55A4(){fn_8006665C(this);}
};
struct UnknownGenObject802E55A4 : UnknownGenRoot802E55A4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[68];
 UnknownGenRefMember unknown50;
 UnknownGenRefMember unknown54;
 UnknownGenRefMember unknown58;
 UnknownGenRefMember unknown5C;
 inline ~UnknownGenObject802E55A4(){unknown00=lbl_804D3C48;}
};
extern "C" {
void *fn_802E55A4(){
 UnknownGenObject802E55A4 object;
 object.unknown00=lbl_804D3C48;
 object.unknown08.value=0;
 object.unknown50.value=0;
 object.unknown54.value=0;
 object.unknown58.value=0;
 object.unknown5C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
