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
void fn_8006665C(void *);
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
extern char lbl_804ADE50[];
extern char igNode_vtable[];
extern char igNodeList_vtable[];
extern char lbl_804B8304[];
extern char igNodeListList_vtable[];
extern char igNonRefCountedNodeList_vtable[];
extern char lbl_804B8430[];
extern char igIntersectPathList_vtable[];
extern char lbl_804B84F8[];
extern char lbl_80560394[8];
extern char lbl_8056039C[8];
extern char lbl_805603A4[8];
extern char lbl_805603AC[8];
extern char lbl_805603BC[7];
extern void *lbl_805621F4;
extern void *igIntersectPathList_meta;
extern void *igNonRefCountedNodeList_meta;
extern void *igNodeListList_meta;
extern void *igNodeList_meta;
extern void *igNode_meta;
void *igIntersectPathList_getMeta();
void *igIntersectPathList_vtableRead();
void igIntersectPathList_registerNow();
void igIntersectPathList_register();
void *igIntersectPathList_getMetaCall();
void *igNonRefCountedNodeList_getMeta();
void *igNonRefCountedNodeList_vtableRead();
void igNonRefCountedNodeList_registerNow();
void igNonRefCountedNodeList_register();
void *igNonRefCountedNodeList_getMetaCall();
void *igNodeListList_getMeta();
void *igNodeListList_vtableRead();
void igNodeListList_registerNow();
void igNodeListList_register();
void *igNodeListList_getMetaCall();
void *igNodeList_getMeta();
void *igNodeList_vtableRead();
void igNodeList_registerNow();
void igNodeList_register();
void *igNodeList_getMetaCall();
void *igNode_getMeta();
void *igNode_vtableRead();
void igNode_registerNow();
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
 inline UnknownGenRoot801B7568(){fn_8006665C(this);}
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
void *igIntersectPathList_getMeta(){
 if(!igIntersectPathList_meta || !(reinterpret_cast<unsigned int *>(igIntersectPathList_meta)[0x24/4]&4)) igIntersectPathList_registerNow();
 return igIntersectPathList_meta;
}
void *igIntersectPathList_vtableRead(){
 UnknownGenObject801B6E50_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B84F8;
 object.unknown00=igIntersectPathList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIntersectPathList_registerNow(){
 meta_registerNow((int)igIntersectPathList_register);
}
void igIntersectPathList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igIntersectPathList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igIntersectPathList_getMetaCall,(int)igIntersectPathList_className,20,(int)igIntersectPathList_vtableRead,0,0,(int)lbl_80560394);
}
void *igIntersectPathList_getMetaCall(){return igIntersectPathList_getMeta();}
void *igNonRefCountedNodeList_create(void *object){
 igNonRefCountedNodeList_registerNow();
 return meta_createInstance(igNonRefCountedNodeList_meta,object);
}
void *fn_801B6FAC(){
 if(!igNonRefCountedNodeList_meta) igNonRefCountedNodeList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedNodeList_meta;
}
void *igNonRefCountedNodeList_getMeta(){
 if(!igNonRefCountedNodeList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedNodeList_meta)[0x24/4]&4)) igNonRefCountedNodeList_registerNow();
 return igNonRefCountedNodeList_meta;
}
void *igNonRefCountedNodeList_vtableRead(){
 UnknownGenObject801B7024_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804B8430;
 object.unknown00=igNonRefCountedNodeList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedNodeList_registerNow(){
 meta_registerNow((int)igNonRefCountedNodeList_register);
}
void igNonRefCountedNodeList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNonRefCountedNodeList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedNodeList_getMetaCall,(int)igNonRefCountedNodeList_className,20,(int)igNonRefCountedNodeList_vtableRead,0,0,(int)lbl_8056039C);
}
void *igNonRefCountedNodeList_getMetaCall(){return igNonRefCountedNodeList_getMeta();}
void *igNodeListList_create(void *object){
 igNodeListList_registerNow();
 return meta_createInstance(igNodeListList_meta,object);
}
void *fn_801B7180(){
 if(!igNodeListList_meta) igNodeListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNodeListList_meta;
}
void *igNodeListList_getMeta(){
 if(!igNodeListList_meta || !(reinterpret_cast<unsigned int *>(igNodeListList_meta)[0x24/4]&4)) igNodeListList_registerNow();
 return igNodeListList_meta;
}
void *igNodeListList_vtableRead(){
 UnknownGenObject801B71F8_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B84F8;
 object.unknown00=igNodeListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNodeListList_registerNow(){
 meta_registerNow((int)igNodeListList_register);
}
void igNodeListList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNodeListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igNodeListList_getMetaCall,(int)igNodeListList_className,20,(int)igNodeListList_vtableRead,0,0,(int)lbl_805603A4);
}
void *igNodeListList_getMetaCall(){return igNodeListList_getMeta();}
void *igNodeList_create(void *object){
 igNodeList_registerNow();
 return meta_createInstance(igNodeList_meta,object);
}
void *fn_801B7354(){
 if(!igNodeList_meta) igNodeList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNodeList_meta;
}
void *igNodeList_getMeta(){
 if(!igNodeList_meta || !(reinterpret_cast<unsigned int *>(igNodeList_meta)[0x24/4]&4)) igNodeList_registerNow();
 return igNodeList_meta;
}
void *igNodeList_vtableRead(){
 UnknownGenObject801B73CC_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B8304;
 object.unknown00=igNodeList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNodeList_registerNow(){
 meta_registerNow((int)igNodeList_register);
}
void igNodeList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNodeList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igNodeList_getMetaCall,(int)igNodeList_className,20,(int)igNodeList_vtableRead,0,0,(int)lbl_805603AC);
}
void *igNodeList_getMetaCall(){return igNodeList_getMeta();}
void *fn_801B74F0(){
 if(!igNode_meta) igNode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNode_meta;
}
void *igNode_getMeta(){
 if(!igNode_meta || !(reinterpret_cast<unsigned int *>(igNode_meta)[0x24/4]&4)) igNode_registerNow();
 return igNode_meta;
}
void *igNode_vtableRead(){
 UnknownGenObject801B7568 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNode_registerNow(){
 meta_registerNow((int)igNode_register);
}
void igNode_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNode_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igNode_getMetaCall,(int)lbl_805603BC,28,(int)igNode_vtableRead,(int)igNode_fieldInit,0,(int)lbl_804ADE50);
}
void *igNode_getMetaCall(){return igNode_getMeta();}
}
#pragma pop
