#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E52D8[];
extern char lbl_804E5334[];
}
struct UnknownGenRoot8033FBBC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033FBBC(){fn_8006665C(this);}
};
struct UnknownGenObject8033FBBC : UnknownGenRoot8033FBBC {
 char unknown04[20];
 UnknownGenString unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8033FBBC(){unknown00=lbl_804E52D8;}
};
extern "C" {
void *fn_8033FBBC(){
 UnknownGenObject8033FBBC object;
 object.unknown00=lbl_804E5334;
 object.unknown00=lbl_804E52D8;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
