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
void fn_8028C93C();
void igCollisionCell_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCollisionCellList_className[];
extern char igCollisionCell_dependencies[];
extern char igCollisionCell_className[];
extern char igCollisionCell_vtable[];
extern char igCollisionCellList_vtable[];
extern char lbl_804CCD70[];
extern char igCollisionCellList_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionCellList_meta;
extern void *igCollisionCell_meta;
void *igCollisionCellList_getMeta();
void *igCollisionCellList_vtableRead();
void igCollisionCellList_arkRegister();
void igCollisionCellList_register();
void *igCollisionCellList_getMetaCall();
void *igCollisionCell_getMeta();
void *igCollisionCell_vtableRead();
void igCollisionCell_arkRegister();
void igCollisionCell_register();
void *igCollisionCell_getMetaCall();
}
struct UnknownGenObject8028DD18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028DEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028DEB0(){igObject_construct(this);}
};
struct UnknownGenObject8028DEB0 : UnknownGenRoot8028DEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8028DEB0(){unknown00=igCollisionCell_vtable;}
};
extern "C" {
void *fn_8028DCA0(){
 if(!igCollisionCellList_meta) igCollisionCellList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionCellList_meta;
}
}
#pragma pop
