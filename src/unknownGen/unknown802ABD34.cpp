#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igCriMovieCodec_vtable[];
extern char igMovieCodec_vtable[];
}
struct UnknownGenRoot802ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802ABD34(){igObject_construct(this);}
};
struct UnknownGenObject802ABD34_0 : UnknownGenRoot802ABD34 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802ABD34_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802ABD34_1 : UnknownGenObject802ABD34_0 {
 inline ~UnknownGenObject802ABD34_1(){unknown00=igMovieCodec_vtable;}
};
struct UnknownGenObject802ABD34 : UnknownGenObject802ABD34_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802ABD34(){unknown00=igCriMovieCodec_vtable;}
};
extern "C" {
void *igCriMovieCodec_vtableRead(){
 UnknownGenObject802ABD34 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igMovieCodec_vtable;
 object.unknown00=igCriMovieCodec_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
