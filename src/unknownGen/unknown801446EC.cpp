#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A9AD4[];
extern char lbl_804A9C44[];
}
struct UnknownGenRoot801446EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801446EC(){fn_8006665C(this);}
};
struct UnknownGenObject801446EC : UnknownGenRoot801446EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801446EC(){unknown00=lbl_804A9AD4;}
};
extern "C" {
void *fn_801446EC(){
 UnknownGenObject801446EC object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9AD4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
