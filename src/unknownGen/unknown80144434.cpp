#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80029F84();
void *fn_800343B8();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_8013B2B0();
void *fn_8013B680();
void *fn_80143FCC();
void igInterface_register();
void igItemInterface_fieldInit();
void igIterateGraph_register();
void igIterator_register();
void igManager_register();
extern char igIterateField_className[];
extern char igIterateDerived_className[];
extern char igIterateAttr_dependencies[];
extern char igIterateAttr_className[];
extern char igItemManager_className[];
extern char igItemInterface_dependencies[];
extern char igItemInterface_className[];
extern char igItemInterface_vtable[];
extern char lbl_804A6460[];
extern char igItemManager_vtable[];
extern char igIterateAttr_vtable[];
extern char igIterateDerived_vtable[];
extern char igIterateField_vtable[];
extern char igIterateGraph_vtable[];
extern char lbl_804A9C44[];
extern char igInterface_vtable[];
extern char igManager_vtable[];
extern char igIterateField_dependencies[8];
extern char igIterateField_fieldTypes[8];
extern char igIterateField_fieldNames[8];
extern char igIterateField_fieldStorage[8];
extern char igIterateField_fieldOffsets[8];
extern char igIterateDerived_dependencies[8];
extern char igIterateDerived_fieldTypes[8];
extern char igIterateDerived_fieldNames[8];
extern char igIterateDerived_fieldStorage[8];
extern char igIterateDerived_fieldOffsets[8];
extern char igIterateAttr_fieldTypes[8];
extern char igIterateAttr_fieldNames[8];
extern char igIterateAttr_fieldStorage[8];
extern char igIterateAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igIterateGraph_meta;
extern void *igIterateField_meta;
extern void *igIterateDerived_meta;
extern void *igIterateAttr_meta;
extern void *igItemManager_meta;
extern void *igItemInterface_meta;
void *igIterateField_getMeta();
void *igIterateField_vtableRead();
void igIterateField_arkRegister();
void igIterateField_register();
void *igIterateField_getMetaCall();
void igIterateField_fieldInit();
void *igIterateDerived_getMeta();
void *igIterateDerived_vtableRead();
void igIterateDerived_arkRegister();
void igIterateDerived_register();
void *igIterateDerived_getMetaCall();
void igIterateDerived_fieldInit();
void *igIterateAttr_getMeta();
void *igIterateAttr_vtableRead();
void igIterateAttr_arkRegister();
void igIterateAttr_register();
void *igIterateAttr_getMetaCall();
void *igIterateAttr_parentMeta();
void igIterateAttr_fieldInit();
void *igItemManager_getMeta();
void *igItemManager_vtableRead();
void igItemManager_arkRegister();
void igItemManager_register();
void *igItemManager_getMetaCall();
void *igItemInterface_getMeta();
void *igItemInterface_vtableRead();
void igItemInterface_arkRegister();
void igItemInterface_register();
void *igItemInterface_getMetaCall();
}
struct UnknownGenRoot801444A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801444A8(){igObject_construct(this);}
};
struct UnknownGenObject801444A8 : UnknownGenRoot801444A8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801444A8(){unknown00=igIterateField_vtable;}
};
struct UnknownGenRoot801446EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801446EC(){igObject_construct(this);}
};
struct UnknownGenObject801446EC : UnknownGenRoot801446EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801446EC(){unknown00=igIterateDerived_vtable;}
};
struct UnknownGenRoot80144930 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144930(){igObject_construct(this);}
};
struct UnknownGenObject80144930_0 : UnknownGenRoot80144930 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80144930_0(){unknown00=igIterateGraph_vtable;}
};
struct UnknownGenObject80144930 : UnknownGenObject80144930_0 {
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80144930(){unknown00=igIterateAttr_vtable;}
};
struct UnknownGenObject80144C74_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80144DF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144DF4(){igObject_construct(this);}
};
struct UnknownGenObject80144DF4 : UnknownGenRoot80144DF4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80144DF4(){unknown00=igItemInterface_vtable;}
};
extern "C" {
void *igIterateField_create(void *object){
 igIterateField_arkRegister();
 return meta_createInstance(igIterateField_meta,object);
}
void *igIterateField_getMeta(){
 if(!igIterateField_meta || !(reinterpret_cast<unsigned int *>(igIterateField_meta)[0x24/4]&4)) igIterateField_arkRegister();
 return igIterateField_meta;
}
void *igIterateField_vtableRead(){
 UnknownGenObject801444A8 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=igIterateField_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIterateField_arkRegister(){
 meta_registerNow((int)igIterateField_register);
}
void igIterateField_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igIterateField_meta,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateField_getMetaCall,(int)igIterateField_className,16,(int)igIterateField_vtableRead,(int)igIterateField_fieldInit,0,(int)igIterateField_dependencies);
}
void *igIterateField_getMetaCall(){return igIterateField_getMeta();}
void igIterateField_fieldInit(){
 void *value0=igIterateField_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igIterateField_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igIterateField_fieldNames,igIterateField_fieldStorage,igIterateField_fieldOffsets,value1);
}
void *igIterateDerived_create(void *object){
 igIterateDerived_arkRegister();
 return meta_createInstance(igIterateDerived_meta,object);
}
void *igIterateDerived_getMeta(){
 if(!igIterateDerived_meta || !(reinterpret_cast<unsigned int *>(igIterateDerived_meta)[0x24/4]&4)) igIterateDerived_arkRegister();
 return igIterateDerived_meta;
}
void *igIterateDerived_vtableRead(){
 UnknownGenObject801446EC object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=igIterateDerived_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIterateDerived_arkRegister(){
 meta_registerNow((int)igIterateDerived_register);
}
void igIterateDerived_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igIterateDerived_meta,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateDerived_getMetaCall,(int)igIterateDerived_className,16,(int)igIterateDerived_vtableRead,(int)igIterateDerived_fieldInit,0,(int)igIterateDerived_dependencies);
}
void *igIterateDerived_getMetaCall(){return igIterateDerived_getMeta();}
void igIterateDerived_fieldInit(){
 void *value0=igIterateDerived_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igIterateDerived_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igIterateDerived_fieldNames,igIterateDerived_fieldStorage,igIterateDerived_fieldOffsets,value1);
}
void *igIterateAttr_create(void *object){
 igIterateAttr_arkRegister();
 return meta_createInstance(igIterateAttr_meta,object);
}
void *igIterateAttr_getMeta(){
 if(!igIterateAttr_meta || !(reinterpret_cast<unsigned int *>(igIterateAttr_meta)[0x24/4]&4)) igIterateAttr_arkRegister();
 return igIterateAttr_meta;
}
void *igIterateAttr_vtableRead(){
 UnknownGenObject80144930 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=igIterateGraph_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igIterateAttr_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIterateAttr_arkRegister(){
 meta_registerNow((int)igIterateAttr_register);
}
void igIterateAttr_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igIterateAttr_meta,(int)igIterateGraph_register,(int)igIterateAttr_parentMeta,(int)igIterateAttr_getMetaCall,(int)igIterateAttr_className,28,(int)igIterateAttr_vtableRead,(int)igIterateAttr_fieldInit,0,(int)igIterateAttr_dependencies);
}
void *igIterateAttr_getMetaCall(){return igIterateAttr_getMeta();}
void *igIterateAttr_parentMeta(){return igIterateGraph_meta;}
void igIterateAttr_fieldInit(){
 void *value0=igIterateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igIterateAttr_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800343B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,igIterateAttr_fieldNames,igIterateAttr_fieldStorage,igIterateAttr_fieldOffsets,value1);
}
void *fn_80144BFC(){
 if(!igItemManager_meta) igItemManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igItemManager_meta;
}
void *igItemManager_getMeta(){
 if(!igItemManager_meta || !(reinterpret_cast<unsigned int *>(igItemManager_meta)[0x24/4]&4)) igItemManager_arkRegister();
 return igItemManager_meta;
}
void *igItemManager_vtableRead(){
 UnknownGenObject80144C74_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igManager_vtable;
 object.unknown00=igItemManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemManager_arkRegister(){
 meta_registerNow((int)igItemManager_register);
}
void igItemManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemManager_meta,(int)igManager_register,(int)fn_8013B2B0,(int)igItemManager_getMetaCall,(int)igItemManager_className,32,(int)igItemManager_vtableRead,0,0,0);
}
void *igItemManager_getMetaCall(){return igItemManager_getMeta();}
void *fn_80144D7C(){
 if(!igItemInterface_meta) igItemInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igItemInterface_meta;
}
void *igItemInterface_getMeta(){
 if(!igItemInterface_meta || !(reinterpret_cast<unsigned int *>(igItemInterface_meta)[0x24/4]&4)) igItemInterface_arkRegister();
 return igItemInterface_meta;
}
void *igItemInterface_vtableRead(){
 UnknownGenObject80144DF4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igItemInterface_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemInterface_arkRegister(){
 meta_registerNow((int)igItemInterface_register);
}
void igItemInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igItemInterface_getMetaCall,(int)igItemInterface_className,52,(int)igItemInterface_vtableRead,(int)igItemInterface_fieldInit,0,(int)igItemInterface_dependencies);
}
void *igItemInterface_getMetaCall(){return igItemInterface_getMeta();}
}
#pragma pop
