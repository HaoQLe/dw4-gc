#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igInfo_register();
void igMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igMetaFieldInfo_className[];
extern char igMetaFieldInfo_vtable[];
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern void *igMetaFieldInfo_meta;
extern void *lbl_805617B8;
extern void *igMetaField_meta;
extern void *lbl_805621F4;
void *igMetaFieldInfo_getMeta();
void *igMetaFieldInfo_vtableRead();
void igMetaFieldInfo_arkRegister();
void igMetaFieldInfo_register();
void *igMetaFieldInfo_getMetaCall();
void igMetaField_arkRegister();
}
struct UnknownGenRoot8002A494 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A494(){igObject_construct(this);}
};
struct UnknownGenObject8002A494_0 : UnknownGenRoot8002A494 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002A494_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002A494_1 : UnknownGenObject8002A494_0 {
 inline ~UnknownGenObject8002A494_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8002A494 : UnknownGenObject8002A494_1 {
 char unknown0C[20];
 inline ~UnknownGenObject8002A494(){unknown00=igMetaFieldInfo_vtable;}
};
extern "C" {
void *fn_8002A5EC(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_805617B8) lbl_805617B8=fn_800635C8(data+0x1674,data+0x1654,data+0x1664,0x4);
 return lbl_805617B8;
}
void *fn_8002A638(){
 if(!igMetaField_meta) igMetaField_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMetaField_meta;
}
}
#pragma pop
