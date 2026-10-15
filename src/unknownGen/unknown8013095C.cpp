#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029F84();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igNodeUsageObjectDefinition_fieldInit();
void igObjectList_register();
void igObject_register();
void igOptStatistics_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igStatisticsNodeUsage_className[];
extern char igNodeUsageObjectDefinitionList_className[];
extern char igNodeUsageObjectDefinition_dependencies[];
extern char igNodeUsageObjectDefinition_className[];
extern char igStatisticsNodeUsage_vtable[];
extern char lbl_804A46AC[];
extern char igOptStatistics_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igNodeUsageObjectDefinition_vtable[];
extern char igNodeUsageObjectDefinitionList_vtable[];
extern char lbl_804AAC5C[];
extern char lbl_804AAF48[];
extern char igStatisticsNodeUsage_dependencies[8];
extern char igStatisticsNodeUsage_fieldTypes[4];
extern char igStatisticsNodeUsage_fieldNames[4];
extern char igStatisticsNodeUsage_fieldStorage[4];
extern char igStatisticsNodeUsage_fieldOffsets[4];
extern char igNodeUsageObjectDefinitionList_dependencies[8];
extern void *igStatisticsNodeUsage_meta;
extern void *igNodeUsageObjectDefinitionList_meta;
extern void *igNodeUsageObjectDefinition_meta;
extern void *igOptStatistics_meta;
void *igStatisticsNodeUsage_getMeta();
void *igStatisticsNodeUsage_vtableRead();
void igStatisticsNodeUsage_arkRegister();
void igStatisticsNodeUsage_register();
void *igStatisticsNodeUsage_getMetaCall();
void *igStatisticsNodeUsage_parentMeta();
void igStatisticsNodeUsage_fieldInit();
void *igNodeUsageObjectDefinitionList_getMeta();
void *igNodeUsageObjectDefinitionList_vtableRead();
void igNodeUsageObjectDefinitionList_arkRegister();
void igNodeUsageObjectDefinitionList_register();
void *igNodeUsageObjectDefinitionList_getMetaCall();
void *igNodeUsageObjectDefinition_getMeta();
void *igNodeUsageObjectDefinition_vtableRead();
void igNodeUsageObjectDefinition_arkRegister();
void igNodeUsageObjectDefinition_register();
void *igNodeUsageObjectDefinition_getMetaCall();
}
struct UnknownGenRoot80130998 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130998(){igObject_construct(this);}
};
struct UnknownGenObject80130998_0 : UnknownGenRoot80130998 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130998_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130998_1 : UnknownGenObject80130998_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80130998_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80130998_2 : UnknownGenObject80130998_1 {
 UnknownGenString unknown2C;
 char unknown30[16];
 UnknownGenRefMember unknown40;
 inline ~UnknownGenObject80130998_2(){unknown00=igOptStatistics_vtable;}
};
struct UnknownGenObject80130998 : UnknownGenObject80130998_2 {
 UnknownGenRefMember unknown44;
 char unknown48[8];
 inline ~UnknownGenObject80130998(){unknown00=igStatisticsNodeUsage_vtable;}
};
struct UnknownGenObject80130D58_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80130EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130EF0(){igObject_construct(this);}
};
struct UnknownGenObject80130EF0 : UnknownGenRoot80130EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80130EF0(){unknown00=igNodeUsageObjectDefinition_vtable;}
};
extern "C" {
void *igStatisticsNodeUsage_getMeta(){
 if(!igStatisticsNodeUsage_meta || !(reinterpret_cast<unsigned int *>(igStatisticsNodeUsage_meta)[0x24/4]&4)) igStatisticsNodeUsage_arkRegister();
 return igStatisticsNodeUsage_meta;
}
void *igStatisticsNodeUsage_vtableRead(){
 UnknownGenObject80130998 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igOptStatistics_vtable;
 object.unknown2C.value=0;
 object.unknown40.value=0;
 object.unknown00=igStatisticsNodeUsage_vtable;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStatisticsNodeUsage_arkRegister(){
 meta_registerNow((int)igStatisticsNodeUsage_register);
}
void igStatisticsNodeUsage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igStatisticsNodeUsage_meta,(int)igOptStatistics_register,(int)igStatisticsNodeUsage_parentMeta,(int)igStatisticsNodeUsage_getMetaCall,(int)igStatisticsNodeUsage_className,72,(int)igStatisticsNodeUsage_vtableRead,(int)igStatisticsNodeUsage_fieldInit,0,(int)igStatisticsNodeUsage_dependencies);
}
void *igStatisticsNodeUsage_getMetaCall(){return igStatisticsNodeUsage_getMeta();}
void *igStatisticsNodeUsage_parentMeta(){return igOptStatistics_meta;}
void igStatisticsNodeUsage_fieldInit(){
 void *value0=igStatisticsNodeUsage_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igStatisticsNodeUsage_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igStatisticsNodeUsage_fieldNames,igStatisticsNodeUsage_fieldStorage,igStatisticsNodeUsage_fieldOffsets,value1);
}
void *igNodeUsageObjectDefinitionList_create(void *object){
 igNodeUsageObjectDefinitionList_arkRegister();
 return meta_createInstance(igNodeUsageObjectDefinitionList_meta,object);
}
void *igNodeUsageObjectDefinitionList_getMeta(){
 if(!igNodeUsageObjectDefinitionList_meta || !(reinterpret_cast<unsigned int *>(igNodeUsageObjectDefinitionList_meta)[0x24/4]&4)) igNodeUsageObjectDefinitionList_arkRegister();
 return igNodeUsageObjectDefinitionList_meta;
}
void *igNodeUsageObjectDefinitionList_vtableRead(){
 UnknownGenObject80130D58_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AAC5C;
 object.unknown00=igNodeUsageObjectDefinitionList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNodeUsageObjectDefinitionList_arkRegister(){
 meta_registerNow((int)igNodeUsageObjectDefinitionList_register);
}
void igNodeUsageObjectDefinitionList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igNodeUsageObjectDefinitionList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igNodeUsageObjectDefinitionList_getMetaCall,(int)igNodeUsageObjectDefinitionList_className,20,(int)igNodeUsageObjectDefinitionList_vtableRead,0,0,(int)igNodeUsageObjectDefinitionList_dependencies);
}
void *igNodeUsageObjectDefinitionList_getMetaCall(){return igNodeUsageObjectDefinitionList_getMeta();}
void *igNodeUsageObjectDefinition_create(void *object){
 igNodeUsageObjectDefinition_arkRegister();
 return meta_createInstance(igNodeUsageObjectDefinition_meta,object);
}
void *igNodeUsageObjectDefinition_getMeta(){
 if(!igNodeUsageObjectDefinition_meta || !(reinterpret_cast<unsigned int *>(igNodeUsageObjectDefinition_meta)[0x24/4]&4)) igNodeUsageObjectDefinition_arkRegister();
 return igNodeUsageObjectDefinition_meta;
}
void *igNodeUsageObjectDefinition_vtableRead(){
 UnknownGenObject80130EF0 object;
 object.unknown00=igNodeUsageObjectDefinition_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNodeUsageObjectDefinition_arkRegister(){
 meta_registerNow((int)igNodeUsageObjectDefinition_register);
}
void igNodeUsageObjectDefinition_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igNodeUsageObjectDefinition_meta,(int)igObject_register,(int)fn_800237D0,(int)igNodeUsageObjectDefinition_getMetaCall,(int)igNodeUsageObjectDefinition_className,28,(int)igNodeUsageObjectDefinition_vtableRead,(int)igNodeUsageObjectDefinition_fieldInit,0,(int)igNodeUsageObjectDefinition_dependencies);
}
void *igNodeUsageObjectDefinition_getMetaCall(){return igNodeUsageObjectDefinition_getMeta();}
}
#pragma pop
