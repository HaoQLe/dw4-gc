#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DA7E4[];
}
struct UnknownGenRoot802C29AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C29AC(){fn_8006665C(this);}
};
struct UnknownGenObject802C29AC_0 : UnknownGenRoot802C29AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C29AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C29AC_1 : UnknownGenObject802C29AC_0 {
 inline ~UnknownGenObject802C29AC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802C29AC : UnknownGenObject802C29AC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802C29AC(){unknown00=lbl_804DA7E4;}
};
extern "C" {
void *fn_802C29AC(){
 UnknownGenObject802C29AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DA7E4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
