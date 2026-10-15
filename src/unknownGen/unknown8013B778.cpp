#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80026B14();
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
void fn_8012FC48();
void *fn_8013496C();
void igBase_register();
void igItemBase_register();
void igObjectTraversal_fieldInit();
void igObject_register();
extern char igObjectTraversal_className[];
extern char igOptConfiguration_className[];
extern char lbl_8049DA90[];
extern char igOptBase_className[];
extern char lbl_8049DAA8[];
extern char igObjectTraversal_vtable[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igOptConfiguration_vtable[];
extern char lbl_804AAF48[];
extern char lbl_8055F7E8[8];
extern char lbl_8055F7F0[8];
extern char lbl_8055F7F8[8];
extern char lbl_8055F800[8];
extern void *lbl_805621F4;
extern void *igOptConfiguration_meta;
extern void *igOptBase_meta;
extern void *igObjectTraversal_meta;
extern void *igBase_meta;
void *fn_8013B7B0();
void *igOptConfiguration_getMeta();
void *igOptConfiguration_vtableRead();
void igOptConfiguration_registerNow();
void igOptConfiguration_register();
void *igOptConfiguration_getMetaCall();
void *igOptBase_getMeta();
void igOptBase_registerNow();
void igOptBase_register();
void *igOptBase_getMetaCall();
void *fn_8013BA10();
void igOptBase_fieldInit();
void *igObjectTraversal_getMeta();
void *igObjectTraversal_vtableRead();
void igObjectTraversal_registerNow();
void igObjectTraversal_register();
void *igObjectTraversal_getMetaCall();
}
struct UnknownGenObject8013B828_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8013BAEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BAEC(){igObject_construct(this);}
};
struct UnknownGenObject8013BAEC : UnknownGenRoot8013BAEC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8013BAEC(){unknown00=igObjectTraversal_vtable;}
};
extern "C" {
void *igOptConfiguration_create(void *object){
 igOptConfiguration_registerNow();
 return meta_createInstance(igOptConfiguration_meta,object);
}
void *fn_8013B7B0(){
 if(!igOptConfiguration_meta) igOptConfiguration_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOptConfiguration_meta;
}
void *igOptConfiguration_getMeta(){
 if(!igOptConfiguration_meta || !(reinterpret_cast<unsigned int *>(igOptConfiguration_meta)[0x24/4]&4)) igOptConfiguration_registerNow();
 return igOptConfiguration_meta;
}
void *igOptConfiguration_vtableRead(){
 UnknownGenObject8013B828_0 object;
 igObject_construct(&object);
 object.unknown00=igOptConfiguration_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptConfiguration_registerNow(){
 meta_registerNow((int)igOptConfiguration_register);
}
void igOptConfiguration_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptConfiguration_meta,(int)igObject_register,(int)fn_800237D0,(int)igOptConfiguration_getMetaCall,(int)igOptConfiguration_className,8,(int)igOptConfiguration_vtableRead,0,0,0);
}
void *igOptConfiguration_getMetaCall(){return igOptConfiguration_getMeta();}
void *igOptBase_getMeta(){
 if(!igOptBase_meta || !(reinterpret_cast<unsigned int *>(igOptBase_meta)[0x24/4]&4)) igOptBase_registerNow();
 return igOptBase_meta;
}
void igOptBase_registerNow(){
 meta_registerNow((int)igOptBase_register);
}
void igOptBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igOptBase_meta,(int)igBase_register,(int)fn_8013BA10,(int)igOptBase_getMetaCall,(int)igOptBase_className,40,0,(int)igOptBase_fieldInit,0,(int)lbl_8049DA90);
}
void *igOptBase_getMetaCall(){return igOptBase_getMeta();}
void *fn_8013BA10(){return igBase_meta;}
void igOptBase_fieldInit(){
 void *value0=igOptBase_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F7E8,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80026B14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_8013B7B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_8055F7F0,lbl_8055F7F8,lbl_8055F800,value1);
}
void *igObjectTraversal_getMeta(){
 if(!igObjectTraversal_meta || !(reinterpret_cast<unsigned int *>(igObjectTraversal_meta)[0x24/4]&4)) igObjectTraversal_registerNow();
 return igObjectTraversal_meta;
}
void *igObjectTraversal_vtableRead(){
 UnknownGenObject8013BAEC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igObjectTraversal_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectTraversal_registerNow(){
 meta_registerNow((int)igObjectTraversal_register);
}
void igObjectTraversal_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectTraversal_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igObjectTraversal_getMetaCall,(int)igObjectTraversal_className,44,(int)igObjectTraversal_vtableRead,(int)igObjectTraversal_fieldInit,0,(int)lbl_8049DAA8);
}
void *igObjectTraversal_getMetaCall(){return igObjectTraversal_getMeta();}
}
#pragma pop
