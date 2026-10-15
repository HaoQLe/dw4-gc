#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011F520();
void fn_8028C93C();
void igObject_register();
extern char igBoundingSphereMaker_className[];
extern char igBoundingSphereMaker_vtable[];
extern char lbl_805613C8[8];
extern char lbl_805613D0[4];
extern char lbl_805613DC[4];
extern char lbl_805613E0[4];
extern char lbl_805613E4[4];
extern void *igBoundingSphereMaker_meta;
void *igBoundingSphereMaker_getMeta();
void *igBoundingSphereMaker_vtableRead();
void igBoundingSphereMaker_registerNow();
void igBoundingSphereMaker_register();
void *igBoundingSphereMaker_getMetaCall();
void igBoundingSphereMaker_fieldInit();
}
struct UnknownGenRoot8028E17C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028E17C(){fn_8006665C(this);}
};
struct UnknownGenObject8028E17C : UnknownGenRoot8028E17C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8028E17C(){unknown00=igBoundingSphereMaker_vtable;}
};
extern "C" {
void *igBoundingSphereMaker_create(void *object){
 igBoundingSphereMaker_registerNow();
 return meta_createInstance(igBoundingSphereMaker_meta,object);
}
void *igBoundingSphereMaker_getMeta(){
 if(!igBoundingSphereMaker_meta || !(reinterpret_cast<unsigned int *>(igBoundingSphereMaker_meta)[0x24/4]&4)) igBoundingSphereMaker_registerNow();
 return igBoundingSphereMaker_meta;
}
void *igBoundingSphereMaker_vtableRead(){
 UnknownGenObject8028E17C object;
 object.unknown00=igBoundingSphereMaker_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoundingSphereMaker_registerNow(){
 meta_registerNow((int)igBoundingSphereMaker_register);
}
void igBoundingSphereMaker_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igBoundingSphereMaker_meta,(int)igObject_register,(int)fn_800237D0,(int)igBoundingSphereMaker_getMetaCall,(int)igBoundingSphereMaker_className,12,(int)igBoundingSphereMaker_vtableRead,(int)igBoundingSphereMaker_fieldInit,0,(int)lbl_805613C8);
}
void *igBoundingSphereMaker_getMetaCall(){return igBoundingSphereMaker_getMeta();}
void igBoundingSphereMaker_fieldInit(){
 void *value0=igBoundingSphereMaker_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805613D0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8011F520();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_805613DC,lbl_805613E0,lbl_805613E4,value1);
}
}
#pragma pop
