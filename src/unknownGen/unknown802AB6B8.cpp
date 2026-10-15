#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igAdxAudio_vtable[];
}
struct UnknownGenRoot802AB6B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AB6B8(){igObject_construct(this);}
};
struct UnknownGenObject802AB6B8 : UnknownGenRoot802AB6B8 {
 char unknown04[36];
 UnknownGenString unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject802AB6B8(){unknown00=igAdxAudio_vtable;}
};
extern "C" {
void *igAdxAudio_vtableRead(){
 UnknownGenObject802AB6B8 object;
 object.unknown00=igAdxAudio_vtable;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
