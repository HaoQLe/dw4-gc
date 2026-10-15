#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char beMeterCtrlNode_vtable[];
}
struct UnknownGenRoot802CD038 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CD038(){igObject_construct(this);}
};
struct UnknownGenObject802CD038_0 : UnknownGenRoot802CD038 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CD038_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CD038_1 : UnknownGenObject802CD038_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802CD038_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject802CD038_2 : UnknownGenObject802CD038_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802CD038_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject802CD038 : UnknownGenObject802CD038_2 {
 char unknown20[4];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject802CD038(){unknown00=beMeterCtrlNode_vtable;}
};
extern "C" {
void *beMeterCtrlNode_vtableRead(){
 UnknownGenObject802CD038 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=beMeterCtrlNode_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
