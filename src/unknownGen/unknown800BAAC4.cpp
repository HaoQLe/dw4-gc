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
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureList_className[];
extern char igGeometryAttrList_className[];
extern char igAttrPool_dependencies[];
extern char igAttrPool_className[];
extern char igAttrPool_vtable[];
extern char igGeometryAttrList_vtable[];
extern char lbl_8047DA24[];
extern char igTextureList_vtable[];
extern char lbl_8047DAEC[];
extern char igTextureList_dependencies[8];
extern char igGeometryAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void igTextureList_arkRegister();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void igGeometryAttrList_arkRegister();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void igAttrPool_arkRegister();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){igObject_construct(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=igAttrPool_vtable;}
};
extern "C" {
void *fn_800BAAC4(){
 if(!igTextureList_meta) igTextureList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureList_meta;
}
}
#pragma pop
