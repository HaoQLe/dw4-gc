#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAttrDefaultManager_className[];
extern char igAttrListList_className[];
extern char igNonRefCountedAttrList_className[];
extern char igAttrList_className[];
extern char igAlphaStateAttr_className[];
extern char igAlphaFunctionAttr_className[];
extern char igTextureSwapTableAttr_className[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void fn_800BB148(){return fn_800BD3E4();}
void *fn_800BB168(){return fn_800BD398();}
void *fn_800BB188(){
 if(!igAttrDefaultManager_meta) igAttrDefaultManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrDefaultManager_meta;
}
void *igAttrDefaultManager_getMeta(){
 if(!igAttrDefaultManager_meta || !(reinterpret_cast<unsigned int *>(igAttrDefaultManager_meta)[0x24/4]&4)) igAttrDefaultManager_arkRegister();
 return igAttrDefaultManager_meta;
}
void igAttrDefaultManager_arkRegister(){
 meta_registerNow((int)igAttrDefaultManager_register);
}
void igAttrDefaultManager_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igAttrDefaultManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igAttrDefaultManager_getMetaCall,(int)igAttrDefaultManager_className,8,0,0,0,0);
}
void *igAttrDefaultManager_getMetaCall(){return igAttrDefaultManager_getMeta();}
void *fn_800BB2AC(){
 if(!igAttrListList_meta) igAttrListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrListList_meta;
}
void *igAttrListList_getMeta(){
 if(!igAttrListList_meta || !(reinterpret_cast<unsigned int *>(igAttrListList_meta)[0x24/4]&4)) igAttrListList_arkRegister();
 return igAttrListList_meta;
}
void *igAttrListList_vtableRead(){
 UnknownGenObject800BB324_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047D95C;
 object.unknown00=igAttrListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrListList_arkRegister(){
 meta_registerNow((int)igAttrListList_register);
}
void igAttrListList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAttrListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAttrListList_getMetaCall,(int)igAttrListList_className,20,(int)igAttrListList_vtableRead,0,0,(int)igAttrListList_dependencies);
}
void *igAttrListList_getMetaCall(){return igAttrListList_getMeta();}
void *fn_800BB448(){
 if(!igNonRefCountedAttrList_meta) igNonRefCountedAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedAttrList_meta;
}
void *igNonRefCountedAttrList_getMeta(){
 if(!igNonRefCountedAttrList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedAttrList_meta)[0x24/4]&4)) igNonRefCountedAttrList_arkRegister();
 return igNonRefCountedAttrList_meta;
}
void *igNonRefCountedAttrList_vtableRead(){
 UnknownGenObject800BB4C0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_8047D830;
 object.unknown00=igNonRefCountedAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedAttrList_arkRegister(){
 meta_registerNow((int)igNonRefCountedAttrList_register);
}
void igNonRefCountedAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igNonRefCountedAttrList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedAttrList_getMetaCall,(int)igNonRefCountedAttrList_className,20,(int)igNonRefCountedAttrList_vtableRead,0,0,(int)igNonRefCountedAttrList_dependencies);
}
void *igNonRefCountedAttrList_getMetaCall(){return igNonRefCountedAttrList_getMeta();}
void *igAttrList_create(void *object){
 igAttrList_arkRegister();
 return meta_createInstance(igAttrList_meta,object);
}
void *fn_800BB61C(){
 if(!igAttrList_meta) igAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrList_meta;
}
void *igAttrList_getMeta(){
 if(!igAttrList_meta || !(reinterpret_cast<unsigned int *>(igAttrList_meta)[0x24/4]&4)) igAttrList_arkRegister();
 return igAttrList_meta;
}
void *igAttrList_vtableRead(){
 UnknownGenObject800BB694_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047D768;
 object.unknown00=igAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrList_arkRegister(){
 meta_registerNow((int)igAttrList_register);
}
void igAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAttrList_getMetaCall,(int)igAttrList_className,20,(int)igAttrList_vtableRead,0,0,(int)igAttrList_dependencies);
}
void *igAttrList_getMetaCall(){return igAttrList_getMeta();}
void *fn_800BB7B8(){
 if(!igAttr_meta) igAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttr_meta;
}
void *igAttr_getMeta(){
 if(!igAttr_meta || !(reinterpret_cast<unsigned int *>(igAttr_meta)[0x24/4]&4)) igAttr_arkRegister();
 return igAttr_meta;
}
void igAttr_arkRegister(){
 meta_registerNow((int)igAttr_register);
}
void igAttr_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igAttr_meta,(int)igObject_register,(int)fn_800237D0,(int)igAttr_getMetaCall,(int)lbl_8055E6F0,12,0,(int)igAttr_fieldInit,(int)fn_800BB970,0);
}
void *igAttr_getMetaCall(){return igAttr_getMeta();}
void igAttr_fieldInit(){
 void *value0=igAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igAttr_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_800711A8(value2,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 meta_setupFields(value0,igAttr_fieldNames,igAttr_fieldStorage,igAttr_fieldOffsets,value1);
}
void fn_800BB970(){
 fn_800BCB68();
 fn_80065DBC((int)fn_800BCC14);
}
void *igAlphaStateAttr_create(void *object){
 igAlphaStateAttr_arkRegister();
 return meta_createInstance(igAlphaStateAttr_meta,object);
}
void *fn_800BB9D4(){
 if(!igAlphaStateAttr_meta) igAlphaStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAlphaStateAttr_meta;
}
void *igAlphaStateAttr_getMeta(){
 if(!igAlphaStateAttr_meta || !(reinterpret_cast<unsigned int *>(igAlphaStateAttr_meta)[0x24/4]&4)) igAlphaStateAttr_arkRegister();
 return igAlphaStateAttr_meta;
}
void *igAlphaStateAttr_vtableRead(){
 UnknownGenObject800BBA4C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igAlphaStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAlphaStateAttr_arkRegister(){
 meta_registerNow((int)igAlphaStateAttr_register);
}
void igAlphaStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAlphaStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igAlphaStateAttr_getMetaCall,(int)igAlphaStateAttr_className,16,(int)igAlphaStateAttr_vtableRead,(int)igAlphaStateAttr_fieldInit,0,0);
}
void *igAlphaStateAttr_getMetaCall(){return igAlphaStateAttr_getMeta();}
void igAlphaStateAttr_fieldInit(){
 void *value0=igAlphaStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igAlphaStateAttr_fieldTypes,1);
 meta_setupFields(value0,igAlphaStateAttr_fieldNames,igAlphaStateAttr_fieldStorage,igAlphaStateAttr_fieldOffsets,value1);
}
void *igAlphaFunctionAttr_create(void *object){
 igAlphaFunctionAttr_arkRegister();
 return meta_createInstance(igAlphaFunctionAttr_meta,object);
}
void *igAlphaFunctionAttr_getMeta(){
 if(!igAlphaFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igAlphaFunctionAttr_meta)[0x24/4]&4)) igAlphaFunctionAttr_arkRegister();
 return igAlphaFunctionAttr_meta;
}
void *igAlphaFunctionAttr_vtableRead(){
 UnknownGenObject800BBC38_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igAlphaFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAlphaFunctionAttr_arkRegister(){
 meta_registerNow((int)igAlphaFunctionAttr_register);
}
void igAlphaFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAlphaFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igAlphaFunctionAttr_getMetaCall,(int)igAlphaFunctionAttr_className,20,(int)igAlphaFunctionAttr_vtableRead,(int)igAlphaFunctionAttr_fieldInit,0,0);
}
void *igAlphaFunctionAttr_getMetaCall(){return igAlphaFunctionAttr_getMeta();}
void igAlphaFunctionAttr_fieldInit(){
 void *value0=igAlphaFunctionAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igAlphaFunctionAttr_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E748);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDDF0;
 meta_setupFields(value0,igAlphaFunctionAttr_fieldNames,igAlphaFunctionAttr_fieldStorage,igAlphaFunctionAttr_fieldOffsets,value1);
}
void *igTextureSwapTableAttr_create(void *object){
 igTextureSwapTableAttr_arkRegister();
 return meta_createInstance(igTextureSwapTableAttr_meta,object);
}
void *igTextureSwapTableAttr_getMeta(){
 if(!igTextureSwapTableAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureSwapTableAttr_meta)[0x24/4]&4)) igTextureSwapTableAttr_arkRegister();
 return igTextureSwapTableAttr_meta;
}
void *igTextureSwapTableAttr_vtableRead(){
 UnknownGenObject800BBE48_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureSwapTableAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSwapTableAttr_arkRegister(){
 meta_registerNow((int)igTextureSwapTableAttr_register);
}
void igTextureSwapTableAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureSwapTableAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapTableAttr_getMetaCall,(int)igTextureSwapTableAttr_className,28,(int)igTextureSwapTableAttr_vtableRead,(int)igTextureSwapTableAttr_fieldInit,0,0);
}
void *igTextureSwapTableAttr_getMetaCall(){return igTextureSwapTableAttr_getMeta();}
}
#pragma pop
