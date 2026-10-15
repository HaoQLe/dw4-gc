#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_8006665C(void *);
void igGuiComponentNode_registerNow();
extern char igNamedObject_vtable[];
extern char igGuiComponentNode_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
}
struct UnknownGenRoot80111118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111118(){fn_8006665C(this);}
};
struct UnknownGenObject80111118_0 : UnknownGenRoot80111118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80111118_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80111118_1 : UnknownGenObject80111118_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80111118_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject80111118_2 : UnknownGenObject80111118_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80111118_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject80111118 : UnknownGenObject80111118_2 {
 char unknown20[8];
 inline ~UnknownGenObject80111118(){unknown00=igGuiComponentNode_vtable;}
};
extern "C" {
void *fn_801110A0(){
 if(!igGuiComponentNode_meta) igGuiComponentNode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentNode_meta;
}
void *igGuiComponentNode_getMeta(){
 if(!igGuiComponentNode_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentNode_meta)[0x24/4]&4)) igGuiComponentNode_registerNow();
 return igGuiComponentNode_meta;
}
void *igGuiComponentNode_vtableRead(){
 UnknownGenObject80111118 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igGuiComponentNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
