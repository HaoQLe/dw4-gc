#include <unknownGen.h>
#include <meta/igMessageFilter.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80068128(void *,void *);
void *fn_8010DF8C();
void fn_80284294();
void igRenderer_register();
extern char igFlushRenderer_className[];
extern char lbl_80497C9C[];
extern char igFlushRenderer_vtable[];
extern void *igTriggerableList_meta;
extern void *igTriggerable_meta;
extern void *lbl_80515C5C;
extern void *igMessenger_meta;
extern void *igMessage_meta;
extern void *igMessageReceiverList_meta;
extern void *igMessageReceiver_meta;
extern void *igMessageFilterList_meta;
extern void *igMessageFilter_meta;
extern void *igMessageDispatcher_meta;
extern void *lbl_80515CBC;
extern void *igInsightScheduler_meta;
extern void *igInsightPluginList_meta;
extern void *igInsightPlugin_meta;
extern void *igViewportResizedMessage_meta;
extern void *igInfoManagerOrderedList_meta;
extern void *igInfoManagerList_meta;
extern void *igInfoManager_meta;
extern void *igFlushRenderer_meta;
extern void *lbl_805621F4;
void *igFlushRenderer_getMeta();
void *igFlushRenderer_vtableRead();
void igFlushRenderer_registerNow();
void igFlushRenderer_register();
void *igFlushRenderer_getMetaCall();
}
struct UnknownGenRoot802870EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802870EC(){fn_8006665C(this);}
};
struct UnknownGenObject802870EC_0 : UnknownGenRoot802870EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802870EC_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject802870EC : UnknownGenObject802870EC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802870EC(){unknown00=igFlushRenderer_vtable;}
};
extern "C" {
void *igFlushRenderer_metaObject(){
 if(!igFlushRenderer_meta) igFlushRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFlushRenderer_meta;
}
void *igFlushRenderer_getMeta(){
 if(!igFlushRenderer_meta || !(reinterpret_cast<unsigned int *>(igFlushRenderer_meta)[0x24/4]&4)) igFlushRenderer_registerNow();
 return igFlushRenderer_meta;
}
void *igFlushRenderer_vtableRead(){
 UnknownGenObject802870EC object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igFlushRenderer_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFlushRenderer_registerNow(){
 meta_registerNow((int)igFlushRenderer_register);
}
void igFlushRenderer_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igFlushRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igFlushRenderer_getMetaCall,(int)igFlushRenderer_className,12,(int)igFlushRenderer_vtableRead,0,0,0);
}
void *igFlushRenderer_getMetaCall(){return igFlushRenderer_getMeta();}
void *igInfoManagerList_virtual58(){return igInfoManagerList_meta;}
void *igInfoManagerOrderedList_virtual58(){return igInfoManagerOrderedList_meta;}
void *igViewportResizedMessage_virtual58(){return igViewportResizedMessage_meta;}
void *igInsightPluginList_virtual58(){return igInsightPluginList_meta;}
void *fn_8028727C(){return lbl_80515CBC;}
void fn_8028728C(){}
void *fn_80287290(){return igMessageReceiver_meta;}
void *fn_802872A0(){return igMessageDispatcher_meta;}
void *igMessageFilter_virtual58(){return igMessageFilter_meta;}
void igMessageFilter_virtual5C(int p0,int p1){
 fn_80068128((void *)p1,reinterpret_cast<Meta::igMessageFilter *>((void *)p0)->_msgType);
}
void *igMessageFilterList_virtual58(){return igMessageFilterList_meta;}
void *igMessageReceiverList_virtual58(){return igMessageReceiverList_meta;}
void *igMessenger_virtual58(){return igMessenger_meta;}
void *fn_8028731C(){return igInsightScheduler_meta;}
void *fn_8028732C(){return igInfoManager_meta;}
void *fn_8028733C(){return lbl_80515C5C;}
void *igMessage_virtual58(){return igMessage_meta;}
void *igTriggerableList_virtual58(){return igTriggerableList_meta;}
void *igInsightPluginList_virtual60(){return igInsightPlugin_meta;}
void *igMessageFilterList_virtual60(){return igMessageFilter_meta;}
void *igInfoManagerList_virtual60(){return igInfoManager_meta;}
void *igMessageReceiverList_virtual60(){return igMessageReceiver_meta;}
void *igTriggerableList_virtual60(){return igTriggerable_meta;}
}
#pragma pop
