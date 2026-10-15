#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igStencilFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igStencilStateAttr_className[];
extern char igStencilFunctionAttr_className[];
extern char igStencilStateAttr_vtable[];
extern char igStencilFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igStencilStateAttr_fieldTypes[4];
extern char igStencilStateAttr_fieldNames[4];
extern char igStencilStateAttr_fieldStorage[4];
extern char igStencilStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igStencilStateAttr_meta;
extern void *igStencilFunctionAttr_meta;
void *igStencilStateAttr_getMeta();
void *igStencilStateAttr_vtableRead();
void igStencilStateAttr_arkRegister();
void igStencilStateAttr_register();
void *igStencilStateAttr_getMetaCall();
void igStencilStateAttr_fieldInit();
void *igStencilFunctionAttr_getMeta();
void *igStencilFunctionAttr_vtableRead();
void igStencilFunctionAttr_arkRegister();
void igStencilFunctionAttr_register();
void *igStencilFunctionAttr_getMetaCall();
}
struct UnknownGenObject800B02A4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B0490_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igStencilFunctionAttr_create(void *object){
 igStencilFunctionAttr_arkRegister();
 return meta_createInstance(igStencilFunctionAttr_meta,object);
}
void *igStencilFunctionAttr_getMeta(){
 if(!igStencilFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igStencilFunctionAttr_meta)[0x24/4]&4)) igStencilFunctionAttr_arkRegister();
 return igStencilFunctionAttr_meta;
}
void *igStencilFunctionAttr_vtableRead(){
 UnknownGenObject800B0490_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igStencilFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStencilFunctionAttr_arkRegister(){
 meta_registerNow((int)igStencilFunctionAttr_register);
}
void igStencilFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igStencilFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilFunctionAttr_getMetaCall,(int)igStencilFunctionAttr_className,40,(int)igStencilFunctionAttr_vtableRead,(int)igStencilFunctionAttr_fieldInit,0,0);
}
void *igStencilFunctionAttr_getMetaCall(){return igStencilFunctionAttr_getMeta();}
}
#pragma pop
