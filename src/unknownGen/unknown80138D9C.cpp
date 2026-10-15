#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igObjectList_register();
void igObject_register();
void igParameterSet_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igParameterSetConstraintList_className[];
extern char igParameterSetConstraint_className[];
extern char igParameterSetList_className[];
extern char igParameterSet_dependencies[];
extern char igParameterSet_className[];
extern char igParameterSet_vtable[];
extern char igParameterSetList_vtable[];
extern char lbl_804AA360[];
extern char igParameterSetConstraintList_vtable[];
extern char lbl_804AA428[];
extern char igParameterSetConstraintList_dependencies[8];
extern char igParameterSetConstraint_fieldTypes[4];
extern char igParameterSetConstraint_fieldNames[4];
extern char igParameterSetConstraint_fieldStorage[4];
extern char igParameterSetConstraint_fieldOffsets[4];
extern char igParameterSetList_dependencies[8];
extern void *lbl_805621F4;
extern void *igParameterSetConstraintList_meta;
extern void *igParameterSetConstraint_meta;
extern void *igParameterSetList_meta;
extern void *igParameterSet_meta;
void *igParameterSetConstraintList_getMeta();
void *igParameterSetConstraintList_vtableRead();
void igParameterSetConstraintList_arkRegister();
void igParameterSetConstraintList_register();
void *igParameterSetConstraintList_getMetaCall();
void *igParameterSetConstraint_getMeta();
void igParameterSetConstraint_arkRegister();
void igParameterSetConstraint_register();
void *igParameterSetConstraint_getMetaCall();
void igParameterSetConstraint_fieldInit();
void *igParameterSetList_getMeta();
void *igParameterSetList_vtableRead();
void igParameterSetList_arkRegister();
void igParameterSetList_register();
void *igParameterSetList_getMetaCall();
void *igParameterSet_getMeta();
void *igParameterSet_vtableRead();
void igParameterSet_arkRegister();
void igParameterSet_register();
void *igParameterSet_getMetaCall();
}
struct UnknownGenObject80138E10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80139104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801392D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801392D8(){igObject_construct(this);}
};
struct UnknownGenObject801392D8 : UnknownGenRoot801392D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801392D8(){unknown00=igParameterSet_vtable;}
};
extern "C" {
void *igParameterSetConstraintList_create(void *object){
 igParameterSetConstraintList_arkRegister();
 return meta_createInstance(igParameterSetConstraintList_meta,object);
}
void *igParameterSetConstraintList_getMeta(){
 if(!igParameterSetConstraintList_meta || !(reinterpret_cast<unsigned int *>(igParameterSetConstraintList_meta)[0x24/4]&4)) igParameterSetConstraintList_arkRegister();
 return igParameterSetConstraintList_meta;
}
void *igParameterSetConstraintList_vtableRead(){
 UnknownGenObject80138E10_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AA428;
 object.unknown00=igParameterSetConstraintList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterSetConstraintList_arkRegister(){
 meta_registerNow((int)igParameterSetConstraintList_register);
}
void igParameterSetConstraintList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterSetConstraintList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igParameterSetConstraintList_getMetaCall,(int)igParameterSetConstraintList_className,20,(int)igParameterSetConstraintList_vtableRead,0,0,(int)igParameterSetConstraintList_dependencies);
}
void *igParameterSetConstraintList_getMetaCall(){return igParameterSetConstraintList_getMeta();}
void *igParameterSetConstraint_getMeta(){
 if(!igParameterSetConstraint_meta || !(reinterpret_cast<unsigned int *>(igParameterSetConstraint_meta)[0x24/4]&4)) igParameterSetConstraint_arkRegister();
 return igParameterSetConstraint_meta;
}
void igParameterSetConstraint_arkRegister(){
 meta_registerNow((int)igParameterSetConstraint_register);
}
void igParameterSetConstraint_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igParameterSetConstraint_meta,(int)igObject_register,(int)fn_800237D0,(int)igParameterSetConstraint_getMetaCall,(int)igParameterSetConstraint_className,12,0,(int)igParameterSetConstraint_fieldInit,0,0);
}
void *igParameterSetConstraint_getMetaCall(){return igParameterSetConstraint_getMeta();}
void igParameterSetConstraint_fieldInit(){
 void *value0=igParameterSetConstraint_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igParameterSetConstraint_fieldTypes,1);
 meta_setupFields(value0,igParameterSetConstraint_fieldNames,igParameterSetConstraint_fieldStorage,igParameterSetConstraint_fieldOffsets,value1);
}
void *fn_8013908C(){
 if(!igParameterSetList_meta) igParameterSetList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParameterSetList_meta;
}
void *igParameterSetList_getMeta(){
 if(!igParameterSetList_meta || !(reinterpret_cast<unsigned int *>(igParameterSetList_meta)[0x24/4]&4)) igParameterSetList_arkRegister();
 return igParameterSetList_meta;
}
void *igParameterSetList_vtableRead(){
 UnknownGenObject80139104_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AA360;
 object.unknown00=igParameterSetList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterSetList_arkRegister(){
 meta_registerNow((int)igParameterSetList_register);
}
void igParameterSetList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterSetList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igParameterSetList_getMetaCall,(int)igParameterSetList_className,20,(int)igParameterSetList_vtableRead,0,0,(int)igParameterSetList_dependencies);
}
void *igParameterSetList_getMetaCall(){return igParameterSetList_getMeta();}
void *igParameterSet_create(void *object){
 igParameterSet_arkRegister();
 return meta_createInstance(igParameterSet_meta,object);
}
void *fn_80139260(){
 if(!igParameterSet_meta) igParameterSet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igParameterSet_meta;
}
void *igParameterSet_getMeta(){
 if(!igParameterSet_meta || !(reinterpret_cast<unsigned int *>(igParameterSet_meta)[0x24/4]&4)) igParameterSet_arkRegister();
 return igParameterSet_meta;
}
void *igParameterSet_vtableRead(){
 UnknownGenObject801392D8 object;
 object.unknown00=igParameterSet_vtable;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterSet_arkRegister(){
 meta_registerNow((int)igParameterSet_register);
}
void igParameterSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterSet_meta,(int)igObject_register,(int)fn_800237D0,(int)igParameterSet_getMetaCall,(int)igParameterSet_className,28,(int)igParameterSet_vtableRead,(int)igParameterSet_fieldInit,0,(int)igParameterSet_dependencies);
}
void *igParameterSet_getMetaCall(){return igParameterSet_getMeta();}
}
#pragma pop
