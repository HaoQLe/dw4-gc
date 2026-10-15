#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *igFilterMessageDispatcher_getMetaCall();
void igMessageDefaultReceiver_fieldInit();
void igMessageReceiver_register();
void igObject_register();
extern char igMessageDispatcher_className[];
extern char igMessageDefaultReceiver_className[];
extern char igMessageDefaultReceiver_dependencies[];
extern char lbl_804CB6C8[];
extern char igMessageDefaultReceiver_vtable[];
extern void *igMessageReceiver_meta;
extern void *igMessageDispatcher_meta;
extern void *igMessageDefaultReceiver_meta;
extern void *lbl_805621F4;
void *igMessageDispatcher_getMeta();
void igMessageDispatcher_arkRegister();
void igMessageDispatcher_register();
void *igMessageDispatcher_getMetaCall();
void *fn_8028579C();
void *igMessageDefaultReceiver_getMeta();
void *igMessageDefaultReceiver_vtableRead();
void igMessageDefaultReceiver_arkRegister();
void igMessageDefaultReceiver_register();
void *igMessageDefaultReceiver_getMetaCall();
void *igMessageDefaultReceiver_parentMeta();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){igObject_construct(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=igMessageDefaultReceiver_vtable;}
};
extern "C" {
void *igMessageDefaultReceiver_parentMeta(){return igMessageReceiver_meta;}
}
#pragma pop
