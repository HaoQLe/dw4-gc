#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8003D160();
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
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D5D1C();
void igContextExt_register();
void igImageLoader_register();
void igObject_register();
extern char igCapabilityManager_className[];
extern char igBlendEquationExt_className[];
extern char igTgaLoader_className[];
extern char igTgaLoader_vtable[];
extern char lbl_8049304C[];
extern char lbl_804930AC[];
extern char lbl_8055ED20[4];
extern char lbl_8055ED24[4];
extern char lbl_8055ED28[4];
extern char lbl_8055ED2C[4];
extern char lbl_8055ED30[4];
extern char lbl_8055ED34[8];
extern void *lbl_805621F4;
extern void *igImageLoader_meta;
extern void *igCapabilityManager_meta;
extern void *igBlendEquationExt_meta;
extern void *igTgaLoader_meta;
void *igCapabilityManager_getMeta();
void igCapabilityManager_registerNow();
void igCapabilityManager_register();
void *igCapabilityManager_getMetaCall();
void *igBlendEquationExt_getMeta();
void igBlendEquationExt_registerNow();
void igBlendEquationExt_register();
void *igBlendEquationExt_getMetaCall();
void igBlendEquationExt_fieldInit();
void *igTgaLoader_getMeta();
void *igTgaLoader_vtableRead();
void igTgaLoader_registerNow();
void igTgaLoader_register();
void *igTgaLoader_getMetaCall();
void *igTgaLoader_parentMeta();
}
struct UnknownGenRoot800D5BB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5BB8(){igObject_construct(this);}
};
struct UnknownGenObject800D5BB8 : UnknownGenRoot800D5BB8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject800D5BB8(){unknown00=igTgaLoader_vtable;}
};
extern "C" {
void *fn_800D5868(){
 if(!igCapabilityManager_meta) igCapabilityManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCapabilityManager_meta;
}
void *igCapabilityManager_getMeta(){
 if(!igCapabilityManager_meta || !(reinterpret_cast<unsigned int *>(igCapabilityManager_meta)[0x24/4]&4)) igCapabilityManager_registerNow();
 return igCapabilityManager_meta;
}
void igCapabilityManager_registerNow(){
 meta_registerNow((int)igCapabilityManager_register);
}
void igCapabilityManager_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igCapabilityManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igCapabilityManager_getMetaCall,(int)igCapabilityManager_className,8,0,0,0,0);
}
void *igCapabilityManager_getMetaCall(){return igCapabilityManager_getMeta();}
void *fn_800D598C(){
 if(!igBlendEquationExt_meta) igBlendEquationExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendEquationExt_meta;
}
void *igBlendEquationExt_getMeta(){
 if(!igBlendEquationExt_meta || !(reinterpret_cast<unsigned int *>(igBlendEquationExt_meta)[0x24/4]&4)) igBlendEquationExt_registerNow();
 return igBlendEquationExt_meta;
}
void igBlendEquationExt_registerNow(){
 meta_registerNow((int)igBlendEquationExt_register);
}
void igBlendEquationExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igBlendEquationExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igBlendEquationExt_getMetaCall,(int)igBlendEquationExt_className,24,0,(int)igBlendEquationExt_fieldInit,0,0);
}
void *igBlendEquationExt_getMetaCall(){return igBlendEquationExt_getMeta();}
void igBlendEquationExt_fieldInit(){
 void *value0=igBlendEquationExt_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055ED20,1);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055ED30);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_8003D160;
 meta_setupFields(value0,lbl_8055ED24,lbl_8055ED28,lbl_8055ED2C,value1);
}
void *igTgaLoader_create(void *object){
 igTgaLoader_registerNow();
 return meta_createInstance(igTgaLoader_meta,object);
}
void *igTgaLoader_getMeta(){
 if(!igTgaLoader_meta || !(reinterpret_cast<unsigned int *>(igTgaLoader_meta)[0x24/4]&4)) igTgaLoader_registerNow();
 return igTgaLoader_meta;
}
void *igTgaLoader_vtableRead(){
 UnknownGenObject800D5BB8 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_8049304C;
 object.unknown00=igTgaLoader_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTgaLoader_registerNow(){
 meta_registerNow((int)igTgaLoader_register);
}
void igTgaLoader_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igTgaLoader_meta,(int)igImageLoader_register,(int)igTgaLoader_parentMeta,(int)igTgaLoader_getMetaCall,(int)igTgaLoader_className,48,(int)igTgaLoader_vtableRead,(int)fn_800D5D1C,0,(int)lbl_8055ED34);
}
void *igTgaLoader_getMetaCall(){return igTgaLoader_getMeta();}
void *igTgaLoader_parentMeta(){return igImageLoader_meta;}
}
#pragma pop
