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
void igObject_construct(void *);
void fn_80284294();
void fn_80286008(void *,short);
void igInsightCore_arkRegister();
void igObjectList_register();
void igObject_register();
void *igSerialScheduler_getMetaCall();
extern char igInsightScheduler_className[];
extern char igInsightPluginList_className[];
extern char igInsightPlugin_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInsightPluginList_dependencies[];
extern char igInsightPluginList_vtable[];
extern char lbl_804CB604[];
extern char igInsightCore_vtable[];
extern void *igInsightScheduler_meta;
extern void *igInsightPluginList_meta;
extern void *igInsightPlugin_meta;
extern void *igInsightCore_meta;
extern void *lbl_805621F4;
void *igInsightScheduler_getMeta();
void igInsightScheduler_arkRegister();
void igInsightScheduler_register();
void *igInsightScheduler_getMetaCall();
void *fn_80285BB4();
void *igInsightPluginList_getMeta();
void *igInsightPluginList_vtableRead();
void igInsightPluginList_arkRegister();
void igInsightPluginList_register();
void *igInsightPluginList_getMetaCall();
void *igInsightPlugin_getMeta();
void igInsightPlugin_arkRegister();
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
void *fn_80285BB4(){
 void *value0=igInsightScheduler_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igSerialScheduler_getMetaCall;
 return value0;
}
}
#pragma pop
