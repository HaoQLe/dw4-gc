#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _edge_fieldInit();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igHeapable_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char _edgeList_className[];
extern char _edge_dependencies[];
extern char _edge_vtable[];
extern char igHeapable_vtable[];
extern char _edgeList_vtable[];
extern char lbl_804B823C[];
extern char _edgeList_dependencies[8];
extern char lbl_805603DC[6];
extern void *lbl_805621F4;
extern void *_edgeList_meta;
extern void *_edge_meta;
extern void *igHeapable_meta;
void *_edgeList_getMeta();
void *_edgeList_vtableRead();
void _edgeList_arkRegister();
void _edgeList_register();
void *_edgeList_getMetaCall();
void *_edge_getMeta();
void *_edge_vtableRead();
void _edge_arkRegister();
void _edge_register();
void *_edge_getMetaCall();
void *_edge_parentMeta();
}
struct UnknownGenObject801B7BF8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B7D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7D58(){igObject_construct(this);}
};
struct UnknownGenObject801B7D58 : UnknownGenRoot801B7D58 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801B7D58(){unknown00=_edge_vtable;}
};
extern "C" {
void *_edge_parentMeta(){return igHeapable_meta;}
}
#pragma pop
