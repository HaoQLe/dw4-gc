#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igInsightScheduler_register();
void igNamedObject_register();
void igObjectList_register();
void igSerialScheduler_fieldInit();
extern char igTriggerableList_className[];
extern char igTriggerable_className[];
extern char igSerialScheduler_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804CAFD8[];
extern char lbl_804CB040[];
extern char lbl_804CB9E8[];
extern char igTriggerableList_vtable[];
extern char lbl_804CBC50[];
extern char igSerialScheduler_vtable[];
extern void *igTriggerableList_meta;
extern void *igTriggerable_meta;
extern void *igSerialScheduler_meta;
extern void *igMessage_meta;
extern void *igInsightScheduler_meta;
extern void *igInfoManager_meta;
void *igTriggerableList_getMeta();
void *igTriggerableList_vtableRead();
void igTriggerableList_registerNow();
void igTriggerableList_register();
void *igTriggerableList_getMetaCall();
void *igTriggerable_getMeta();
void igTriggerable_registerNow();
void igTriggerable_register();
void *igTriggerable_getMetaCall();
void *igSerialScheduler_getMeta();
void *igSerialScheduler_vtableRead();
void igSerialScheduler_registerNow();
void igSerialScheduler_register();
void *igSerialScheduler_getMetaCall();
void *igSerialScheduler_parentMeta();
}
struct UnknownGenObject80284314_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802845AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802845AC(){igObject_construct(this);}
};
struct UnknownGenObject802845AC : UnknownGenRoot802845AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802845AC(){unknown00=igSerialScheduler_vtable;}
};
extern "C" {
void *igTriggerableList_getMeta(){
 if(!igTriggerableList_meta || !(reinterpret_cast<unsigned int *>(igTriggerableList_meta)[0x24/4]&4)) igTriggerableList_registerNow();
 return igTriggerableList_meta;
}
void *igTriggerableList_vtableRead(){
 UnknownGenObject80284314_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CBC50;
 object.unknown00=igTriggerableList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTriggerableList_registerNow(){
 meta_registerNow((int)igTriggerableList_register);
}
void igTriggerableList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igTriggerableList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTriggerableList_getMetaCall,(int)igTriggerableList_className,20,(int)igTriggerableList_vtableRead,0,0,(int)lbl_804CAFD8);
}
void *igTriggerableList_getMetaCall(){return igTriggerableList_getMeta();}
void *igTriggerable_getMeta(){
 if(!igTriggerable_meta || !(reinterpret_cast<unsigned int *>(igTriggerable_meta)[0x24/4]&4)) igTriggerable_registerNow();
 return igTriggerable_meta;
}
void igTriggerable_registerNow(){
 meta_registerNow((int)igTriggerable_register);
}
void igTriggerable_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igTriggerable_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igTriggerable_getMetaCall,(int)igTriggerable_className,12,0,0,0,0);
}
void *igTriggerable_getMetaCall(){return igTriggerable_getMeta();}
void *fn_80284540(){return igMessage_meta;}
void *fn_80284550(){return igInfoManager_meta;}
void *igSerialScheduler_getMeta(){
 if(!igSerialScheduler_meta || !(reinterpret_cast<unsigned int *>(igSerialScheduler_meta)[0x24/4]&4)) igSerialScheduler_registerNow();
 return igSerialScheduler_meta;
}
void *igSerialScheduler_vtableRead(){
 UnknownGenObject802845AC object;
 object.unknown00=lbl_804CB9E8;
 object.unknown00=igSerialScheduler_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSerialScheduler_registerNow(){
 meta_registerNow((int)igSerialScheduler_register);
}
void igSerialScheduler_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igSerialScheduler_meta,(int)igInsightScheduler_register,(int)igSerialScheduler_parentMeta,(int)igSerialScheduler_getMetaCall,(int)igSerialScheduler_className,16,(int)igSerialScheduler_vtableRead,(int)igSerialScheduler_fieldInit,0,(int)lbl_804CB040);
}
void *igSerialScheduler_getMetaCall(){return igSerialScheduler_getMeta();}
void *igSerialScheduler_parentMeta(){return igInsightScheduler_meta;}
}
#pragma pop
