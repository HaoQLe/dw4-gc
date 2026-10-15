#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80053650(void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801ABB34();
void *fn_801C1E2C();
void igEnbayaContextPool_fieldInit();
void *igGamecubeEnvironmentMapShader_getMeta();
void igObject_register();
void igTransformSource_register();
extern char igEnbayaTransformSource_className[];
extern char igEnbayaContextPool_dependencies[];
extern char igEnbayaContextPool_className[];
extern char igEnbayaTransformSource_vtable[];
extern char igEnbayaContextPool_vtable[];
extern char lbl_804BA150[];
extern char igEnbayaTransformSource_dependencies[8];
extern char igEnbayaTransformSource_fieldTypes[8];
extern char igEnbayaTransformSource_fieldNames[8];
extern char igEnbayaTransformSource_fieldStorage[8];
extern char igEnbayaTransformSource_fieldOffsets[8];
extern void *igEnbayaTransformSource_meta;
extern void *igEnbayaContextPool_meta;
void *igEnbayaTransformSource_getMeta();
void *igEnbayaTransformSource_vtableRead();
void igEnbayaTransformSource_arkRegister();
void igEnbayaTransformSource_register();
void *igEnbayaTransformSource_getMetaCall();
void igEnbayaTransformSource_fieldInit();
void *igEnbayaContextPool_getMeta();
void *igEnbayaContextPool_vtableRead();
void igEnbayaContextPool_arkRegister();
void igEnbayaContextPool_register();
void *igEnbayaContextPool_getMetaCall();
}
struct UnknownGenRoot801C15B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C15B8(){igObject_construct(this);}
};
struct UnknownGenObject801C15B8 : UnknownGenRoot801C15B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801C15B8(){unknown00=igEnbayaTransformSource_vtable;}
};
struct UnknownGenRoot801C1810 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1810(){igObject_construct(this);}
};
struct UnknownGenObject801C1810 : UnknownGenRoot801C1810 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801C1810(){unknown00=igEnbayaContextPool_vtable;}
};
extern "C" {
void *igGamecubeEnvironmentMapShader_getMetaCall(){return igGamecubeEnvironmentMapShader_getMeta();}
void *igEnbayaTransformSource_create(void *object){
 igEnbayaTransformSource_arkRegister();
 return meta_createInstance(igEnbayaTransformSource_meta,object);
}
void *igEnbayaTransformSource_getMeta(){
 if(!igEnbayaTransformSource_meta || !(reinterpret_cast<unsigned int *>(igEnbayaTransformSource_meta)[0x24/4]&4)) igEnbayaTransformSource_arkRegister();
 return igEnbayaTransformSource_meta;
}
void *igEnbayaTransformSource_vtableRead(){
 UnknownGenObject801C15B8 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=igEnbayaTransformSource_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEnbayaTransformSource_arkRegister(){
 meta_registerNow((int)igEnbayaTransformSource_register);
}
void igEnbayaTransformSource_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEnbayaTransformSource_meta,(int)igTransformSource_register,(int)fn_801ABB34,(int)igEnbayaTransformSource_getMetaCall,(int)igEnbayaTransformSource_className,16,(int)igEnbayaTransformSource_vtableRead,(int)igEnbayaTransformSource_fieldInit,0,(int)igEnbayaTransformSource_dependencies);
}
void *igEnbayaTransformSource_getMetaCall(){return igEnbayaTransformSource_getMeta();}
void igEnbayaTransformSource_fieldInit(){
 void *value0=igEnbayaTransformSource_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igEnbayaTransformSource_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801C1E2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 meta_setupFields(value0,igEnbayaTransformSource_fieldNames,igEnbayaTransformSource_fieldStorage,igEnbayaTransformSource_fieldOffsets,value1);
}
void *igEnbayaContextPool_create(void *object){
 igEnbayaContextPool_arkRegister();
 return meta_createInstance(igEnbayaContextPool_meta,object);
}
void *igEnbayaContextPool_getMeta(){
 if(!igEnbayaContextPool_meta || !(reinterpret_cast<unsigned int *>(igEnbayaContextPool_meta)[0x24/4]&4)) igEnbayaContextPool_arkRegister();
 return igEnbayaContextPool_meta;
}
void *igEnbayaContextPool_vtableRead(){
 UnknownGenObject801C1810 object;
 object.unknown00=igEnbayaContextPool_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEnbayaContextPool_arkRegister(){
 meta_registerNow((int)igEnbayaContextPool_register);
}
void igEnbayaContextPool_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEnbayaContextPool_meta,(int)igObject_register,(int)fn_800237D0,(int)igEnbayaContextPool_getMetaCall,(int)igEnbayaContextPool_className,20,(int)igEnbayaContextPool_vtableRead,(int)igEnbayaContextPool_fieldInit,0,(int)igEnbayaContextPool_dependencies);
}
void *igEnbayaContextPool_getMetaCall(){return igEnbayaContextPool_getMeta();}
}
#pragma pop
