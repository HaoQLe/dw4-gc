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
void *fn_800BA194();
void *fn_800BB7B8();
void fn_801AA6DC();
void fn_801C3D40(void *,short);
void fn_801C3EF4(void *);
void igCompileTraversal_arkRegister();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendListRecordList_className[];
extern char igBlendListRecord_dependencies[];
extern char igBlendListRecord_className[];
extern char igBlendListRecord_vtable[];
extern char igBlendListRecordList_vtable[];
extern char lbl_804B7184[];
extern char igBlendListRecordList_dependencies[8];
extern char igBlendListRecord_fieldTypes[8];
extern char igBlendListRecord_fieldNames[8];
extern char igBlendListRecord_fieldStorage[8];
extern char igBlendListRecord_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igBlendListRecordList_meta;
extern void *igBlendListRecord_meta;
extern void *igCompileTraversal_meta;
void *igBlendListRecordList_getMeta();
void *igBlendListRecordList_vtableRead();
void igBlendListRecordList_arkRegister();
void igBlendListRecordList_register();
void *igBlendListRecordList_getMetaCall();
void *igBlendListRecord_getMeta();
void *igBlendListRecord_vtableRead();
void igBlendListRecord_arkRegister();
void igBlendListRecord_register();
void *igBlendListRecord_getMetaCall();
void igBlendListRecord_fieldInit();
}
struct UnknownGenObject801C38F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C3A90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C3A90(){igObject_construct(this);}
};
struct UnknownGenObject801C3A90 : UnknownGenRoot801C3A90 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801C3A90(){unknown00=igBlendListRecord_vtable;}
};
struct UnknownGenObject801C3CF8 {
 void *unknown00;
 char unknown04[524];
};
extern "C" {
void *fn_801C3880(){
 if(!igBlendListRecordList_meta) igBlendListRecordList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendListRecordList_meta;
}
void *igBlendListRecordList_getMeta(){
 if(!igBlendListRecordList_meta || !(reinterpret_cast<unsigned int *>(igBlendListRecordList_meta)[0x24/4]&4)) igBlendListRecordList_arkRegister();
 return igBlendListRecordList_meta;
}
void *igBlendListRecordList_vtableRead(){
 UnknownGenObject801C38F8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7184;
 object.unknown00=igBlendListRecordList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendListRecordList_arkRegister(){
 meta_registerNow((int)igBlendListRecordList_register);
}
void igBlendListRecordList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBlendListRecordList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igBlendListRecordList_getMetaCall,(int)igBlendListRecordList_className,20,(int)igBlendListRecordList_vtableRead,0,0,(int)igBlendListRecordList_dependencies);
}
void *igBlendListRecordList_getMetaCall(){return igBlendListRecordList_getMeta();}
void *igBlendListRecord_create(void *object){
 igBlendListRecord_arkRegister();
 return meta_createInstance(igBlendListRecord_meta,object);
}
void *igBlendListRecord_getMeta(){
 if(!igBlendListRecord_meta || !(reinterpret_cast<unsigned int *>(igBlendListRecord_meta)[0x24/4]&4)) igBlendListRecord_arkRegister();
 return igBlendListRecord_meta;
}
void *igBlendListRecord_vtableRead(){
 UnknownGenObject801C3A90 object;
 object.unknown00=igBlendListRecord_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendListRecord_arkRegister(){
 meta_registerNow((int)igBlendListRecord_register);
}
void igBlendListRecord_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBlendListRecord_meta,(int)igObject_register,(int)fn_800237D0,(int)igBlendListRecord_getMetaCall,(int)igBlendListRecord_className,16,(int)igBlendListRecord_vtableRead,(int)igBlendListRecord_fieldInit,0,(int)igBlendListRecord_dependencies);
}
void *igBlendListRecord_getMetaCall(){return igBlendListRecord_getMeta();}
void igBlendListRecord_fieldInit(){
 void *value0=igBlendListRecord_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igBlendListRecord_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800BA194();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB7B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 meta_setupFields(value0,igBlendListRecord_fieldNames,igBlendListRecord_fieldStorage,igBlendListRecord_fieldOffsets,value1);
}
void *igCompileTraversal_create(void *object){
 igCompileTraversal_arkRegister();
 return meta_createInstance(igCompileTraversal_meta,object);
}
void *igCompileTraversal_getMeta(){
 if(!igCompileTraversal_meta || !(reinterpret_cast<unsigned int *>(igCompileTraversal_meta)[0x24/4]&4)) igCompileTraversal_arkRegister();
 return igCompileTraversal_meta;
}
void *fn_801C3CF8(){
 UnknownGenObject801C3CF8 object;
 fn_801C3EF4(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C3D40(&object,-1);
 return result;
}
}
#pragma pop
