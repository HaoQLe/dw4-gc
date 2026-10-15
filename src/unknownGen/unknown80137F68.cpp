#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igCBBox_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCBBoxList_className[];
extern char igCBBox_vtable[];
extern char igCBBoxList_vtable[];
extern char lbl_804AA4F0[];
extern char igCBBoxList_dependencies[8];
extern char lbl_8055F6DC[8];
extern void *lbl_805621F4;
extern void *igCBBoxList_meta;
extern void *igCBBox_meta;
void *igCBBoxList_getMeta();
void *igCBBoxList_vtableRead();
void igCBBoxList_arkRegister();
void igCBBoxList_register();
void *igCBBoxList_getMetaCall();
void *igCBBox_getMeta();
void *igCBBox_vtableRead();
void igCBBox_arkRegister();
void igCBBox_register();
void *igCBBox_getMetaCall();
}
struct UnknownGenObject80137FE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80138178_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80137F68(){
 if(!igCBBoxList_meta) igCBBoxList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCBBoxList_meta;
}
}
#pragma pop
