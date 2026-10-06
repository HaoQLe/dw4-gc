#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B48D0[];
}
struct UnknownGenRoot801BEE68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BEE68(){fn_8006665C(this);}
};
struct UnknownGenObject801BEE68 : UnknownGenRoot801BEE68 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801BEE68(){unknown00=lbl_804B48D0;}
};
extern "C" {
void *fn_801BEE68(){
 UnknownGenObject801BEE68 object;
 object.unknown00=lbl_804B48D0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
