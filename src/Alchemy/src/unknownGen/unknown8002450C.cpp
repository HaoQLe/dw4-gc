#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
void igStructMetaField_fieldInit();
extern char igStructMetaField_className[];
extern char igStructMetaField_vtable[];
extern char lbl_80471914[];
extern char igStructMetaField_dependencies[8];
extern void *igStructMetaField_meta;
void *igStructMetaField_getMeta();
void *igStructMetaField_vtableRead();
void igStructMetaField_arkRegister();
void igStructMetaField_register();
void *igStructMetaField_getMetaCall();
}
struct UnknownGenRoot80024580 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80024580(){fn_800638E0(this);}
};
struct UnknownGenObject80024580_0 : UnknownGenRoot80024580 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80024580_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80024580 : UnknownGenObject80024580_0 {
 char unknown10[48];
 inline ~UnknownGenObject80024580(){unknown00=igStructMetaField_vtable;}
};
extern "C" {
void *igStructMetaField_create(void *object){
 igStructMetaField_arkRegister();
 return meta_createInstance(igStructMetaField_meta,object);
}
void *igStructMetaField_getMeta(){
 if(!igStructMetaField_meta || !(reinterpret_cast<unsigned int *>(igStructMetaField_meta)[0x24/4]&4)) igStructMetaField_arkRegister();
 return igStructMetaField_meta;
}
void *igStructMetaField_vtableRead(){
 UnknownGenObject80024580 object;
 object.unknown00=igStructMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStructMetaField_arkRegister(){
 meta_registerNow((int)igStructMetaField_register);
}
void igStructMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStructMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igStructMetaField_getMetaCall,(int)igStructMetaField_className,64,(int)igStructMetaField_vtableRead,(int)igStructMetaField_fieldInit,0,(int)igStructMetaField_dependencies);
}
void *igStructMetaField_getMetaCall(){return igStructMetaField_getMeta();}
}
#pragma pop
