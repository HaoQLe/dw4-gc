#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_registerNow();
void *fn_800AF4A4();
void *fn_800C4880(int);
void *fn_800C49B4(int);
void *fn_800C4B28(int);
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureUnloadAttr_className[];
extern char igTextureStateAttr_className[];
extern char igTextureMatrixStateAttr_className[];
extern char igTextureMatrixAttrList_className[];
extern char igTextureUnloadAttr_vtable[];
extern char igTextureStateAttr_vtable[];
extern char igTextureMatrixStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igTextureMatrixAttrList_vtable[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char lbl_8055DF68[8];
extern char lbl_8055DF70[8];
extern char lbl_8055DF78[8];
extern char lbl_8055DF80[8];
extern char lbl_8055DF88[8];
extern char lbl_8055DF90[8];
extern char lbl_8055DF98[8];
extern char lbl_8055DFA0[8];
extern char lbl_8055DFA8[8];
extern char lbl_8055DFB0[8];
extern char lbl_8055DFB8[8];
extern char lbl_8055DFC0[8];
extern char lbl_8055DFC8[8];
extern char lbl_8055DFD0[8];
extern void *lbl_805621F4;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
void *igTextureUnloadAttr_getMeta();
void *igTextureUnloadAttr_vtableRead();
void igTextureUnloadAttr_registerNow();
void igTextureUnloadAttr_register();
void *igTextureUnloadAttr_getMetaCall();
void igTextureUnloadAttr_fieldInit();
void *igTextureStateAttr_getMeta();
void *igTextureStateAttr_vtableRead();
void igTextureStateAttr_registerNow();
void igTextureStateAttr_register();
void *igTextureStateAttr_getMetaCall();
void igTextureStateAttr_fieldInit();
void *igTextureMatrixStateAttr_getMeta();
void *igTextureMatrixStateAttr_vtableRead();
void igTextureMatrixStateAttr_registerNow();
void igTextureMatrixStateAttr_register();
void *igTextureMatrixStateAttr_getMetaCall();
void igTextureMatrixStateAttr_fieldInit();
void *igTextureMatrixAttrList_getMeta();
void *igTextureMatrixAttrList_vtableRead();
void igTextureMatrixAttrList_registerNow();
void igTextureMatrixAttrList_register();
void *igTextureMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD9D0(){
 if(!igTextureUnloadAttr_meta) igTextureUnloadAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureUnloadAttr_meta;
}
void *igTextureUnloadAttr_getMeta(){
 if(!igTextureUnloadAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureUnloadAttr_meta)[0x24/4]&4)) igTextureUnloadAttr_registerNow();
 return igTextureUnloadAttr_meta;
}
void *igTextureUnloadAttr_vtableRead(){
 UnknownGenObject800ADA48_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureUnloadAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureUnloadAttr_registerNow(){
 meta_registerNow((int)igTextureUnloadAttr_register);
}
void igTextureUnloadAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureUnloadAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureUnloadAttr_getMetaCall,(int)igTextureUnloadAttr_className,20,(int)igTextureUnloadAttr_vtableRead,(int)igTextureUnloadAttr_fieldInit,0,(int)lbl_8055DF68);
}
void *igTextureUnloadAttr_getMetaCall(){return igTextureUnloadAttr_getMeta();}
void igTextureUnloadAttr_fieldInit(){
 void *value0=igTextureUnloadAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055DF70,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+48)=(void *)fn_800C4B28;
 meta_setupFields(value0,lbl_8055DF78,lbl_8055DF80,lbl_8055DF88,value1);
}
void *igTextureStateAttr_create(void *object){
 igTextureStateAttr_registerNow();
 return meta_createInstance(igTextureStateAttr_meta,object);
}
void *fn_800ADC34(){
 if(!igTextureStateAttr_meta) igTextureStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureStateAttr_meta;
}
void *igTextureStateAttr_getMeta(){
 if(!igTextureStateAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureStateAttr_meta)[0x24/4]&4)) igTextureStateAttr_registerNow();
 return igTextureStateAttr_meta;
}
void *igTextureStateAttr_vtableRead(){
 UnknownGenObject800ADCAC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureStateAttr_registerNow(){
 meta_registerNow((int)igTextureStateAttr_register);
}
void igTextureStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureStateAttr_getMetaCall,(int)igTextureStateAttr_className,20,(int)igTextureStateAttr_vtableRead,(int)igTextureStateAttr_fieldInit,0,0);
}
void *igTextureStateAttr_getMetaCall(){return igTextureStateAttr_getMeta();}
void igTextureStateAttr_fieldInit(){
 void *value0=igTextureStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055DF90,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C49B4;
 meta_setupFields(value0,lbl_8055DF98,lbl_8055DFA0,lbl_8055DFA8,value1);
}
void *igTextureMatrixStateAttr_create(void *object){
 igTextureMatrixStateAttr_registerNow();
 return meta_createInstance(igTextureMatrixStateAttr_meta,object);
}
void *igTextureMatrixStateAttr_getMeta(){
 if(!igTextureMatrixStateAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureMatrixStateAttr_meta)[0x24/4]&4)) igTextureMatrixStateAttr_registerNow();
 return igTextureMatrixStateAttr_meta;
}
void *igTextureMatrixStateAttr_vtableRead(){
 UnknownGenObject800ADEB0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureMatrixStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureMatrixStateAttr_registerNow(){
 meta_registerNow((int)igTextureMatrixStateAttr_register);
}
void igTextureMatrixStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureMatrixStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureMatrixStateAttr_getMetaCall,(int)igTextureMatrixStateAttr_className,20,(int)igTextureMatrixStateAttr_vtableRead,(int)igTextureMatrixStateAttr_fieldInit,0,0);
}
void *igTextureMatrixStateAttr_getMetaCall(){return igTextureMatrixStateAttr_getMeta();}
void igTextureMatrixStateAttr_fieldInit(){
 void *value0=igTextureMatrixStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055DFB0,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C4880;
 meta_setupFields(value0,lbl_8055DFB8,lbl_8055DFC0,lbl_8055DFC8,value1);
}
void *igTextureMatrixAttrList_getMeta(){
 if(!igTextureMatrixAttrList_meta || !(reinterpret_cast<unsigned int *>(igTextureMatrixAttrList_meta)[0x24/4]&4)) igTextureMatrixAttrList_registerNow();
 return igTextureMatrixAttrList_meta;
}
void *igTextureMatrixAttrList_vtableRead(){
 UnknownGenObject800AE07C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047E31C;
 object.unknown00=igTextureMatrixAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureMatrixAttrList_registerNow(){
 meta_registerNow((int)igTextureMatrixAttrList_register);
}
void igTextureMatrixAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureMatrixAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTextureMatrixAttrList_getMetaCall,(int)igTextureMatrixAttrList_className,20,(int)igTextureMatrixAttrList_vtableRead,0,0,(int)lbl_8055DFD0);
}
void *igTextureMatrixAttrList_getMetaCall(){return igTextureMatrixAttrList_getMeta();}
void *igTextureMatrixAttr_create(void *object){
 igTextureMatrixAttr_registerNow();
 return meta_createInstance(igTextureMatrixAttr_meta,object);
}
void *fn_800AE1D8(){
 if(!igTextureMatrixAttr_meta) igTextureMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureMatrixAttr_meta;
}
void *igTextureMatrixAttr_getMeta(){
 if(!igTextureMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureMatrixAttr_meta)[0x24/4]&4)) igTextureMatrixAttr_registerNow();
 return igTextureMatrixAttr_meta;
}
}
#pragma pop
