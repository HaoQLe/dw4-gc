#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void fn_800CE2F8();
void fn_800D3C00();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCustomStateFieldList_className[];
extern char igCustomStateField_className[];
extern char igCustomStateCollectionList_className[];
extern char igCustomStateCollection_className[];
extern char igCustomState_className[];
extern char igGfxShaderConstantList_className[];
extern char igGfxShaderConstant_className[];
extern char igGfxShaderConstant_vtable[];
extern char igGfxShaderConstantList_vtable[];
extern char lbl_804937DC[];
extern char igCustomStateCollection_vtable[];
extern char lbl_804938A4[];
extern char igCustomStateCollectionList_vtable[];
extern char lbl_8049396C[];
extern char igCustomStateField_vtable[];
extern char igCustomStateFieldList_vtable[];
extern char lbl_80493A90[];
extern char lbl_8055EB78[4];
extern char lbl_8055EBF8[8];
extern char lbl_8055EC00[8];
extern char lbl_8055EC08[8];
extern char lbl_8055EC10[8];
extern char lbl_8055EC18[8];
extern char lbl_8055EC20[8];
extern char lbl_8055EC28[8];
extern char lbl_8055EC30[8];
extern char lbl_8055EC38[8];
extern char lbl_8055EC50[8];
extern char lbl_8055EC58[8];
extern char lbl_8055EC60[8];
extern char lbl_8055EC68[8];
extern char lbl_8055EC70[8];
extern void *lbl_805621F4;
extern void *igCustomStateFieldList_meta;
extern void *igCustomStateField_meta;
extern void *igCustomStateCollectionList_meta;
extern void *igCustomStateCollection_meta;
extern void *igCustomState_meta;
extern void *igGfxShaderConstantList_meta;
extern void *igGfxShaderConstant_meta;
void *igCustomStateFieldList_getMeta();
void *igCustomStateFieldList_vtableRead();
void igCustomStateFieldList_registerNow();
void igCustomStateFieldList_register();
void *igCustomStateFieldList_getMetaCall();
void *igCustomStateField_getMeta();
void *igCustomStateField_vtableRead();
void igCustomStateField_registerNow();
void igCustomStateField_register();
void *igCustomStateField_getMetaCall();
void igCustomStateField_fieldInit();
void *igCustomStateCollectionList_getMeta();
void *igCustomStateCollectionList_vtableRead();
void igCustomStateCollectionList_registerNow();
void igCustomStateCollectionList_register();
void *igCustomStateCollectionList_getMetaCall();
void *igCustomStateCollection_getMeta();
void *igCustomStateCollection_vtableRead();
void igCustomStateCollection_registerNow();
void igCustomStateCollection_register();
void *igCustomStateCollection_getMetaCall();
void igCustomStateCollection_fieldInit();
void *igCustomState_getMeta();
void igCustomState_registerNow();
void igCustomState_register();
void *igCustomState_getMetaCall();
void *igGfxShaderConstantList_getMeta();
void *igGfxShaderConstantList_vtableRead();
void igGfxShaderConstantList_registerNow();
void igGfxShaderConstantList_register();
void *igGfxShaderConstantList_getMetaCall();
void *igGfxShaderConstant_getMeta();
void *igGfxShaderConstant_vtableRead();
void igGfxShaderConstant_registerNow();
void igGfxShaderConstant_register();
void *igGfxShaderConstant_getMetaCall();
}
struct UnknownGenObject800D2F80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3118(){fn_8006665C(this);}
};
struct UnknownGenObject800D3118_0 : UnknownGenRoot800D3118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3118_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D3118 : UnknownGenObject800D3118_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800D3118(){unknown00=igCustomStateField_vtable;}
};
struct UnknownGenObject800D33E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D357C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D357C(){fn_8006665C(this);}
};
struct UnknownGenObject800D357C : UnknownGenRoot800D357C {
 char unknown04[16];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800D357C(){unknown00=igCustomStateCollection_vtable;}
};
struct UnknownGenObject800D38CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3A2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3A2C(){fn_8006665C(this);}
};
struct UnknownGenObject800D3A2C_0 : UnknownGenRoot800D3A2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3A2C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D3A2C : UnknownGenObject800D3A2C_0 {
 char unknown0C[4];
 UnknownGenString unknown10;
 char unknown14[16];
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject800D3A2C(){unknown00=igGfxShaderConstant_vtable;}
};
extern "C" {
void *igCustomStateFieldList_create(void *object){
 igCustomStateFieldList_registerNow();
 return meta_createInstance(igCustomStateFieldList_meta,object);
}
void *fn_800D2F08(){
 if(!igCustomStateFieldList_meta) igCustomStateFieldList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCustomStateFieldList_meta;
}
void *igCustomStateFieldList_getMeta(){
 if(!igCustomStateFieldList_meta || !(reinterpret_cast<unsigned int *>(igCustomStateFieldList_meta)[0x24/4]&4)) igCustomStateFieldList_registerNow();
 return igCustomStateFieldList_meta;
}
void *igCustomStateFieldList_vtableRead(){
 UnknownGenObject800D2F80_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80493A90;
 object.unknown00=igCustomStateFieldList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomStateFieldList_registerNow(){
 meta_registerNow((int)igCustomStateFieldList_register);
}
void igCustomStateFieldList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomStateFieldList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCustomStateFieldList_getMetaCall,(int)igCustomStateFieldList_className,20,(int)igCustomStateFieldList_vtableRead,0,0,(int)lbl_8055EBF8);
}
void *igCustomStateFieldList_getMetaCall(){return igCustomStateFieldList_getMeta();}
void *igCustomStateField_create(void *object){
 igCustomStateField_registerNow();
 return meta_createInstance(igCustomStateField_meta,object);
}
void *igCustomStateField_getMeta(){
 if(!igCustomStateField_meta || !(reinterpret_cast<unsigned int *>(igCustomStateField_meta)[0x24/4]&4)) igCustomStateField_registerNow();
 return igCustomStateField_meta;
}
void *igCustomStateField_vtableRead(){
 UnknownGenObject800D3118 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igCustomStateField_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomStateField_registerNow(){
 meta_registerNow((int)igCustomStateField_register);
}
void igCustomStateField_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomStateField_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igCustomStateField_getMetaCall,(int)igCustomStateField_className,20,(int)igCustomStateField_vtableRead,(int)igCustomStateField_fieldInit,0,(int)lbl_8055EC00);
}
void *igCustomStateField_getMetaCall(){return igCustomStateField_getMeta();}
void igCustomStateField_fieldInit(){
 void *value0=igCustomStateField_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EC08,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_8002A638();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EC10,lbl_8055EC18,lbl_8055EC20,value1);
}
void *igCustomStateCollectionList_create(void *object){
 igCustomStateCollectionList_registerNow();
 return meta_createInstance(igCustomStateCollectionList_meta,object);
}
void *fn_800D336C(){
 if(!igCustomStateCollectionList_meta) igCustomStateCollectionList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCustomStateCollectionList_meta;
}
void *igCustomStateCollectionList_getMeta(){
 if(!igCustomStateCollectionList_meta || !(reinterpret_cast<unsigned int *>(igCustomStateCollectionList_meta)[0x24/4]&4)) igCustomStateCollectionList_registerNow();
 return igCustomStateCollectionList_meta;
}
void *igCustomStateCollectionList_vtableRead(){
 UnknownGenObject800D33E4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8049396C;
 object.unknown00=igCustomStateCollectionList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomStateCollectionList_registerNow(){
 meta_registerNow((int)igCustomStateCollectionList_register);
}
void igCustomStateCollectionList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomStateCollectionList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCustomStateCollectionList_getMetaCall,(int)igCustomStateCollectionList_className,20,(int)igCustomStateCollectionList_vtableRead,0,0,(int)lbl_8055EC28);
}
void *igCustomStateCollectionList_getMetaCall(){return igCustomStateCollectionList_getMeta();}
void *igCustomStateCollection_create(void *object){
 igCustomStateCollection_registerNow();
 return meta_createInstance(igCustomStateCollection_meta,object);
}
void *igCustomStateCollection_getMeta(){
 if(!igCustomStateCollection_meta || !(reinterpret_cast<unsigned int *>(igCustomStateCollection_meta)[0x24/4]&4)) igCustomStateCollection_registerNow();
 return igCustomStateCollection_meta;
}
void *igCustomStateCollection_vtableRead(){
 UnknownGenObject800D357C object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804938A4;
 object.unknown00=igCustomStateCollection_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomStateCollection_registerNow(){
 meta_registerNow((int)igCustomStateCollection_register);
}
void igCustomStateCollection_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomStateCollection_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCustomStateCollection_getMetaCall,(int)igCustomStateCollection_className,28,(int)igCustomStateCollection_vtableRead,(int)igCustomStateCollection_fieldInit,0,(int)lbl_8055EC30);
}
void *igCustomStateCollection_getMetaCall(){return igCustomStateCollection_getMeta();}
void igCustomStateCollection_fieldInit(){
 void *value0=igCustomStateCollection_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EC38,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,lbl_8055EB78);
 fn_800659C0(value0,lbl_8055EC50,lbl_8055EC58,lbl_8055EC60,value1);
}
void *igCustomState_getMeta(){
 if(!igCustomState_meta || !(reinterpret_cast<unsigned int *>(igCustomState_meta)[0x24/4]&4)) igCustomState_registerNow();
 return igCustomState_meta;
}
void igCustomState_registerNow(){
 meta_registerNow((int)igCustomState_register);
}
void igCustomState_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igCustomState_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igCustomState_getMetaCall,(int)igCustomState_className,12,0,0,0,0);
}
void *igCustomState_getMetaCall(){return igCustomState_getMeta();}
void *fn_800D3854(){
 if(!igGfxShaderConstantList_meta) igGfxShaderConstantList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGfxShaderConstantList_meta;
}
void *igGfxShaderConstantList_getMeta(){
 if(!igGfxShaderConstantList_meta || !(reinterpret_cast<unsigned int *>(igGfxShaderConstantList_meta)[0x24/4]&4)) igGfxShaderConstantList_registerNow();
 return igGfxShaderConstantList_meta;
}
void *igGfxShaderConstantList_vtableRead(){
 UnknownGenObject800D38CC_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804937DC;
 object.unknown00=igGfxShaderConstantList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGfxShaderConstantList_registerNow(){
 meta_registerNow((int)igGfxShaderConstantList_register);
}
void igGfxShaderConstantList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGfxShaderConstantList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGfxShaderConstantList_getMetaCall,(int)igGfxShaderConstantList_className,20,(int)igGfxShaderConstantList_vtableRead,0,0,(int)lbl_8055EC68);
}
void *igGfxShaderConstantList_getMetaCall(){return igGfxShaderConstantList_getMeta();}
void *igGfxShaderConstant_getMeta(){
 if(!igGfxShaderConstant_meta || !(reinterpret_cast<unsigned int *>(igGfxShaderConstant_meta)[0x24/4]&4)) igGfxShaderConstant_registerNow();
 return igGfxShaderConstant_meta;
}
void *igGfxShaderConstant_vtableRead(){
 UnknownGenObject800D3A2C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igGfxShaderConstant_vtable;
 object.unknown10.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGfxShaderConstant_registerNow(){
 meta_registerNow((int)igGfxShaderConstant_register);
}
void igGfxShaderConstant_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGfxShaderConstant_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igGfxShaderConstant_getMetaCall,(int)igGfxShaderConstant_className,48,(int)igGfxShaderConstant_vtableRead,(int)fn_800D3C00,0,(int)lbl_8055EC70);
}
void *igGfxShaderConstant_getMetaCall(){return igGfxShaderConstant_getMeta();}
}
#pragma pop
