#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804EB658[];
}
struct UnknownGenRoot80335A38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80335A38(){fn_8006665C(this);}
};
struct UnknownGenObject80335A38_0 : UnknownGenRoot80335A38 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80335A38_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80335A38_1 : UnknownGenObject80335A38_0 {
 inline ~UnknownGenObject80335A38_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject80335A38_2 : UnknownGenObject80335A38_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80335A38_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject80335A38 : UnknownGenObject80335A38_2 {
 char unknown1C[8];
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject80335A38(){unknown00=lbl_804EB658;}
};
extern "C" {
void *fn_80335A38(){
 UnknownGenObject80335A38 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804EB658;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
