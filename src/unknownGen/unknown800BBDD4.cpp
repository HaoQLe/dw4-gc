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
