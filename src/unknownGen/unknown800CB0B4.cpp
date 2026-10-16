#include <unknownGen.h>
#include <meta/igGamecubeAudioSourceList.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8004155C(void *,void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igEventProducer_register();
void *igGamecubeWindow_getMeta();
void *igInterfaceManager_fieldInit();
void igObject_register();
extern char lbl_8047EC18[];
extern char igWindow_className[];
extern char igInterfaceManager_className[];
extern char igInterfaceManager_dependencies[8];
extern void *lbl_805621F4;
extern void *igAudioContext_meta;
extern void *lbl_80562B2C;
extern void *igGamecubeAudioContext_meta;
extern void *igGamecubeAudioSourceList_meta;
extern char lbl_80562B70[1];
extern char lbl_80562B71[1];
extern void *igWindow_meta;
extern void *lbl_80562B9C;
extern void *igInterfaceManager_meta;
extern void *igEventProducer_meta;
void fn_800CAEE0();
void *igWindow_getMeta();
void igWindow_arkRegister();
void igWindow_register();
void *igWindow_getMetaCall();
void *fn_800CB078();
void *fn_800CB080();
void *igGamecubeWindow_getMetaCall();
void *igInterfaceManager_getMeta();
void igInterfaceManager_arkRegister();
void igInterfaceManager_register();
void *igInterfaceManager_getMetaCall();
}
extern "C" {
void *fn_800CB0B4(){
 char *data=lbl_8047EC18;
 if(!lbl_80562B9C) lbl_80562B9C=fn_800635C8(data+0x72C,data+0x3E4,data+0x588,0x69);
 return lbl_80562B9C;
}
}
#pragma pop
