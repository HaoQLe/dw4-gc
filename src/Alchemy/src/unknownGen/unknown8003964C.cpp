#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800847CC(void *);
extern char lbl_80473928[];
}
struct UnknownGenRoot8003964C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003964C(){fn_800847CC(this);}
};
struct UnknownGenObject8003964C : UnknownGenRoot8003964C {
 char unknown04[116];
 UnknownGenRefMember unknown78;
 char unknown7C[52];
 UnknownGenRefMember unknownB0;
 char unknownB4[28];
 inline ~UnknownGenObject8003964C(){unknown00=lbl_80473928;}
};
extern "C" {
void *fn_8003964C(){
 UnknownGenObject8003964C object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
