#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixStack_className[];
extern char igNonRefCountedMatrixObjectList_className[];
extern char igMatrixObjectList_className[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMatrixStack_create(void *object){
 igMatrixStack_arkRegister();
 return meta_createInstance(igMatrixStack_meta,object);
}
void *fn_80217B34(){
 if(!igMatrixStack_meta) igMatrixStack_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixStack_meta;
}
void *igMatrixStack_getMeta(){
 if(!igMatrixStack_meta || !(reinterpret_cast<unsigned int *>(igMatrixStack_meta)[0x24/4]&4)) igMatrixStack_arkRegister();
 return igMatrixStack_meta;
}
void *igMatrixStack_vtableRead(){
 UnknownGenObject80217BAC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_804BC4D4;
 object.unknown00=igMatrixStack_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMatrixStack_arkRegister(){
 meta_registerNow((int)igMatrixStack_register);
}
void igMatrixStack_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMatrixStack_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igMatrixStack_getMetaCall,(int)igMatrixStack_className,20,(int)igMatrixStack_vtableRead,(int)fn_80217CBC,0,0);
}
void *igMatrixStack_getMetaCall(){return igMatrixStack_getMeta();}
void fn_80217CBC(){
 void *meta=igMatrixStack_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011FFD8();
 field->unknown38=0;
 field->unknown1C=lbl_80565A50;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80217D78(){
 if(!igNonRefCountedMatrixObjectList_meta) igNonRefCountedMatrixObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedMatrixObjectList_meta;
}
void *igNonRefCountedMatrixObjectList_getMeta(){
 if(!igNonRefCountedMatrixObjectList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedMatrixObjectList_meta)[0x24/4]&4)) igNonRefCountedMatrixObjectList_arkRegister();
 return igNonRefCountedMatrixObjectList_meta;
}
void *igNonRefCountedMatrixObjectList_vtableRead(){
 UnknownGenObject80217DF0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804BC350;
 object.unknown00=igNonRefCountedMatrixObjectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedMatrixObjectList_arkRegister(){
 meta_registerNow((int)igNonRefCountedMatrixObjectList_register);
}
void igNonRefCountedMatrixObjectList_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igNonRefCountedMatrixObjectList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedMatrixObjectList_getMetaCall,(int)igNonRefCountedMatrixObjectList_className,20,(int)igNonRefCountedMatrixObjectList_vtableRead,0,0,(int)igNonRefCountedMatrixObjectList_dependencies);
}
void *igNonRefCountedMatrixObjectList_getMetaCall(){return igNonRefCountedMatrixObjectList_getMeta();}
void *igMatrixObjectList_create(void *object){
 igMatrixObjectList_arkRegister();
 return meta_createInstance(igMatrixObjectList_meta,object);
}
void *fn_80217F4C(){
 if(!igMatrixObjectList_meta) igMatrixObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixObjectList_meta;
}
void *igMatrixObjectList_getMeta(){
 if(!igMatrixObjectList_meta || !(reinterpret_cast<unsigned int *>(igMatrixObjectList_meta)[0x24/4]&4)) igMatrixObjectList_arkRegister();
 return igMatrixObjectList_meta;
}
void *igMatrixObjectList_vtableRead(){
 UnknownGenObject80217FC4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804BC288;
 object.unknown00=igMatrixObjectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMatrixObjectList_arkRegister(){
 meta_registerNow((int)igMatrixObjectList_register);
}
void igMatrixObjectList_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMatrixObjectList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMatrixObjectList_getMetaCall,(int)igMatrixObjectList_className,20,(int)igMatrixObjectList_vtableRead,0,0,(int)igMatrixObjectList_dependencies);
}
void *igMatrixObjectList_getMetaCall(){return igMatrixObjectList_getMeta();}
void *igMatrixObject_create(void *object){
 igMatrixObject_arkRegister();
 return meta_createInstance(igMatrixObject_meta,object);
}
void *fn_80218120(){
 if(!igMatrixObject_meta) igMatrixObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixObject_meta;
}
void *igMatrixObject_getMeta(){
 if(!igMatrixObject_meta || !(reinterpret_cast<unsigned int *>(igMatrixObject_meta)[0x24/4]&4)) igMatrixObject_arkRegister();
 return igMatrixObject_meta;
}
}
#pragma pop
