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
void igObject_construct(void *);
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
extern char igMessageReceiverList_dependencies[];
extern char igMessageFilterList_dependencies[];
extern char igMessageFilter_dependencies[];
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
void igMessage_arkRegister();
void igMessage_register();
void *igMessage_getMetaCall();
void *igMessageReceiverList_getMeta();
void *igMessageReceiverList_vtableRead();
void igMessageReceiverList_arkRegister();
void igMessageReceiverList_register();
void *igMessageReceiverList_getMetaCall();
void *igMessageReceiver_getMeta();
void igMessageReceiver_arkRegister();
void igMessageReceiver_register();
void *igMessageReceiver_getMetaCall();
void *igMessageFilterList_getMeta();
void *igMessageFilterList_vtableRead();
void igMessageFilterList_arkRegister();
void igMessageFilterList_register();
void *igMessageFilterList_getMetaCall();
void *igMessageFilter_getMeta();
void *igMessageFilter_vtableRead();
void igMessageFilter_arkRegister();
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
 inline UnknownGenRoot80285128(){igObject_construct(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=igMessageFilter_vtable;}
};
extern "C" {
void *igMessageFilter_create(void *object){
 igMessageFilter_arkRegister();
 return meta_createInstance(igMessageFilter_meta,object);
}
void *igMessageFilter_getMeta(){
 if(!igMessageFilter_meta || !(reinterpret_cast<unsigned int *>(igMessageFilter_meta)[0x24/4]&4)) igMessageFilter_arkRegister();
 return igMessageFilter_meta;
}
void *igMessageFilter_vtableRead(){
 UnknownGenObject80285128 object;
 object.unknown00=igMessageFilter_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageFilter_arkRegister(){
 meta_registerNow((int)igMessageFilter_register);
}
void igMessageFilter_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageFilter_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessageFilter_getMetaCall,(int)igMessageFilter_className,16,(int)igMessageFilter_vtableRead,(int)igMessageFilter_fieldInit,0,(int)igMessageFilter_dependencies);
}
void *igMessageFilter_getMetaCall(){return igMessageFilter_getMeta();}
}
#pragma pop
