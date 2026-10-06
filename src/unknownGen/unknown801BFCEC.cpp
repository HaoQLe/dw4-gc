#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B73D4[];
}
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){fn_8006665C(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=lbl_804B73D4;}
};
extern "C" {
void *fn_801BFCEC(){
 UnknownGenObject801BFCEC object;
 object.unknown00=lbl_804B73D4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
