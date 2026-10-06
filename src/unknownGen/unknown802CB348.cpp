#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9008[];
}
struct UnknownGenRoot802CB348 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB348(){fn_8006665C(this);}
};
struct UnknownGenObject802CB348_0 : UnknownGenRoot802CB348 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB348_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CB348 : UnknownGenObject802CB348_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CB348(){unknown00=lbl_804D9008;}
};
extern "C" {
void *fn_802CB348(){
 UnknownGenObject802CB348 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D9008;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
