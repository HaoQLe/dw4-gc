#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80470314[];
extern char lbl_80473480[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8003B274 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B274(){fn_8006665C(this);}
};
struct UnknownGenObject8003B274_0 : UnknownGenRoot8003B274 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B274_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003B274_1 : UnknownGenObject8003B274_0 {
 inline ~UnknownGenObject8003B274_1(){unknown00=lbl_80473480;}
};
struct UnknownGenObject8003B274 : UnknownGenObject8003B274_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8003B274(){unknown00=lbl_80470314;}
};
extern "C" {
void *fn_8003B274(){
 UnknownGenObject8003B274 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80473480;
 object.unknown00=lbl_80470314;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
