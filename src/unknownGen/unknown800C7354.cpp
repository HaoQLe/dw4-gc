#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800C6F28();
void igAudioContext_register();
void igGamecubeAudioContext_fieldInit();
extern char igGamecubeAudioContext_dependencies[];
extern char igGamecubeAudioContext_className[];
extern char igGamecubeAudioContext_vtable[];
extern char lbl_8047EA3C[];
extern void *igAudioContext_meta;
extern void *igGamecubeAudioContext_meta;
void *igGamecubeAudioContext_getMetaCall();
void *igGamecubeAudioContext_getMeta();
void *igGamecubeAudioContext_vtableRead();
void igGamecubeAudioContext_arkRegister();
void igGamecubeAudioContext_register();
void *igGamecubeAudioContext_parentMeta();
}
struct UnknownGenRoot800C71A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800C71A8(){igObject_construct(this);}
};
struct UnknownGenObject800C71A8 : UnknownGenRoot800C71A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject800C71A8(){unknown00=igGamecubeAudioContext_vtable;}
};
extern "C" {
void *igGamecubeAudioContext_parentMeta(){return igAudioContext_meta;}
}
#pragma pop
