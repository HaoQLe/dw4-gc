#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CAEE0();
void *igGamecubeController_getMeta();
void *igGamecubeWindow_fieldInit();
void *igGamecubeWindow_getMetaCall();
void igWindow_register();
extern char igGamecubeWindow_className[];
extern char igGamecubeWindow_vtable[];
extern char lbl_80480690[];
extern char lbl_80480E60[];
extern char igGamecubeWindow_dependencies[8];
extern void *igWindow_meta;
extern void *igGamecubeWindow_meta;
void *igGamecubeWindow_vtableRead();
void igGamecubeWindow_arkRegister();
void igGamecubeWindow_register();
void *igGamecubeWindow_parentMeta();
}
struct UnknownGenRoot800CBCD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBCD8(){igObject_construct(this);}
};
struct UnknownGenObject800CBCD8 : UnknownGenRoot800CBCD8 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[8];
 UnknownGenString unknown24;
 char unknown28[8];
 inline ~UnknownGenObject800CBCD8(){unknown00=igGamecubeWindow_vtable;}
};
extern "C" {
void *igGamecubeWindow_parentMeta(){return igWindow_meta;}
}
#pragma pop
