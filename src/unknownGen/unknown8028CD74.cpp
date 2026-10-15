#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
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
void *fn_8011148C();
void fn_8028C93C();
void *fn_8028D794();
void igCollisionGroup_fieldInit();
void igGroup_register();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igCollisionInfo_className[];
extern char igCollisionGroupList_className[];
extern char igCollisionGroup_className[];
extern char igCollisionGroup_vtable[];
extern char igCollisionGroupList_vtable[];
extern char lbl_804CCF28[];
extern char igCollisionInfo_vtable[];
extern char igCollisionInfo_dependencies[8];
extern char igCollisionInfo_fieldTypes[4];
extern char igCollisionInfo_fieldNames[4];
extern char igCollisionInfo_fieldStorage[4];
extern char igCollisionInfo_fieldOffsets[4];
extern char igCollisionGroupList_dependencies[8];
extern char igCollisionGroup_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionInfo_meta;
extern void *igCollisionGroupList_meta;
extern void *igCollisionGroup_meta;
void *igCollisionInfo_getMeta();
void *igCollisionInfo_vtableRead();
void igCollisionInfo_arkRegister();
void igCollisionInfo_register();
void *igCollisionInfo_getMetaCall();
void igCollisionInfo_fieldInit();
void *igCollisionGroupList_getMeta();
void *igCollisionGroupList_vtableRead();
void igCollisionGroupList_arkRegister();
void igCollisionGroupList_register();
void *igCollisionGroupList_getMetaCall();
void *igCollisionGroup_getMeta();
void *igCollisionGroup_vtableRead();
void igCollisionGroup_arkRegister();
void igCollisionGroup_register();
void *igCollisionGroup_getMetaCall();
}
struct UnknownGenRoot8028CDE8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028CDE8(){igObject_construct(this);}
};
struct UnknownGenObject8028CDE8_0 : UnknownGenRoot8028CDE8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028CDE8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028CDE8_1 : UnknownGenObject8028CDE8_0 {
 inline ~UnknownGenObject8028CDE8_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8028CDE8 : UnknownGenObject8028CDE8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8028CDE8(){unknown00=igCollisionInfo_vtable;}
};
struct UnknownGenObject8028D094_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028D1F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D1F4(){igObject_construct(this);}
};
struct UnknownGenObject8028D1F4_0 : UnknownGenRoot8028D1F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028D1F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028D1F4_1 : UnknownGenObject8028D1F4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject8028D1F4_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject8028D1F4_2 : UnknownGenObject8028D1F4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject8028D1F4_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject8028D1F4 : UnknownGenObject8028D1F4_2 {
 UnknownGenRefMember unknown20;
 char unknown24[60];
 inline ~UnknownGenObject8028D1F4(){unknown00=igCollisionGroup_vtable;}
};
extern "C" {
void *igCollisionInfo_create(void *object){
 igCollisionInfo_arkRegister();
 return meta_createInstance(igCollisionInfo_meta,object);
}
void *igCollisionInfo_getMeta(){
 if(!igCollisionInfo_meta || !(reinterpret_cast<unsigned int *>(igCollisionInfo_meta)[0x24/4]&4)) igCollisionInfo_arkRegister();
 return igCollisionInfo_meta;
}
void *igCollisionInfo_vtableRead(){
 UnknownGenObject8028CDE8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igCollisionInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionInfo_arkRegister(){
 meta_registerNow((int)igCollisionInfo_register);
}
void igCollisionInfo_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igCollisionInfo_getMetaCall,(int)igCollisionInfo_className,24,(int)igCollisionInfo_vtableRead,(int)igCollisionInfo_fieldInit,0,(int)igCollisionInfo_dependencies);
}
void *igCollisionInfo_getMetaCall(){return igCollisionInfo_getMeta();}
void igCollisionInfo_fieldInit(){
 void *value0=igCollisionInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igCollisionInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8028D794();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igCollisionInfo_fieldNames,igCollisionInfo_fieldStorage,igCollisionInfo_fieldOffsets,value1);
}
void *fn_8028D01C(){
 if(!igCollisionGroupList_meta) igCollisionGroupList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionGroupList_meta;
}
void *igCollisionGroupList_getMeta(){
 if(!igCollisionGroupList_meta || !(reinterpret_cast<unsigned int *>(igCollisionGroupList_meta)[0x24/4]&4)) igCollisionGroupList_arkRegister();
 return igCollisionGroupList_meta;
}
void *igCollisionGroupList_vtableRead(){
 UnknownGenObject8028D094_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CCF28;
 object.unknown00=igCollisionGroupList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionGroupList_arkRegister(){
 meta_registerNow((int)igCollisionGroupList_register);
}
void igCollisionGroupList_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGroupList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCollisionGroupList_getMetaCall,(int)igCollisionGroupList_className,20,(int)igCollisionGroupList_vtableRead,0,0,(int)igCollisionGroupList_dependencies);
}
void *igCollisionGroupList_getMetaCall(){return igCollisionGroupList_getMeta();}
void *igCollisionGroup_getMeta(){
 if(!igCollisionGroup_meta || !(reinterpret_cast<unsigned int *>(igCollisionGroup_meta)[0x24/4]&4)) igCollisionGroup_arkRegister();
 return igCollisionGroup_meta;
}
void *igCollisionGroup_vtableRead(){
 UnknownGenObject8028D1F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igCollisionGroup_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionGroup_arkRegister(){
 meta_registerNow((int)igCollisionGroup_register);
}
void igCollisionGroup_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGroup_meta,(int)igGroup_register,(int)fn_8011148C,(int)igCollisionGroup_getMetaCall,(int)igCollisionGroup_className,96,(int)igCollisionGroup_vtableRead,(int)igCollisionGroup_fieldInit,0,(int)igCollisionGroup_dependencies);
}
void *igCollisionGroup_getMetaCall(){return igCollisionGroup_getMeta();}
}
#pragma pop
