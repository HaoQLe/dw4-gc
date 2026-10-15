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
void fn_8006665C(void *);
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
void igMetaFieldInfo_registerNow();
void igMetaFieldInfo_register();
void *igMetaFieldInfo_getMetaCall();
void igMetaField_registerNow();
}
struct UnknownGenRoot8002A494 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A494(){fn_8006665C(this);}
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
void *igMetaFieldInfo_create(void *object){
 igMetaFieldInfo_registerNow();
 return meta_createInstance(igMetaFieldInfo_meta,object);
}
void *igMetaFieldInfo_getMeta(){
 if(!igMetaFieldInfo_meta || !(reinterpret_cast<unsigned int *>(igMetaFieldInfo_meta)[0x24/4]&4)) igMetaFieldInfo_registerNow();
 return igMetaFieldInfo_meta;
}
void *igMetaFieldInfo_vtableRead(){
 UnknownGenObject8002A494 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igMetaFieldInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMetaFieldInfo_registerNow(){
 meta_registerNow((int)igMetaFieldInfo_register);
}
void igMetaFieldInfo_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMetaFieldInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igMetaFieldInfo_getMetaCall,(int)igMetaFieldInfo_className,20,(int)igMetaFieldInfo_vtableRead,0,0,0);
}
void *igMetaFieldInfo_getMetaCall(){return igMetaFieldInfo_getMeta();}
void *fn_8002A5EC(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_805617B8) lbl_805617B8=fn_800635C8(data+0x1674,data+0x1654,data+0x1664,0x4);
 return lbl_805617B8;
}
void *fn_8002A638(){
 if(!igMetaField_meta) igMetaField_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMetaField_meta;
}
void *igMetaField_getMeta(){
 if(!igMetaField_meta || !(reinterpret_cast<unsigned int *>(igMetaField_meta)[0x24/4]&4)) igMetaField_registerNow();
 return igMetaField_meta;
}
void igMetaField_registerNow(){
 meta_registerNow((int)igMetaField_register);
}
}
#pragma pop
