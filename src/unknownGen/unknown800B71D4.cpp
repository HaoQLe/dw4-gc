#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void *fn_800AC294();
void igAttrDefaultManager_register();
void igFogAttr_fieldInit();
void igVisualAttribute_register();
extern char igGenericAttrDefaultManager_className[];
extern char igFogStateAttr_className[];
extern char igFogAttr_className[];
extern char igGenericAttrDefaultManager_vtable[];
extern char igFogStateAttr_vtable[];
extern char igFogAttr_vtable[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igFogStateAttr_fieldTypes[4];
extern char igFogStateAttr_fieldNames[4];
extern char igFogStateAttr_fieldStorage[4];
extern char igFogStateAttr_fieldOffsets[4];
extern void *igGenericAttrDefaultManager_meta;
extern void *igFogStateAttr_meta;
extern void *igFogAttr_meta;
void *igGenericAttrDefaultManager_getMeta();
void *igGenericAttrDefaultManager_vtableRead();
void igGenericAttrDefaultManager_arkRegister();
void igGenericAttrDefaultManager_register();
void *igGenericAttrDefaultManager_getMetaCall();
void *igFogStateAttr_getMeta();
void *igFogStateAttr_vtableRead();
void igFogStateAttr_arkRegister();
void igFogStateAttr_register();
void *igFogStateAttr_getMetaCall();
void igFogStateAttr_fieldInit();
void *igFogAttr_getMeta();
void *igFogAttr_vtableRead();
void igFogAttr_arkRegister();
void igFogAttr_register();
void *igFogAttr_getMetaCall();
}
struct UnknownGenObject800B6F24_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B705C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7210_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *igFogAttr_getMeta(){
 if(!igFogAttr_meta || !(reinterpret_cast<unsigned int *>(igFogAttr_meta)[0x24/4]&4)) igFogAttr_arkRegister();
 return igFogAttr_meta;
}
void *igFogAttr_vtableRead(){
 UnknownGenObject800B7210_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igFogAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFogAttr_arkRegister(){
 meta_registerNow((int)igFogAttr_register);
}
void igFogAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igFogAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogAttr_getMetaCall,(int)igFogAttr_className,44,(int)igFogAttr_vtableRead,(int)igFogAttr_fieldInit,0,0);
}
void *igFogAttr_getMetaCall(){return igFogAttr_getMeta();}
}
#pragma pop
