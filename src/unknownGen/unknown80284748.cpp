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
extern char igTriggerableList_dependencies[];
extern char igSerialScheduler_dependencies[];
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
void igTriggerableList_arkRegister();
void igTriggerableList_register();
void *igTriggerableList_getMetaCall();
void *igTriggerable_getMeta();
void igTriggerable_arkRegister();
void igTriggerable_register();
void *igTriggerable_getMetaCall();
void *igSerialScheduler_getMeta();
void *igSerialScheduler_vtableRead();
void igSerialScheduler_arkRegister();
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
void *igSerialScheduler_parentMeta(){return igInsightScheduler_meta;}
}
#pragma pop
