#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void *fn_800D1B98();
void igContextExt_register();
void *igGamecubeMultiTextureExt_getMeta();
void igObject_register();
extern char igMultiTextureExt_className[];
extern char igLineWidthExt_className[];
extern char igIndexArray_className[];
extern char igLineWidthExt_fieldTypes[4];
extern char igLineWidthExt_fieldNames[4];
extern char igLineWidthExt_fieldStorage[4];
extern char igLineWidthExt_fieldOffsets[4];
extern char igIndexArray_dependencies[8];
extern void *lbl_805621F4;
extern void *igMultiTextureExt_meta;
extern void *igLineWidthExt_meta;
extern void *igIndexArray_meta;
extern char lbl_805668C8[4];
void *igMultiTextureExt_getMeta();
void igMultiTextureExt_arkRegister();
void igMultiTextureExt_register();
void *igMultiTextureExt_getMetaCall();
void *fn_800D1890();
void *igGamecubeMultiTextureExt_getMetaCall();
void *igLineWidthExt_getMeta();
void igLineWidthExt_arkRegister();
void igLineWidthExt_register();
void *igLineWidthExt_getMetaCall();
void igLineWidthExt_fieldInit();
void *igIndexArray_getMeta();
void igIndexArray_arkRegister();
void igIndexArray_register();
void *igIndexArray_getMetaCall();
}
extern "C" {
void *fn_800D1A68(){
 if(!igIndexArray_meta) igIndexArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igIndexArray_meta;
}
}
#pragma pop
