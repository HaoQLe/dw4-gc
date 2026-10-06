#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_8049124C[];
extern char lbl_804922CC[];
}
struct UnknownGenRoot800D726C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D726C(){fn_8006665C(this);}
};
struct UnknownGenObject800D726C_0 : UnknownGenRoot800D726C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D726C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D726C_1 : UnknownGenObject800D726C_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D726C_1(){unknown00=lbl_804922CC;}
};
struct UnknownGenObject800D726C : UnknownGenObject800D726C_1 {
 char unknown18[72];
 UnknownGenRefMember unknown60;
 UnknownGenRefMember unknown64;
 char unknown68[16];
 inline ~UnknownGenObject800D726C(){unknown00=lbl_8049124C;}
};
extern "C" {
void *fn_800D726C(){
 UnknownGenObject800D726C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804922CC;
 object.unknown14.value=0;
 object.unknown00=lbl_8049124C;
 object.unknown60.value=0;
 object.unknown64.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
