#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284F4();
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
void *fn_801B103C();
void igInterpretedShader_arkRegister();
void igShaderProcessor_register();
void igTransientShaderData_register();
extern char igInterpretedShaderProcessor_className[];
extern char igInterpretedShaderData_dependencies[];
extern char igInterpretedShaderData_className[];
extern char igShaderProcessor_vtable[];
extern char igShaderData_vtable[];
extern char igInterpretedShaderProcessor_vtable[];
extern char igInterpretedShaderData_vtable[];
extern char igTransientShaderData_vtable[];
extern char igInterpretedShaderData_fieldTypes[8];
extern char igInterpretedShaderData_fieldNames[8];
extern char igInterpretedShaderData_fieldStorage[8];
extern char igInterpretedShaderData_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTransientShaderData_meta;
extern void *igInterpretedShaderProcessor_meta;
extern void *igInterpretedShaderData_meta;
extern void *igInterpretedShader_meta;
void *igInterpretedShaderProcessor_getMeta();
void *igInterpretedShaderProcessor_vtableRead();
void igInterpretedShaderProcessor_arkRegister();
void igInterpretedShaderProcessor_register();
void *igInterpretedShaderProcessor_getMetaCall();
void *igInterpretedShaderData_getMeta();
void *igInterpretedShaderData_vtableRead();
void igInterpretedShaderData_arkRegister();
void igInterpretedShaderData_register();
void *igInterpretedShaderData_getMetaCall();
void *igInterpretedShaderData_parentMeta();
void igInterpretedShaderData_fieldInit();
}
struct UnknownGenObject801BDF10_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801BE084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BE084(){igObject_construct(this);}
};
struct UnknownGenObject801BE084_0 : UnknownGenRoot801BE084 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801BE084_0(){unknown00=igShaderData_vtable;}
};
struct UnknownGenObject801BE084_1 : UnknownGenObject801BE084_0 {
 inline ~UnknownGenObject801BE084_1(){unknown00=igTransientShaderData_vtable;}
};
struct UnknownGenObject801BE084 : UnknownGenObject801BE084_1 {
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BE084(){unknown00=igInterpretedShaderData_vtable;}
};
extern "C" {
void *igInterpretedShaderProcessor_create(void *object){
 igInterpretedShaderProcessor_arkRegister();
 return meta_createInstance(igInterpretedShaderProcessor_meta,object);
}
void *igInterpretedShaderProcessor_getMeta(){
 if(!igInterpretedShaderProcessor_meta || !(reinterpret_cast<unsigned int *>(igInterpretedShaderProcessor_meta)[0x24/4]&4)) igInterpretedShaderProcessor_arkRegister();
 return igInterpretedShaderProcessor_meta;
}
void *igInterpretedShaderProcessor_vtableRead(){
 UnknownGenObject801BDF10_0 object;
 igObject_construct(&object);
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igInterpretedShaderProcessor_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInterpretedShaderProcessor_arkRegister(){
 meta_registerNow((int)igInterpretedShaderProcessor_register);
}
void igInterpretedShaderProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInterpretedShaderProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igInterpretedShaderProcessor_getMetaCall,(int)igInterpretedShaderProcessor_className,8,(int)igInterpretedShaderProcessor_vtableRead,0,0,0);
}
void *igInterpretedShaderProcessor_getMetaCall(){return igInterpretedShaderProcessor_getMeta();}
void *fn_801BE00C(){
 if(!igInterpretedShaderData_meta) igInterpretedShaderData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInterpretedShaderData_meta;
}
void *igInterpretedShaderData_getMeta(){
 if(!igInterpretedShaderData_meta || !(reinterpret_cast<unsigned int *>(igInterpretedShaderData_meta)[0x24/4]&4)) igInterpretedShaderData_arkRegister();
 return igInterpretedShaderData_meta;
}
void *igInterpretedShaderData_vtableRead(){
 UnknownGenObject801BE084 object;
 object.unknown00=igShaderData_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=igTransientShaderData_vtable;
 object.unknown00=igInterpretedShaderData_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInterpretedShaderData_arkRegister(){
 meta_registerNow((int)igInterpretedShaderData_register);
}
void igInterpretedShaderData_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInterpretedShaderData_meta,(int)igTransientShaderData_register,(int)igInterpretedShaderData_parentMeta,(int)igInterpretedShaderData_getMetaCall,(int)igInterpretedShaderData_className,32,(int)igInterpretedShaderData_vtableRead,(int)igInterpretedShaderData_fieldInit,0,(int)igInterpretedShaderData_dependencies);
}
void *igInterpretedShaderData_getMetaCall(){return igInterpretedShaderData_getMeta();}
void *igInterpretedShaderData_parentMeta(){return igTransientShaderData_meta;}
void igInterpretedShaderData_fieldInit(){
 void *value0=igInterpretedShaderData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igInterpretedShaderData_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B103C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800284F4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,igInterpretedShaderData_fieldNames,igInterpretedShaderData_fieldStorage,igInterpretedShaderData_fieldOffsets,value1);
}
void *igInterpretedShader_getMeta(){
 if(!igInterpretedShader_meta || !(reinterpret_cast<unsigned int *>(igInterpretedShader_meta)[0x24/4]&4)) igInterpretedShader_arkRegister();
 return igInterpretedShader_meta;
}
}
#pragma pop
