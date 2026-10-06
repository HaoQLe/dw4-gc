#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804969FC[];
extern char lbl_80496F28[];
extern char lbl_804D609C[];
}
struct UnknownGenRoot802D9684 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D9684(){fn_8006665C(this);}
};
struct UnknownGenObject802D9684_0 : UnknownGenRoot802D9684 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D9684_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D9684_1 : UnknownGenObject802D9684_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802D9684_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject802D9684_2 : UnknownGenObject802D9684_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject802D9684_2(){unknown00=lbl_804969FC;}
};
struct UnknownGenObject802D9684 : UnknownGenObject802D9684_2 {
 char unknown24[4];
 inline ~UnknownGenObject802D9684(){unknown00=lbl_804D609C;}
};
extern "C" {
void *fn_802D9684(){
 UnknownGenObject802D9684 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80496F28;
 object.unknown14.value=0;
 object.unknown00=lbl_804969FC;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown00=lbl_804D609C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
