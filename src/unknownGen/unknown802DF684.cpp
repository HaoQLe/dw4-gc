#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beCriAudio_vtable[];
}
struct UnknownGenRoot802DF684 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DF684(){igObject_construct(this);}
};
struct UnknownGenObject802DF684 : UnknownGenRoot802DF684 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject802DF684(){unknown00=beCriAudio_vtable;}
};
extern "C" {
void *beCriAudio_vtableRead(){
 UnknownGenObject802DF684 object;
 object.unknown00=beCriAudio_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
