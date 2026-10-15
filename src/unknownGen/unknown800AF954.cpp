#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
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
void igTexGenMatrixAttr_registerNow();
void fn_800CE04C();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igImageMipMapList_className[];
extern char igTextureAddressModeAttr_className[];
extern char igTextureAddressModeAttr_vtable[];
extern char lbl_8047D578[];
extern char igImageMipMapList_vtable[];
extern char lbl_8047E1F8[];
extern char lbl_8047E50C[];
extern char lbl_8055E0B0[8];
extern char lbl_8055E0B8[8];
extern char lbl_8055E0C0[8];
extern char lbl_8055E0C8[8];
extern char lbl_8055E0D0[8];
extern char lbl_8055E0D8[4];
extern void *lbl_805621F4;
extern void *igImageMipMapList_meta;
extern void *igTextureAddressModeAttr_meta;
extern void *igTexGenMatrixAttr_meta;
void *igImageMipMapList_getMeta();
void *igImageMipMapList_vtableRead();
void igImageMipMapList_registerNow();
void igImageMipMapList_register();
void *igImageMipMapList_getMetaCall();
void *igTextureAddressModeAttr_getMeta();
void *igTextureAddressModeAttr_vtableRead();
void igTextureAddressModeAttr_registerNow();
void igTextureAddressModeAttr_register();
void *igTextureAddressModeAttr_getMetaCall();
void igTextureAddressModeAttr_fieldInit();
}
struct UnknownGenObject800AF9CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AFB64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AF954(){
 if(!igImageMipMapList_meta) igImageMipMapList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igImageMipMapList_meta;
}
void *igImageMipMapList_getMeta(){
 if(!igImageMipMapList_meta || !(reinterpret_cast<unsigned int *>(igImageMipMapList_meta)[0x24/4]&4)) igImageMipMapList_registerNow();
 return igImageMipMapList_meta;
}
void *igImageMipMapList_vtableRead(){
 UnknownGenObject800AF9CC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047E1F8;
 object.unknown00=igImageMipMapList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igImageMipMapList_registerNow(){
 meta_registerNow((int)igImageMipMapList_register);
}
void igImageMipMapList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igImageMipMapList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igImageMipMapList_getMetaCall,(int)igImageMipMapList_className,20,(int)igImageMipMapList_vtableRead,0,0,(int)lbl_8055E0B0);
}
void *igImageMipMapList_getMetaCall(){return igImageMipMapList_getMeta();}
void *igTextureAddressModeAttr_create(void *object){
 igTextureAddressModeAttr_registerNow();
 return meta_createInstance(igTextureAddressModeAttr_meta,object);
}
void *igTextureAddressModeAttr_getMeta(){
 if(!igTextureAddressModeAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureAddressModeAttr_meta)[0x24/4]&4)) igTextureAddressModeAttr_registerNow();
 return igTextureAddressModeAttr_meta;
}
void *igTextureAddressModeAttr_vtableRead(){
 UnknownGenObject800AFB64_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureAddressModeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureAddressModeAttr_registerNow(){
 meta_registerNow((int)igTextureAddressModeAttr_register);
}
void igTextureAddressModeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureAddressModeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureAddressModeAttr_getMetaCall,(int)igTextureAddressModeAttr_className,20,(int)igTextureAddressModeAttr_vtableRead,(int)igTextureAddressModeAttr_fieldInit,0,0);
}
void *igTextureAddressModeAttr_getMetaCall(){return igTextureAddressModeAttr_getMeta();}
void igTextureAddressModeAttr_fieldInit(){
 void *value0=igTextureAddressModeAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E0B8,2);
 void *value2=meta_field(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80046E58(value3,lbl_8055E0D8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+52)=(void *)fn_800CE04C;
 meta_setupFields(value0,lbl_8055E0C0,lbl_8055E0C8,lbl_8055E0D0,value1);
}
void *fn_800AFD14(){
 if(!igTexGenMatrixAttr_meta) igTexGenMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTexGenMatrixAttr_meta;
}
void *igTexGenMatrixAttr_getMeta(){
 if(!igTexGenMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igTexGenMatrixAttr_meta)[0x24/4]&4)) igTexGenMatrixAttr_registerNow();
 return igTexGenMatrixAttr_meta;
}
}
#pragma pop
