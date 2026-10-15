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
void igObject_register();
void igPluginHelper_fieldInit();
void *igStandardQueue_getMeta();
extern char lbl_80463F30[];
extern char igPluginHelper_className[];
extern char igPluginHelper_vtable[];
extern void *igPluginHelper_meta;
void *igPluginHelper_getMeta();
void *igPluginHelper_vtableRead();
void igPluginHelper_registerNow();
void igPluginHelper_register();
void *igPluginHelper_getMetaCall();
}
struct UnknownGenRoot80027D9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027D9C(){fn_8006665C(this);}
};
struct UnknownGenObject80027D9C : UnknownGenRoot80027D9C {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80027D9C(){unknown00=igPluginHelper_vtable;}
};
extern "C" {
void *igStandardQueue_getMetaCall(){return igStandardQueue_getMeta();}
void *igPluginHelper_create(void *object){
 igPluginHelper_registerNow();
 return meta_createInstance(igPluginHelper_meta,object);
}
void *igPluginHelper_getMeta(){
 if(!igPluginHelper_meta || !(reinterpret_cast<unsigned int *>(igPluginHelper_meta)[0x24/4]&4)) igPluginHelper_registerNow();
 return igPluginHelper_meta;
}
void *igPluginHelper_vtableRead(){
 UnknownGenObject80027D9C object;
 object.unknown00=igPluginHelper_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPluginHelper_registerNow(){
 meta_registerNow((int)igPluginHelper_register);
}
void igPluginHelper_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igPluginHelper_meta,(int)igObject_register,(int)fn_800237D0,(int)igPluginHelper_getMetaCall,(int)igPluginHelper_className,24,(int)igPluginHelper_vtableRead,(int)igPluginHelper_fieldInit,0,(int)lbl_80463F30);
}
void *igPluginHelper_getMetaCall(){return igPluginHelper_getMeta();}
}
#pragma pop
