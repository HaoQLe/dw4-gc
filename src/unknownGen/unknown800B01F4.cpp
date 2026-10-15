#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
extern char lbl_8055E128[4];
extern char lbl_8055E12C[4];
extern char lbl_8055E130[4];
extern char lbl_8055E134[4];
extern void *lbl_805621F4;
extern void *igStencilStateAttr_meta;
extern void *igStencilFunctionAttr_meta;
void *igStencilStateAttr_getMeta();
void *igStencilStateAttr_vtableRead();
void igStencilStateAttr_registerNow();
void igStencilStateAttr_register();
void *igStencilStateAttr_getMetaCall();
void igStencilStateAttr_fieldInit();
void *igStencilFunctionAttr_getMeta();
void *igStencilFunctionAttr_vtableRead();
void igStencilFunctionAttr_registerNow();
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
void *igStencilStateAttr_create(void *object){
 igStencilStateAttr_registerNow();
 return meta_createInstance(igStencilStateAttr_meta,object);
}
void *fn_800B022C(){
 if(!igStencilStateAttr_meta) igStencilStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStencilStateAttr_meta;
}
void *igStencilStateAttr_getMeta(){
 if(!igStencilStateAttr_meta || !(reinterpret_cast<unsigned int *>(igStencilStateAttr_meta)[0x24/4]&4)) igStencilStateAttr_registerNow();
 return igStencilStateAttr_meta;
}
void *igStencilStateAttr_vtableRead(){
 UnknownGenObject800B02A4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igStencilStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStencilStateAttr_registerNow(){
 meta_registerNow((int)igStencilStateAttr_register);
}
void igStencilStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igStencilStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilStateAttr_getMetaCall,(int)igStencilStateAttr_className,16,(int)igStencilStateAttr_vtableRead,(int)igStencilStateAttr_fieldInit,0,0);
}
void *igStencilStateAttr_getMetaCall(){return igStencilStateAttr_getMeta();}
void igStencilStateAttr_fieldInit(){
 void *value0=igStencilStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E128,1);
 fn_800659C0(value0,lbl_8055E12C,lbl_8055E130,lbl_8055E134,value1);
}
void *igStencilFunctionAttr_create(void *object){
 igStencilFunctionAttr_registerNow();
 return meta_createInstance(igStencilFunctionAttr_meta,object);
}
void *igStencilFunctionAttr_getMeta(){
 if(!igStencilFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igStencilFunctionAttr_meta)[0x24/4]&4)) igStencilFunctionAttr_registerNow();
 return igStencilFunctionAttr_meta;
}
void *igStencilFunctionAttr_vtableRead(){
 UnknownGenObject800B0490_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igStencilFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStencilFunctionAttr_registerNow(){
 meta_registerNow((int)igStencilFunctionAttr_register);
}
void igStencilFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igStencilFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilFunctionAttr_getMetaCall,(int)igStencilFunctionAttr_className,40,(int)igStencilFunctionAttr_vtableRead,(int)igStencilFunctionAttr_fieldInit,0,0);
}
void *igStencilFunctionAttr_getMetaCall(){return igStencilFunctionAttr_getMeta();}
}
#pragma pop
