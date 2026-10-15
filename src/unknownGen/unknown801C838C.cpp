#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CB530();
void fn_801AA6DC();
void *fn_801D3BDC();
void fn_801D3C28(int);
void igAttrStack_fieldInit();
void igNonRefCountedObjectStack_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedObjectStack_vtable[];
extern char lbl_80480B58[];
extern char igAttrStackList_className[];
extern char igAttrStack_dependencies[];
extern char igAttrStack_className[];
extern char igAttrStack_vtable[];
extern char lbl_804B6A70[];
extern char igAttrStackList_vtable[];
extern char lbl_804B6B34[];
extern char igAttrStackList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAttrStackList_meta;
extern void *igAttrStack_meta;
void *igAttrStackList_getMeta();
void *igAttrStackList_vtableRead();
void igAttrStackList_arkRegister();
void igAttrStackList_register();
void *igAttrStackList_getMetaCall();
void *igAttrStack_getMeta();
void *igAttrStack_vtableRead();
void igAttrStack_arkRegister();
void igAttrStack_register();
void *igAttrStack_getMetaCall();
}
struct UnknownGenObject801C844C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C85E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C85E4(){igObject_construct(this);}
};
struct UnknownGenObject801C85E4 : UnknownGenRoot801C85E4 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[40];
 inline ~UnknownGenObject801C85E4(){unknown00=igAttrStack_vtable;}
};
extern "C" {
void fn_801C838C(){
 fn_80065DBC((int)fn_801D3C28);
}
void *fn_801C83B4(){return fn_801D3BDC();}
void *fn_801C83D4(){
 if(!igAttrStackList_meta) igAttrStackList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrStackList_meta;
}
}
#pragma pop
