#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void fn_80286008(void *,short);
void igInsightCore_registerNow();
void igObjectList_register();
void igObject_register();
void *igSerialScheduler_getMetaCall();
extern char igInsightScheduler_className[];
extern char igInsightPluginList_className[];
extern char igInsightPlugin_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804CB110[];
extern char igInsightPluginList_vtable[];
extern char lbl_804CB604[];
extern char igInsightCore_vtable[];
extern void *igInsightScheduler_meta;
extern void *igInsightPluginList_meta;
extern void *igInsightPlugin_meta;
extern void *igInsightCore_meta;
extern void *lbl_805621F4;
void *igInsightScheduler_getMeta();
void igInsightScheduler_registerNow();
void igInsightScheduler_register();
void *igInsightScheduler_getMetaCall();
void *fn_80285BB4();
void *igInsightPluginList_getMeta();
void *igInsightPluginList_vtableRead();
void igInsightPluginList_registerNow();
void igInsightPluginList_register();
void *igInsightPluginList_getMetaCall();
void *igInsightPlugin_getMeta();
void igInsightPlugin_registerNow();
void igInsightPlugin_register();
void *igInsightPlugin_getMetaCall();
}
struct UnknownGenObject80285C70_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80285F7C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 char unknown34[52];
 int unknown68;
 char unknown6C[4];
};
extern "C" {
void *igInsightScheduler_metaObject(){
 if(!igInsightScheduler_meta) igInsightScheduler_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInsightScheduler_meta;
}
void *igInsightScheduler_getMeta(){
 if(!igInsightScheduler_meta || !(reinterpret_cast<unsigned int *>(igInsightScheduler_meta)[0x24/4]&4)) igInsightScheduler_registerNow();
 return igInsightScheduler_meta;
}
void igInsightScheduler_registerNow(){
 meta_registerNow((int)igInsightScheduler_register);
}
void igInsightScheduler_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igInsightScheduler_meta,(int)igObject_register,(int)fn_800237D0,(int)igInsightScheduler_getMetaCall,(int)igInsightScheduler_className,8,0,(int)fn_80285BB4,0,0);
}
void *igInsightScheduler_getMetaCall(){return igInsightScheduler_getMeta();}
void *fn_80285BB4(){
 void *value0=igInsightScheduler_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igSerialScheduler_getMetaCall;
 return value0;
}
void *igInsightPluginList_metaObject(){
 if(!igInsightPluginList_meta) igInsightPluginList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInsightPluginList_meta;
}
void *igInsightPluginList_getMeta(){
 if(!igInsightPluginList_meta || !(reinterpret_cast<unsigned int *>(igInsightPluginList_meta)[0x24/4]&4)) igInsightPluginList_registerNow();
 return igInsightPluginList_meta;
}
void *igInsightPluginList_vtableRead(){
 UnknownGenObject80285C70_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CB604;
 object.unknown00=igInsightPluginList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInsightPluginList_registerNow(){
 meta_registerNow((int)igInsightPluginList_register);
}
void igInsightPluginList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igInsightPluginList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igInsightPluginList_getMetaCall,(int)igInsightPluginList_className,20,(int)igInsightPluginList_vtableRead,0,0,(int)lbl_804CB110);
}
void *igInsightPluginList_getMetaCall(){return igInsightPluginList_getMeta();}
void *igInsightPlugin_getMeta(){
 if(!igInsightPlugin_meta || !(reinterpret_cast<unsigned int *>(igInsightPlugin_meta)[0x24/4]&4)) igInsightPlugin_registerNow();
 return igInsightPlugin_meta;
}
void igInsightPlugin_registerNow(){
 meta_registerNow((int)igInsightPlugin_register);
}
void igInsightPlugin_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igInsightPlugin_meta,(int)igObject_register,(int)fn_800237D0,(int)igInsightPlugin_getMetaCall,(int)igInsightPlugin_className,8,0,0,0,0);
}
void *igInsightPlugin_getMetaCall(){return igInsightPlugin_getMeta();}
void *igInsightCore_create(void *object){
 igInsightCore_registerNow();
 return meta_createInstance(igInsightCore_meta,object);
}
void *igInsightCore_metaObject(){
 if(!igInsightCore_meta) igInsightCore_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInsightCore_meta;
}
void *igInsightCore_getMeta(){
 if(!igInsightCore_meta || !(reinterpret_cast<unsigned int *>(igInsightCore_meta)[0x24/4]&4)) igInsightCore_registerNow();
 return igInsightCore_meta;
}
void *igInsightCore_vtableRead(){
 UnknownGenObject80285F7C object;
 fn_8006665C(&object);
 object.unknown00=igInsightCore_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown68=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80286008(&object,-1);
 return result;
}
}
#pragma pop
