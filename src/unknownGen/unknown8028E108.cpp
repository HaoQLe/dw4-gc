#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011F520();
void fn_8028C93C();
void igObject_register();
extern char igBoundingSphereMaker_className[];
extern char igBoundingSphereMaker_vtable[];
extern char igBoundingSphereMaker_dependencies[8];
extern char igBoundingSphereMaker_fieldTypes[4];
extern char igBoundingSphereMaker_fieldNames[4];
extern char igBoundingSphereMaker_fieldStorage[4];
extern char igBoundingSphereMaker_fieldOffsets[4];
extern void *igBoundingSphereMaker_meta;
void *igBoundingSphereMaker_getMeta();
void *igBoundingSphereMaker_vtableRead();
void igBoundingSphereMaker_arkRegister();
void igBoundingSphereMaker_register();
void *igBoundingSphereMaker_getMetaCall();
void igBoundingSphereMaker_fieldInit();
}
struct UnknownGenRoot8028E17C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028E17C(){igObject_construct(this);}
};
struct UnknownGenObject8028E17C : UnknownGenRoot8028E17C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8028E17C(){unknown00=igBoundingSphereMaker_vtable;}
};
extern "C" {
void *igBoundingSphereMaker_create(void *object){
 igBoundingSphereMaker_arkRegister();
 return meta_createInstance(igBoundingSphereMaker_meta,object);
}
void *igBoundingSphereMaker_getMeta(){
 if(!igBoundingSphereMaker_meta || !(reinterpret_cast<unsigned int *>(igBoundingSphereMaker_meta)[0x24/4]&4)) igBoundingSphereMaker_arkRegister();
 return igBoundingSphereMaker_meta;
}
void *igBoundingSphereMaker_vtableRead(){
 UnknownGenObject8028E17C object;
 object.unknown00=igBoundingSphereMaker_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoundingSphereMaker_arkRegister(){
 meta_registerNow((int)igBoundingSphereMaker_register);
}
void igBoundingSphereMaker_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igBoundingSphereMaker_meta,(int)igObject_register,(int)fn_800237D0,(int)igBoundingSphereMaker_getMetaCall,(int)igBoundingSphereMaker_className,12,(int)igBoundingSphereMaker_vtableRead,(int)igBoundingSphereMaker_fieldInit,0,(int)igBoundingSphereMaker_dependencies);
}
void *igBoundingSphereMaker_getMetaCall(){return igBoundingSphereMaker_getMeta();}
void igBoundingSphereMaker_fieldInit(){
 void *value0=igBoundingSphereMaker_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igBoundingSphereMaker_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8011F520();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igBoundingSphereMaker_fieldNames,igBoundingSphereMaker_fieldStorage,igBoundingSphereMaker_fieldOffsets,value1);
}
}
#pragma pop
