#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E4620[];
}
struct UnknownGenRoot80343FEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80343FEC(){fn_8006665C(this);}
};
struct UnknownGenObject80343FEC : UnknownGenRoot80343FEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[80];
 inline ~UnknownGenObject80343FEC(){unknown00=lbl_804E4620;}
};
extern "C" {
void *beNDMWShinkaObject_vtableRead(){
 UnknownGenObject80343FEC object;
 object.unknown00=lbl_804E4620;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
