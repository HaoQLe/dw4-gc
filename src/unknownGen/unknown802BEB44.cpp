#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSvFormatApi_vtable[];
extern char lbl_804E0F88[];
}
struct UnknownGenRoot802BEB44 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BEB44(){igObject_construct(this);}
};
struct UnknownGenObject802BEB44_0 : UnknownGenRoot802BEB44 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802BEB44_0(){unknown00=lbl_804E0F88;}
};
struct UnknownGenObject802BEB44 : UnknownGenObject802BEB44_0 {
 char unknown3C[156];
 inline ~UnknownGenObject802BEB44(){unknown00=beSvFormatApi_vtable;}
};
extern "C" {
void *beSvFormatApi_vtableRead(){
 UnknownGenObject802BEB44 object;
 object.unknown00=lbl_804E0F88;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=beSvFormatApi_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
