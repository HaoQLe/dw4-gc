#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char beResetNode_vtable[];
}
struct UnknownGenRoot802C09AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C09AC(){igObject_construct(this);}
};
struct UnknownGenObject802C09AC_0 : UnknownGenRoot802C09AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C09AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C09AC_1 : UnknownGenObject802C09AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802C09AC_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject802C09AC_2 : UnknownGenObject802C09AC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802C09AC_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject802C09AC : UnknownGenObject802C09AC_2 {
 char unknown20[8];
 inline ~UnknownGenObject802C09AC(){unknown00=beResetNode_vtable;}
};
extern "C" {
void *beResetNode_vtableRead(){
 UnknownGenObject802C09AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=beResetNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
