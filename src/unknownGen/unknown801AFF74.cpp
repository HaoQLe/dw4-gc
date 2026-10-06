#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B9200[];
}
struct UnknownGenRoot801AFF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFF74(){fn_8006665C(this);}
};
struct UnknownGenObject801AFF74_0 : UnknownGenRoot801AFF74 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFF74_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AFF74 : UnknownGenObject801AFF74_0 {
 char unknown0C[20];
 inline ~UnknownGenObject801AFF74(){unknown00=lbl_804B9200;}
};
extern "C" {
void *fn_801AFF74(){
 UnknownGenObject801AFF74 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9200;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
