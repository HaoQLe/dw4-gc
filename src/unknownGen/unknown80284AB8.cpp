#include <unknownGen.h>
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
void igMessageFilter_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igMessage_className[];
extern char igMessageReceiverList_className[];
extern char igMessageReceiver_className[];
extern char igMessageFilterList_className[];
extern char igMessageFilter_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804CB084[];
extern char lbl_804CB08C[];
extern char lbl_804CB094[];
extern char igMessageFilter_vtable[];
extern char igMessageFilterList_vtable[];
extern char lbl_804CB860[];
extern char igMessageReceiverList_vtable[];
extern char lbl_804CB928[];
extern char igMessage_vtable[];
extern void *igMessage_meta;
extern void *igMessageReceiverList_meta;
extern void *igMessageReceiver_meta;
extern void *igMessageFilterList_meta;
extern void *igMessageFilter_meta;
extern void *lbl_805621F4;
void *igMessage_getMeta();
void *igMessage_vtableRead();
void igMessage_registerNow();
void igMessage_register();
void *igMessage_getMetaCall();
void *igMessageReceiverList_getMeta();
void *igMessageReceiverList_vtableRead();
void igMessageReceiverList_registerNow();
void igMessageReceiverList_register();
void *igMessageReceiverList_getMetaCall();
void *igMessageReceiver_getMeta();
void igMessageReceiver_registerNow();
void igMessageReceiver_register();
void *igMessageReceiver_getMetaCall();
void *igMessageFilterList_getMeta();
void *igMessageFilterList_vtableRead();
void igMessageFilterList_registerNow();
void igMessageFilterList_register();
void *igMessageFilterList_getMetaCall();
void *igMessageFilter_getMeta();
void *igMessageFilter_vtableRead();
void igMessageFilter_registerNow();
void igMessageFilter_register();
void *igMessageFilter_getMetaCall();
}
struct UnknownGenObject80284B04_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject80284CA0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80284F6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80285128 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285128(){fn_8006665C(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=igMessageFilter_vtable;}
};
extern "C" {
void *igMessage_getMeta(){
 if(!igMessage_meta || !(reinterpret_cast<unsigned int *>(igMessage_meta)[0x24/4]&4)) igMessage_registerNow();
 return igMessage_meta;
}
void *igMessage_vtableRead(){
 UnknownGenObject80284B04_0 object;
 fn_8006665C(&object);
 object.unknown00=igMessage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessage_registerNow(){
 meta_registerNow((int)igMessage_register);
}
void igMessage_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessage_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessage_getMetaCall,(int)igMessage_className,8,(int)igMessage_vtableRead,0,0,0);
}
void *igMessage_getMetaCall(){return igMessage_getMeta();}
void *igMessageReceiverList_metaObject(){
 if(!igMessageReceiverList_meta) igMessageReceiverList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageReceiverList_meta;
}
void *igMessageReceiverList_getMeta(){
 if(!igMessageReceiverList_meta || !(reinterpret_cast<unsigned int *>(igMessageReceiverList_meta)[0x24/4]&4)) igMessageReceiverList_registerNow();
 return igMessageReceiverList_meta;
}
void *igMessageReceiverList_vtableRead(){
 UnknownGenObject80284CA0_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CB928;
 object.unknown00=igMessageReceiverList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageReceiverList_registerNow(){
 meta_registerNow((int)igMessageReceiverList_register);
}
void igMessageReceiverList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageReceiverList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMessageReceiverList_getMetaCall,(int)igMessageReceiverList_className,20,(int)igMessageReceiverList_vtableRead,0,0,(int)lbl_804CB084);
}
void *igMessageReceiverList_getMetaCall(){return igMessageReceiverList_getMeta();}
void *igMessageReceiver_getMeta(){
 if(!igMessageReceiver_meta || !(reinterpret_cast<unsigned int *>(igMessageReceiver_meta)[0x24/4]&4)) igMessageReceiver_registerNow();
 return igMessageReceiver_meta;
}
void igMessageReceiver_registerNow(){
 meta_registerNow((int)igMessageReceiver_register);
}
void igMessageReceiver_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igMessageReceiver_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessageReceiver_getMetaCall,(int)igMessageReceiver_className,8,0,0,0,0);
}
void *igMessageReceiver_getMetaCall(){return igMessageReceiver_getMeta();}
void *igMessageFilterList_metaObject(){
 if(!igMessageFilterList_meta) igMessageFilterList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageFilterList_meta;
}
void *igMessageFilterList_getMeta(){
 if(!igMessageFilterList_meta || !(reinterpret_cast<unsigned int *>(igMessageFilterList_meta)[0x24/4]&4)) igMessageFilterList_registerNow();
 return igMessageFilterList_meta;
}
void *igMessageFilterList_vtableRead(){
 UnknownGenObject80284F6C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CB860;
 object.unknown00=igMessageFilterList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageFilterList_registerNow(){
 meta_registerNow((int)igMessageFilterList_register);
}
void igMessageFilterList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageFilterList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMessageFilterList_getMetaCall,(int)igMessageFilterList_className,20,(int)igMessageFilterList_vtableRead,0,0,(int)lbl_804CB08C);
}
void *igMessageFilterList_getMetaCall(){return igMessageFilterList_getMeta();}
void *igMessageFilter_create(void *object){
 igMessageFilter_registerNow();
 return meta_createInstance(igMessageFilter_meta,object);
}
void *igMessageFilter_getMeta(){
 if(!igMessageFilter_meta || !(reinterpret_cast<unsigned int *>(igMessageFilter_meta)[0x24/4]&4)) igMessageFilter_registerNow();
 return igMessageFilter_meta;
}
void *igMessageFilter_vtableRead(){
 UnknownGenObject80285128 object;
 object.unknown00=igMessageFilter_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageFilter_registerNow(){
 meta_registerNow((int)igMessageFilter_register);
}
void igMessageFilter_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageFilter_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessageFilter_getMetaCall,(int)igMessageFilter_className,16,(int)igMessageFilter_vtableRead,(int)igMessageFilter_fieldInit,0,(int)lbl_804CB094);
}
void *igMessageFilter_getMetaCall(){return igMessageFilter_getMeta();}
}
#pragma pop
