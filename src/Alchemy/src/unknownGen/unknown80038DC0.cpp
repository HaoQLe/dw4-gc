#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003CE60(void *);
extern char lbl_80473C90[];
}
struct UnknownGenRoot80038DC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80038DC0(){fn_8003CE60(this);}
};
struct UnknownGenObject80038DC0 : UnknownGenRoot80038DC0 {
 char unknown04[112];
 UnknownGenRefMember unknown74;
 char unknown78[32];
 UnknownGenRefMember unknown98;
 char unknown9C[24];
 UnknownGenRefMember unknownB4;
 char unknownB8[8];
 inline ~UnknownGenObject80038DC0(){unknown00=lbl_80473C90;}
};
extern "C" {
void *fn_80038DC0(){
 UnknownGenObject80038DC0 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
