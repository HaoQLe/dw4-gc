#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DDF38[];
}
struct UnknownGenRoot802D9270 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D9270(){fn_8006665C(this);}
};
struct UnknownGenObject802D9270_0 : UnknownGenRoot802D9270 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D9270_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D9270 : UnknownGenObject802D9270_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802D9270(){unknown00=lbl_804DDF38;}
};
extern "C" {
void *fn_802D9270(){
 UnknownGenObject802D9270 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DDF38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
