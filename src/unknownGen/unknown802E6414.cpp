#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D38F8[];
}
struct UnknownGenRoot802E6414 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6414(){fn_8006665C(this);}
};
struct UnknownGenObject802E6414_0 : UnknownGenRoot802E6414 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6414_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E6414 : UnknownGenObject802E6414_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802E6414(){unknown00=lbl_804D38F8;}
};
extern "C" {
void *beAction2WAITCHECK_vtableRead(){
 UnknownGenObject802E6414 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D38F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
