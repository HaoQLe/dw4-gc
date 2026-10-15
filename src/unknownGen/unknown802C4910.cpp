#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beMovieInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4910(){igObject_construct(this);}
};
struct UnknownGenObject802C4910_0 : UnknownGenRoot802C4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4910_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C4910_1 : UnknownGenObject802C4910_0 {
 inline ~UnknownGenObject802C4910_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802C4910_2 : UnknownGenObject802C4910_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C4910_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C4910 : UnknownGenObject802C4910_2 {
 char unknown1C[12];
 inline ~UnknownGenObject802C4910(){unknown00=beMovieInfo_vtable;}
};
extern "C" {
void *beMovieInfo_vtableRead(){
 UnknownGenObject802C4910 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beMovieInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
