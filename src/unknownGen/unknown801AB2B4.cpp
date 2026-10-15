#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igTransformSequence1_5_arkRegister();
void igObject_register();
extern char igTransformSourceParameters_className[];
extern char igTransformSource_className[];
extern void *lbl_805621F4;
extern void *igTransformSourceParameters_meta;
extern void *igTransformSource_meta;
extern void *igTransformSequence1_5_meta;
void *igTransformSourceParameters_getMeta();
void igTransformSourceParameters_arkRegister();
void igTransformSourceParameters_register();
void *igTransformSourceParameters_getMetaCall();
void *igTransformSource_getMeta();
void igTransformSource_arkRegister();
void igTransformSource_register();
void *igTransformSource_getMetaCall();
}
extern "C" {
void *fn_801AB2B4(){
 if(!igTransformSource_meta) igTransformSource_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransformSource_meta;
}
}
#pragma pop
