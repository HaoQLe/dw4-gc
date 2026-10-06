#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBC50[];
extern char lbl_804E4B14[];
}
struct UnknownGenRoot80341D84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80341D84(){fn_8006665C(this);}
};
struct UnknownGenObject80341D84_0 : UnknownGenRoot80341D84 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80341D84_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80341D84_1 : UnknownGenObject80341D84_0 {
 inline ~UnknownGenObject80341D84_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject80341D84 : UnknownGenObject80341D84_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80341D84(){unknown00=lbl_804E4B14;}
};
extern "C" {
void *fn_80341D84(){
 UnknownGenObject80341D84 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804E4B14;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
