#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *igFilterMessageDispatcher_getMetaCall();
void igMessageDefaultReceiver_fieldInit();
void igMessageReceiver_register();
void igObject_register();
extern char igMessageDispatcher_className[];
extern char igMessageDefaultReceiver_className[];
extern char lbl_804CB0E8[];
extern char lbl_804CB6C8[];
extern char igMessageDefaultReceiver_vtable[];
extern void *igMessageReceiver_meta;
extern void *igMessageDispatcher_meta;
extern void *igMessageDefaultReceiver_meta;
extern void *lbl_805621F4;
void *igMessageDispatcher_getMeta();
void igMessageDispatcher_registerNow();
void igMessageDispatcher_register();
void *igMessageDispatcher_getMetaCall();
void *fn_8028579C();
void *igMessageDefaultReceiver_getMeta();
void *igMessageDefaultReceiver_vtableRead();
void igMessageDefaultReceiver_registerNow();
void igMessageDefaultReceiver_register();
void *igMessageDefaultReceiver_getMetaCall();
void *igMessageDefaultReceiver_parentMeta();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){igObject_construct(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=igMessageDefaultReceiver_vtable;}
};
extern "C" {
void *igMessageDispatcher_metaObject(){
 if(!igMessageDispatcher_meta) igMessageDispatcher_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageDispatcher_meta;
}
void *igMessageDispatcher_getMeta(){
 if(!igMessageDispatcher_meta || !(reinterpret_cast<unsigned int *>(igMessageDispatcher_meta)[0x24/4]&4)) igMessageDispatcher_registerNow();
 return igMessageDispatcher_meta;
}
void igMessageDispatcher_registerNow(){
 meta_registerNow((int)igMessageDispatcher_register);
}
void igMessageDispatcher_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igMessageDispatcher_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessageDispatcher_getMetaCall,(int)igMessageDispatcher_className,8,0,(int)fn_8028579C,0,0);
}
void *igMessageDispatcher_getMetaCall(){return igMessageDispatcher_getMeta();}
void *fn_8028579C(){
 void *value0=igMessageDispatcher_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igFilterMessageDispatcher_getMetaCall;
 return value0;
}
void *igMessageDefaultReceiver_create(void *object){
 igMessageDefaultReceiver_registerNow();
 return meta_createInstance(igMessageDefaultReceiver_meta,object);
}
void *igMessageDefaultReceiver_getMeta(){
 if(!igMessageDefaultReceiver_meta || !(reinterpret_cast<unsigned int *>(igMessageDefaultReceiver_meta)[0x24/4]&4)) igMessageDefaultReceiver_registerNow();
 return igMessageDefaultReceiver_meta;
}
void *igMessageDefaultReceiver_vtableRead(){
 UnknownGenObject80285844 object;
 object.unknown00=lbl_804CB6C8;
 object.unknown00=igMessageDefaultReceiver_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageDefaultReceiver_registerNow(){
 meta_registerNow((int)igMessageDefaultReceiver_register);
}
void igMessageDefaultReceiver_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageDefaultReceiver_meta,(int)igMessageReceiver_register,(int)igMessageDefaultReceiver_parentMeta,(int)igMessageDefaultReceiver_getMetaCall,(int)igMessageDefaultReceiver_className,24,(int)igMessageDefaultReceiver_vtableRead,(int)igMessageDefaultReceiver_fieldInit,0,(int)lbl_804CB0E8);
}
void *igMessageDefaultReceiver_getMetaCall(){return igMessageDefaultReceiver_getMeta();}
void *igMessageDefaultReceiver_parentMeta(){return igMessageReceiver_meta;}
}
#pragma pop
