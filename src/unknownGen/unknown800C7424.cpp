#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800C6F28();
void igDataList_register();
extern char igDataList_vtable[];
extern char igGamecubeAudioSourceList_className[];
extern char igGamecubeAudioSourceList_vtable[];
extern char lbl_8047EB58[];
extern void *lbl_805621F4;
extern void *igGamecubeAudioSourceList_meta;
void *igGamecubeAudioSourceList_getMeta();
void *igGamecubeAudioSourceList_vtableRead();
void igGamecubeAudioSourceList_arkRegister();
void igGamecubeAudioSourceList_register();
void *igGamecubeAudioSourceList_getMetaCall();
}
struct UnknownGenObject800C749C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800C7424(){
 if(!igGamecubeAudioSourceList_meta) igGamecubeAudioSourceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGamecubeAudioSourceList_meta;
}
}
#pragma pop
