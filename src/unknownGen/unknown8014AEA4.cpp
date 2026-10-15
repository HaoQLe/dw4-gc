#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002A638();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013496C();
void igFieldUpdate_fieldInit();
void igItemBase_register();
void igObjectChangedEvent_register();
extern char igUpdatedFieldEvent_className[];
extern char lbl_8049F120[];
extern char igFieldUpdate_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igUpdatedFieldEvent_vtable[];
extern char igFieldUpdate_vtable[];
extern char lbl_804A8AD0[];
extern char igMessageBase_vtable[];
extern char lbl_804AAF48[];
extern char lbl_8055FB8C[8];
extern char lbl_8055FB94[4];
extern char lbl_8055FBA0[4];
extern char lbl_8055FBA4[4];
extern char lbl_8055FBA8[4];
extern void *igObjectChangedEvent_meta;
extern void *igUpdatedFieldEvent_meta;
extern void *igFieldUpdate_meta;
void *igUpdatedFieldEvent_getMeta();
void *igUpdatedFieldEvent_vtableRead();
void igUpdatedFieldEvent_registerNow();
void igUpdatedFieldEvent_register();
void *igUpdatedFieldEvent_getMetaCall();
void *igUpdatedFieldEvent_parentMeta();
void igUpdatedFieldEvent_fieldInit();
void *igFieldUpdate_getMeta();
void *igFieldUpdate_vtableRead();
void igFieldUpdate_registerNow();
void igFieldUpdate_register();
void *igFieldUpdate_getMetaCall();
}
struct UnknownGenRoot8014AF18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AF18(){igObject_construct(this);}
};
struct UnknownGenObject8014AF18_0 : UnknownGenRoot8014AF18 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8014AF18_0(){unknown00=lbl_804A8AD0;}
};
struct UnknownGenObject8014AF18 : UnknownGenObject8014AF18_0 {
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014AF18(){unknown00=igUpdatedFieldEvent_vtable;}
};
struct UnknownGenRoot8014B19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B19C(){igObject_construct(this);}
};
struct UnknownGenObject8014B19C : UnknownGenRoot8014B19C {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8014B19C(){unknown00=igFieldUpdate_vtable;}
};
extern "C" {
void *igUpdatedFieldEvent_create(void *object){
 igUpdatedFieldEvent_registerNow();
 return meta_createInstance(igUpdatedFieldEvent_meta,object);
}
void *igUpdatedFieldEvent_getMeta(){
 if(!igUpdatedFieldEvent_meta || !(reinterpret_cast<unsigned int *>(igUpdatedFieldEvent_meta)[0x24/4]&4)) igUpdatedFieldEvent_registerNow();
 return igUpdatedFieldEvent_meta;
}
void *igUpdatedFieldEvent_vtableRead(){
 UnknownGenObject8014AF18 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igMessageBase_vtable;
 object.unknown00=lbl_804A8AD0;
 object.unknown20.value=0;
 object.unknown00=igUpdatedFieldEvent_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUpdatedFieldEvent_registerNow(){
 meta_registerNow((int)igUpdatedFieldEvent_register);
}
void igUpdatedFieldEvent_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igUpdatedFieldEvent_meta,(int)igObjectChangedEvent_register,(int)igUpdatedFieldEvent_parentMeta,(int)igUpdatedFieldEvent_getMetaCall,(int)igUpdatedFieldEvent_className,40,(int)igUpdatedFieldEvent_vtableRead,(int)igUpdatedFieldEvent_fieldInit,0,(int)lbl_8055FB8C);
}
void *igUpdatedFieldEvent_getMetaCall(){return igUpdatedFieldEvent_getMeta();}
void *igUpdatedFieldEvent_parentMeta(){return igObjectChangedEvent_meta;}
void igUpdatedFieldEvent_fieldInit(){
 void *value0=igUpdatedFieldEvent_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055FB94,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8002A638();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_8055FBA0,lbl_8055FBA4,lbl_8055FBA8,value1);
}
void *igFieldUpdate_getMeta(){
 if(!igFieldUpdate_meta || !(reinterpret_cast<unsigned int *>(igFieldUpdate_meta)[0x24/4]&4)) igFieldUpdate_registerNow();
 return igFieldUpdate_meta;
}
void *igFieldUpdate_vtableRead(){
 UnknownGenObject8014B19C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igFieldUpdate_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFieldUpdate_registerNow(){
 meta_registerNow((int)igFieldUpdate_register);
}
void igFieldUpdate_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igFieldUpdate_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igFieldUpdate_getMetaCall,(int)igFieldUpdate_className,52,(int)igFieldUpdate_vtableRead,(int)igFieldUpdate_fieldInit,0,(int)lbl_8049F120);
}
void *igFieldUpdate_getMetaCall(){return igFieldUpdate_getMeta();}
}
#pragma pop
