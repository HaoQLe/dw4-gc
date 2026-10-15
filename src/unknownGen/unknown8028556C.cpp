#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igFilterMessageDispatcher_fieldInit();
void igMessageDispatcher_register();
extern char igFilterMessageDispatcher_className[];
extern char igFilterMessageDispatcher_dependencies[];
extern char lbl_804CB728[];
extern char igFilterMessageDispatcher_vtable[];
extern void *igFilterMessageDispatcher_meta;
extern void *igMessageDispatcher_meta;
void *igFilterMessageDispatcher_getMeta();
void *igFilterMessageDispatcher_vtableRead();
void igFilterMessageDispatcher_arkRegister();
void igFilterMessageDispatcher_register();
void *igFilterMessageDispatcher_getMetaCall();
void *igFilterMessageDispatcher_parentMeta();
}
struct UnknownGenRoot802853D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802853D0(){igObject_construct(this);}
};
struct UnknownGenObject802853D0 : UnknownGenRoot802853D0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802853D0(){unknown00=igFilterMessageDispatcher_vtable;}
};
extern "C" {
void *igFilterMessageDispatcher_parentMeta(){return igMessageDispatcher_meta;}
}
#pragma pop
