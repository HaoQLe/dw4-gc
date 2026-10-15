#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char beGroupKeep_vtable[];
}
struct UnknownGenRoot802D672C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D672C(){fn_8006665C(this);}
};
struct UnknownGenObject802D672C_0 : UnknownGenRoot802D672C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D672C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D672C_1 : UnknownGenObject802D672C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802D672C_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject802D672C_2 : UnknownGenObject802D672C_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802D672C_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject802D672C : UnknownGenObject802D672C_2 {
 char unknown20[8];
 inline ~UnknownGenObject802D672C(){unknown00=beGroupKeep_vtable;}
};
extern "C" {
void *beGroupKeep_vtableRead(){
 UnknownGenObject802D672C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=beGroupKeep_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
