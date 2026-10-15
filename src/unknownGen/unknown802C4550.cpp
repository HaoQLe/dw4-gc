#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char beNodeAnim_vtable[];
}
struct UnknownGenRoot802C4550 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4550(){igObject_construct(this);}
};
struct UnknownGenObject802C4550_0 : UnknownGenRoot802C4550 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4550_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C4550_1 : UnknownGenObject802C4550_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802C4550_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject802C4550_2 : UnknownGenObject802C4550_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802C4550_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject802C4550 : UnknownGenObject802C4550_2 {
 char unknown20[88];
 inline ~UnknownGenObject802C4550(){unknown00=beNodeAnim_vtable;}
};
extern "C" {
void *beNodeAnim_vtableRead(){
 UnknownGenObject802C4550 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=beNodeAnim_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
