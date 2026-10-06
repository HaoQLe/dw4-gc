#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B39E8[];
extern char lbl_804B51E4[];
}
struct UnknownGenRoot801C5130 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5130(){fn_8006665C(this);}
};
struct UnknownGenObject801C5130 : UnknownGenRoot801C5130 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[12];
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject801C5130(){unknown00=lbl_804B51E4;}
};
extern "C" {
void *fn_801C5130(){
 UnknownGenObject801C5130 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B51E4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
