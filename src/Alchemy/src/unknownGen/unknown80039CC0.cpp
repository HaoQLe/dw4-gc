#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8008B264(void *);
extern char lbl_80473790[];
}
struct UnknownGenRoot80039CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80039CC0(){fn_8008B264(this);}
};
struct UnknownGenObject80039CC0 : UnknownGenRoot80039CC0 {
 char unknown04[112];
 UnknownGenRefMember unknown74;
 char unknown78[28];
 UnknownGenRefMember unknown94;
 char unknown98[8];
 inline ~UnknownGenObject80039CC0(){unknown00=lbl_80473790;}
};
extern "C" {
void *fn_80039CC0(){
 UnknownGenObject80039CC0 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
