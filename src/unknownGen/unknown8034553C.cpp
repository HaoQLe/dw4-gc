#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496CB8[];
extern char lbl_804E6F70[];
}
struct UnknownGenRoot8034553C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8034553C(){fn_8006665C(this);}
};
struct UnknownGenObject8034553C : UnknownGenRoot8034553C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8034553C(){unknown00=lbl_804E6F70;}
};
extern "C" {
void *fn_8034553C(){
 UnknownGenObject8034553C object;
 object.unknown00=lbl_80496CB8;
 object.unknown00=lbl_804E6F70;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
