#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char igVectorConstantAttr_className[];
extern char igTimeAttr_className[];
extern char igVectorConstantAttr_vtable[];
extern char igTimeAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVectorConstantAttr_fieldTypes[8];
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igVectorConstantAttr_meta;
extern void *igTimeAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void igVectorConstantAttr_arkRegister();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void igTimeAttr_arkRegister();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD574(){
 if(!igVectorConstantAttr_meta) igVectorConstantAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVectorConstantAttr_meta;
}
void *igVectorConstantAttr_getMeta(){
 if(!igVectorConstantAttr_meta || !(reinterpret_cast<unsigned int *>(igVectorConstantAttr_meta)[0x24/4]&4)) igVectorConstantAttr_arkRegister();
 return igVectorConstantAttr_meta;
}
void *igVectorConstantAttr_vtableRead(){
 UnknownGenObject800AD5EC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CD74;
 object.unknown00=igVectorConstantAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVectorConstantAttr_arkRegister(){
 meta_registerNow((int)igVectorConstantAttr_register);
}
void igVectorConstantAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVectorConstantAttr_meta,(int)igCustomStateCollectionAttr_register,(int)fn_800AD708,(int)igVectorConstantAttr_getMetaCall,(int)igVectorConstantAttr_className,32,(int)igVectorConstantAttr_vtableRead,(int)igVectorConstantAttr_fieldInit,0,0);
}
void *igVectorConstantAttr_getMetaCall(){return igVectorConstantAttr_getMeta();}
void *fn_800AD708(){return igCustomStateCollectionAttr_meta;}
void igVectorConstantAttr_fieldInit(){
 void *value0=igVectorConstantAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igVectorConstantAttr_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C4BF8;
 meta_setupFields(value0,igVectorConstantAttr_fieldNames,igVectorConstantAttr_fieldStorage,igVectorConstantAttr_fieldOffsets,value1);
}
void *igTimeAttr_create(void *object){
 igTimeAttr_arkRegister();
 return meta_createInstance(igTimeAttr_meta,object);
}
void *fn_800AD7C8(){
 if(!igTimeAttr_meta) igTimeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimeAttr_meta;
}
void *igTimeAttr_getMeta(){
 if(!igTimeAttr_meta || !(reinterpret_cast<unsigned int *>(igTimeAttr_meta)[0x24/4]&4)) igTimeAttr_arkRegister();
 return igTimeAttr_meta;
}
void *igTimeAttr_vtableRead(){
 UnknownGenObject800AD840_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTimeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTimeAttr_arkRegister(){
 meta_registerNow((int)igTimeAttr_register);
}
void igTimeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTimeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTimeAttr_getMetaCall,(int)igTimeAttr_className,24,(int)igTimeAttr_vtableRead,(int)igTimeAttr_fieldInit,0,0);
}
void *igTimeAttr_getMetaCall(){return igTimeAttr_getMeta();}
}
#pragma pop
