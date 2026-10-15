#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSvSlotXbox_vtable[];
extern char lbl_804DAE94[];
}
struct UnknownGenRoot802BFC98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BFC98(){igObject_construct(this);}
};
struct UnknownGenObject802BFC98 : UnknownGenRoot802BFC98 {
 char unknown04[20];
 UnknownGenString unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject802BFC98(){unknown00=beSvSlotXbox_vtable;}
};
extern "C" {
void *beSvSlotXbox_vtableRead(){
 UnknownGenObject802BFC98 object;
 object.unknown00=lbl_804DAE94;
 object.unknown00=beSvSlotXbox_vtable;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
