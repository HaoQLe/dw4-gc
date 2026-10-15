#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igMetaEnum_fieldInit();
void igObject_register();
extern char lbl_804649A8[];
extern char igMetaEnum_className[];
extern char igMetaEnum_vtable[];
extern void *igMetaEnum_meta;
void *igMetaEnum_getMeta();
void *igMetaEnum_vtableRead();
void igMetaEnum_registerNow();
void igMetaEnum_register();
void *igMetaEnum_getMetaCall();
}
struct UnknownGenRoot8002A9D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A9D4(){fn_8006665C(this);}
};
struct UnknownGenObject8002A9D4 : UnknownGenRoot8002A9D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8002A9D4(){unknown00=igMetaEnum_vtable;}
};
extern "C" {
void *igMetaEnum_create(void *object){
 igMetaEnum_registerNow();
 return meta_createInstance(igMetaEnum_meta,object);
}
void *igMetaEnum_getMeta(){
 if(!igMetaEnum_meta || !(reinterpret_cast<unsigned int *>(igMetaEnum_meta)[0x24/4]&4)) igMetaEnum_registerNow();
 return igMetaEnum_meta;
}
void *igMetaEnum_vtableRead(){
 UnknownGenObject8002A9D4 object;
 object.unknown00=igMetaEnum_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMetaEnum_registerNow(){
 meta_registerNow((int)igMetaEnum_register);
}
void igMetaEnum_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMetaEnum_meta,(int)igObject_register,(int)fn_800237D0,(int)igMetaEnum_getMetaCall,(int)igMetaEnum_className,20,(int)igMetaEnum_vtableRead,(int)igMetaEnum_fieldInit,0,(int)lbl_804649A8);
}
void *igMetaEnum_getMetaCall(){return igMetaEnum_getMeta();}
}
#pragma pop
