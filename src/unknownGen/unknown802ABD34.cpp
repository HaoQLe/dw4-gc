#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CE6AC[];
extern char lbl_804CE7D8[];
}
struct UnknownGenRoot802ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802ABD34(){fn_8006665C(this);}
};
struct UnknownGenObject802ABD34_0 : UnknownGenRoot802ABD34 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802ABD34_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802ABD34_1 : UnknownGenObject802ABD34_0 {
 inline ~UnknownGenObject802ABD34_1(){unknown00=lbl_804CE7D8;}
};
struct UnknownGenObject802ABD34 : UnknownGenObject802ABD34_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802ABD34(){unknown00=lbl_804CE6AC;}
};
extern "C" {
void *igCriMovieCodec_vtableRead(){
 UnknownGenObject802ABD34 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CE7D8;
 object.unknown00=lbl_804CE6AC;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
