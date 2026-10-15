#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igNamedObject_register();
void igNode_fieldInit();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igIntersectPathList_className[];
extern char igNonRefCountedNodeList_className[];
extern char igNodeListList_className[];
extern char igNodeList_className[];
extern char igNode_dependencies[];
extern char igNode_vtable[];
extern char igNodeList_vtable[];
extern char lbl_804B8304[];
extern char igNodeListList_vtable[];
extern char igNonRefCountedNodeList_vtable[];
extern char lbl_804B8430[];
extern char igIntersectPathList_vtable[];
extern char lbl_804B84F8[];
extern char igIntersectPathList_dependencies[8];
extern char igNonRefCountedNodeList_dependencies[8];
extern char igNodeListList_dependencies[8];
extern char igNodeList_dependencies[8];
extern char lbl_805603BC[7];
extern void *lbl_805621F4;
extern void *igIntersectPathList_meta;
extern void *igNonRefCountedNodeList_meta;
extern void *igNodeListList_meta;
extern void *igNodeList_meta;
extern void *igNode_meta;
void *igIntersectPathList_getMeta();
void *igIntersectPathList_vtableRead();
void igIntersectPathList_arkRegister();
void igIntersectPathList_register();
void *igIntersectPathList_getMetaCall();
void *igNonRefCountedNodeList_getMeta();
void *igNonRefCountedNodeList_vtableRead();
void igNonRefCountedNodeList_arkRegister();
void igNonRefCountedNodeList_register();
void *igNonRefCountedNodeList_getMetaCall();
void *igNodeListList_getMeta();
void *igNodeListList_vtableRead();
void igNodeListList_arkRegister();
void igNodeListList_register();
void *igNodeListList_getMetaCall();
void *igNodeList_getMeta();
void *igNodeList_vtableRead();
void igNodeList_arkRegister();
void igNodeList_register();
void *igNodeList_getMetaCall();
void *igNode_getMeta();
void *igNode_vtableRead();
void igNode_arkRegister();
void igNode_register();
void *igNode_getMetaCall();
}
struct UnknownGenObject801B6E50_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B7024_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B71F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B73CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B7568 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7568(){igObject_construct(this);}
};
struct UnknownGenObject801B7568_0 : UnknownGenRoot801B7568 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B7568_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B7568 : UnknownGenObject801B7568_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801B7568(){unknown00=igNode_vtable;}
};
extern "C" {
void *fn_801B7354(){
 if(!igNodeList_meta) igNodeList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNodeList_meta;
}
}
#pragma pop
