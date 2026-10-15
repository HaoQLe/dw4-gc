#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igMovieCodec_vtable[];
}
struct UnknownGenRoot802ABB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802ABB98(){igObject_construct(this);}
};
struct UnknownGenObject802ABB98_0 : UnknownGenRoot802ABB98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802ABB98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802ABB98 : UnknownGenObject802ABB98_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802ABB98(){unknown00=igMovieCodec_vtable;}
};
extern "C" {
void *igMovieCodec_vtableRead(){
 UnknownGenObject802ABB98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igMovieCodec_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
