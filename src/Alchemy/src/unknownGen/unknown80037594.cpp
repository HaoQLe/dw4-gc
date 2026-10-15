#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023FDC();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igContext_fieldInit();
void igNonRefCountedObjectList_register();
void igObject_register();
extern char igContextExt_className[];
extern char igContextList_className[];
extern char igContext_dependencies[];
extern char igContext_className[];
extern char igDataList_vtable[];
extern char igContextList_vtable[];
extern char lbl_80474170[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igContextList_dependencies[8];
extern void *igContextExt_meta;
extern void *igContextList_meta;
extern void *igContext_meta;
void *igContextExt_getMeta();
void igContextExt_arkRegister();
void igContextExt_register();
void *igContextExt_getMetaCall();
void *fn_80037594();
void *igContextList_getMeta();
void *igContextList_vtableRead();
void igContextList_arkRegister();
void igContextList_register();
void *igContextList_getMetaCall();
void *igContext_getMeta();
void igContext_arkRegister();
void igContext_register();
void *igContext_getMetaCall();
}
struct UnknownGenObject80037610_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80037594(){return igContext_meta;}
}
#pragma pop
