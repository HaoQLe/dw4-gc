#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D5A14[];
}
struct UnknownGenRoot802DBB60 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DBB60(){fn_8006665C(this);}
};
struct UnknownGenObject802DBB60 : UnknownGenRoot802DBB60 {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenString unknown24;
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject802DBB60(){unknown00=lbl_804D5A14;}
};
extern "C" {
void *fn_802DBB60(){
 UnknownGenObject802DBB60 object;
 object.unknown00=lbl_804D5A14;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
