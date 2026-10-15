#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
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
void igClearAttr_fieldInit();
void igVisualAttribute_register();
extern char igClippingStateAttr_className[];
extern char igClearAttr_className[];
extern char igClippingStateAttr_vtable[];
extern char igClearAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E610[4];
extern char lbl_8055E614[4];
extern char lbl_8055E618[4];
extern char lbl_8055E61C[4];
extern void *lbl_805621F4;
extern void *igClippingStateAttr_meta;
extern void *igClearAttr_meta;
void *igClippingStateAttr_getMeta();
void *igClippingStateAttr_vtableRead();
void igClippingStateAttr_registerNow();
void igClippingStateAttr_register();
void *igClippingStateAttr_getMetaCall();
void igClippingStateAttr_fieldInit();
void *igClearAttr_getMeta();
void *igClearAttr_vtableRead();
void igClearAttr_registerNow();
void igClearAttr_register();
void *igClearAttr_getMetaCall();
}
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9590(){
 if(!igClippingStateAttr_meta) igClippingStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClippingStateAttr_meta;
}
void *igClippingStateAttr_getMeta(){
 if(!igClippingStateAttr_meta || !(reinterpret_cast<unsigned int *>(igClippingStateAttr_meta)[0x24/4]&4)) igClippingStateAttr_registerNow();
 return igClippingStateAttr_meta;
}
void *igClippingStateAttr_vtableRead(){
 UnknownGenObject800B9608_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igClippingStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igClippingStateAttr_registerNow(){
 meta_registerNow((int)igClippingStateAttr_register);
}
void igClippingStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igClippingStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igClippingStateAttr_getMetaCall,(int)igClippingStateAttr_className,16,(int)igClippingStateAttr_vtableRead,(int)igClippingStateAttr_fieldInit,0,0);
}
void *igClippingStateAttr_getMetaCall(){return igClippingStateAttr_getMeta();}
void igClippingStateAttr_fieldInit(){
 void *meta=igClippingStateAttr_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055E610,1);
 fn_8003EC68(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055E614,lbl_8055E618,lbl_8055E61C,field);
}
void *igClearAttr_create(void *object){
 igClearAttr_registerNow();
 return meta_createInstance(igClearAttr_meta,object);
}
void *igClearAttr_getMeta(){
 if(!igClearAttr_meta || !(reinterpret_cast<unsigned int *>(igClearAttr_meta)[0x24/4]&4)) igClearAttr_registerNow();
 return igClearAttr_meta;
}
void *igClearAttr_vtableRead(){
 UnknownGenObject800B9808_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igClearAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igClearAttr_registerNow(){
 meta_registerNow((int)igClearAttr_register);
}
void igClearAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igClearAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igClearAttr_getMetaCall,(int)igClearAttr_className,72,(int)igClearAttr_vtableRead,(int)igClearAttr_fieldInit,0,0);
}
void *igClearAttr_getMetaCall(){return igClearAttr_getMeta();}
}
#pragma pop
