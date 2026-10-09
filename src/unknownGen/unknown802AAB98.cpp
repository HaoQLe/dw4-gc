#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CE470[];
extern char lbl_804CE4CC[];
}
struct UnknownGenRoot802AAB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AAB98(){fn_8006665C(this);}
};
struct UnknownGenObject802AAB98_0 : UnknownGenRoot802AAB98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AAB98_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802AAB98_1 : UnknownGenObject802AAB98_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802AAB98_1(){unknown00=lbl_804CE4CC;}
};
struct UnknownGenObject802AAB98 : UnknownGenObject802AAB98_1 {
 char unknown10[16];
 inline ~UnknownGenObject802AAB98(){unknown00=lbl_804CE470;}
};
extern "C" {
void *igAdxAfsFile_vtableRead(){
 UnknownGenObject802AAB98 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CE4CC;
 object.unknown0C.value=0;
 object.unknown00=lbl_804CE470;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
