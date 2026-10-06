#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804930AC[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
extern char lbl_804A90A0[];
}
struct UnknownGenRoot801493BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801493BC(){fn_8006665C(this);}
};
struct UnknownGenObject801493BC_0 : UnknownGenRoot801493BC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801493BC_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject801493BC_1 : UnknownGenObject801493BC_0 {
 inline ~UnknownGenObject801493BC_1(){unknown00=lbl_804A6B28;}
};
struct UnknownGenObject801493BC : UnknownGenObject801493BC_1 {
 char unknown14[4];
 inline ~UnknownGenObject801493BC(){unknown00=lbl_804A90A0;}
};
extern "C" {
void *fn_801493BC(){
 UnknownGenObject801493BC object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A6B28;
 object.unknown00=lbl_804A90A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
