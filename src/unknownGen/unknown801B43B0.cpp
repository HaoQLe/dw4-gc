#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igObjectList_register();
void igObject_register();
void igProjectiveTextureProcessor_fieldInit();
void igShaderProcessor_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igPropertyValue_className[];
extern char igPropertyKey_className[];
extern char igPropertyList_className[];
extern char igProperty_dependencies[];
extern char igProperty_className[];
extern char igProjectiveTextureProcessor_dependencies[];
extern char igProjectiveTextureProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igProjectiveTextureProcessor_vtable[];
extern char igProperty_vtable[];
extern char igPropertyList_vtable[];
extern char lbl_804B8718[];
extern char igPropertyList_dependencies[8];
extern char igProperty_fieldTypes[8];
extern char igProperty_fieldNames[8];
extern char igProperty_fieldStorage[8];
extern char igProperty_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igPropertyValue_meta;
extern void *igPropertyKey_meta;
extern void *igPropertyList_meta;
extern void *igProperty_meta;
extern void *igProjectiveTextureProcessor_meta;
void *fn_801B43B0();
void *igPropertyValue_getMeta();
void igPropertyValue_arkRegister();
void igPropertyValue_register();
void *igPropertyValue_getMetaCall();
void *fn_801B44D4();
void *igPropertyKey_getMeta();
void igPropertyKey_arkRegister();
void igPropertyKey_register();
void *igPropertyKey_getMetaCall();
void *igPropertyList_getMeta();
void *igPropertyList_vtableRead();
void igPropertyList_arkRegister();
void igPropertyList_register();
void *igPropertyList_getMetaCall();
void *igProperty_getMeta();
void *igProperty_vtableRead();
void igProperty_arkRegister();
void igProperty_register();
void *igProperty_getMetaCall();
void igProperty_fieldInit();
void *igProjectiveTextureProcessor_getMeta();
void *igProjectiveTextureProcessor_vtableRead();
void igProjectiveTextureProcessor_arkRegister();
void igProjectiveTextureProcessor_register();
void *igProjectiveTextureProcessor_getMetaCall();
}
struct UnknownGenObject801B4670_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B4844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4844(){igObject_construct(this);}
};
struct UnknownGenObject801B4844 : UnknownGenRoot801B4844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801B4844(){unknown00=igProperty_vtable;}
};
struct UnknownGenRoot801B4AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4AA0(){igObject_construct(this);}
};
struct UnknownGenObject801B4AA0 : UnknownGenRoot801B4AA0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[52];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject801B4AA0(){unknown00=igProjectiveTextureProcessor_vtable;}
};
extern "C" {
void *fn_801B43B0(){
 if(!igPropertyValue_meta) igPropertyValue_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPropertyValue_meta;
}
void *igPropertyValue_getMeta(){
 if(!igPropertyValue_meta || !(reinterpret_cast<unsigned int *>(igPropertyValue_meta)[0x24/4]&4)) igPropertyValue_arkRegister();
 return igPropertyValue_meta;
}
void igPropertyValue_arkRegister(){
 meta_registerNow((int)igPropertyValue_register);
}
void igPropertyValue_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igPropertyValue_meta,(int)igObject_register,(int)fn_800237D0,(int)igPropertyValue_getMetaCall,(int)igPropertyValue_className,8,0,0,0,0);
}
void *igPropertyValue_getMetaCall(){return igPropertyValue_getMeta();}
void *fn_801B44D4(){
 if(!igPropertyKey_meta) igPropertyKey_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPropertyKey_meta;
}
void *igPropertyKey_getMeta(){
 if(!igPropertyKey_meta || !(reinterpret_cast<unsigned int *>(igPropertyKey_meta)[0x24/4]&4)) igPropertyKey_arkRegister();
 return igPropertyKey_meta;
}
void igPropertyKey_arkRegister(){
 meta_registerNow((int)igPropertyKey_register);
}
void igPropertyKey_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igPropertyKey_meta,(int)igObject_register,(int)fn_800237D0,(int)igPropertyKey_getMetaCall,(int)igPropertyKey_className,8,0,0,0,0);
}
void *igPropertyKey_getMetaCall(){return igPropertyKey_getMeta();}
void *fn_801B45F8(){
 if(!igPropertyList_meta) igPropertyList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPropertyList_meta;
}
void *igPropertyList_getMeta(){
 if(!igPropertyList_meta || !(reinterpret_cast<unsigned int *>(igPropertyList_meta)[0x24/4]&4)) igPropertyList_arkRegister();
 return igPropertyList_meta;
}
void *igPropertyList_vtableRead(){
 UnknownGenObject801B4670_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B8718;
 object.unknown00=igPropertyList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPropertyList_arkRegister(){
 meta_registerNow((int)igPropertyList_register);
}
void igPropertyList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igPropertyList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igPropertyList_getMetaCall,(int)igPropertyList_className,20,(int)igPropertyList_vtableRead,0,0,(int)igPropertyList_dependencies);
}
void *igPropertyList_getMetaCall(){return igPropertyList_getMeta();}
void *igProperty_create(void *object){
 igProperty_arkRegister();
 return meta_createInstance(igProperty_meta,object);
}
void *fn_801B47CC(){
 if(!igProperty_meta) igProperty_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProperty_meta;
}
void *igProperty_getMeta(){
 if(!igProperty_meta || !(reinterpret_cast<unsigned int *>(igProperty_meta)[0x24/4]&4)) igProperty_arkRegister();
 return igProperty_meta;
}
void *igProperty_vtableRead(){
 UnknownGenObject801B4844 object;
 object.unknown00=igProperty_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igProperty_arkRegister(){
 meta_registerNow((int)igProperty_register);
}
void igProperty_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igProperty_meta,(int)igObject_register,(int)fn_800237D0,(int)igProperty_getMetaCall,(int)igProperty_className,16,(int)igProperty_vtableRead,(int)igProperty_fieldInit,0,(int)igProperty_dependencies);
}
void *igProperty_getMetaCall(){return igProperty_getMeta();}
void igProperty_fieldInit(){
 void *value0=igProperty_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igProperty_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B44D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801B43B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,igProperty_fieldNames,igProperty_fieldStorage,igProperty_fieldOffsets,value1);
}
void *igProjectiveTextureProcessor_getMeta(){
 if(!igProjectiveTextureProcessor_meta || !(reinterpret_cast<unsigned int *>(igProjectiveTextureProcessor_meta)[0x24/4]&4)) igProjectiveTextureProcessor_arkRegister();
 return igProjectiveTextureProcessor_meta;
}
void *igProjectiveTextureProcessor_vtableRead(){
 UnknownGenObject801B4AA0 object;
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igProjectiveTextureProcessor_vtable;
 object.unknown08.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igProjectiveTextureProcessor_arkRegister(){
 meta_registerNow((int)igProjectiveTextureProcessor_register);
}
void igProjectiveTextureProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igProjectiveTextureProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igProjectiveTextureProcessor_getMetaCall,(int)igProjectiveTextureProcessor_className,72,(int)igProjectiveTextureProcessor_vtableRead,(int)igProjectiveTextureProcessor_fieldInit,0,(int)igProjectiveTextureProcessor_dependencies);
}
void *igProjectiveTextureProcessor_getMetaCall(){return igProjectiveTextureProcessor_getMeta();}
}
#pragma pop
