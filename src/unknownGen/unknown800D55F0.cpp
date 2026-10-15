#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_800D5128();
void fn_800D575C();
void *igCustomMatrixState_getMeta();
void igCustomMatrixState_vtableRead();
void igCustomState_register();
void igObject_register();
extern char igCustomMatrixState_className[];
extern char igClut_vtable[];
extern char igCustomMatrixState_fieldTypes[4];
extern char igCustomMatrixState_fieldNames[4];
extern char igCustomMatrixState_fieldStorage[4];
extern char igCustomMatrixState_fieldOffsets[4];
extern char lbl_8055ECF8[7];
extern void *lbl_805621F4;
extern void *igCustomMatrixState_meta;
extern void *igClut_meta;
void igCustomMatrixState_register();
void *igCustomMatrixState_getMetaCall();
void igCustomMatrixState_fieldInit();
void *igClut_getMeta();
void *igClut_vtableRead();
void igClut_arkRegister();
void igClut_register();
void *igClut_getMetaCall();
}
struct UnknownGenObject800D5668_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800D55F0(){
 if(!igClut_meta) igClut_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClut_meta;
}
}
#pragma pop
