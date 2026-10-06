#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804969FC[];
extern char lbl_80496F28[];
}
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){fn_8006665C(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=lbl_804969FC;}
};
extern "C" {
void *fn_80114A00(){
 UnknownGenObject80114A00 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80496F28;
 object.unknown14.value=0;
 object.unknown00=lbl_804969FC;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
