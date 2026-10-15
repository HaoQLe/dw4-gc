#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AB984();
void igTransformSequence1_5_fieldInit();
void *igTransformSequence1_5_getMeta();
void igTransformSequence1_5_vtableRead();
void igTransformSequence_register();
extern char igTransformSequence1_5_dependencies[];
extern char igTransformSequence1_5_className[];
extern void *igTransformSequence1_5_meta;
extern void *igTransformSequence_meta;
void igTransformSequence1_5_register();
void *igTransformSequence1_5_getMetaCall();
void *igTransformSequence1_5_parentMeta();
}
extern "C" {
void igTransformSequence1_5_arkRegister(){
 meta_registerNow((int)igTransformSequence1_5_register);
}
void igTransformSequence1_5_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransformSequence1_5_meta,(int)igTransformSequence_register,(int)igTransformSequence1_5_parentMeta,(int)igTransformSequence1_5_getMetaCall,(int)igTransformSequence1_5_className,104,(int)igTransformSequence1_5_vtableRead,(int)igTransformSequence1_5_fieldInit,(int)fn_801AB984,(int)igTransformSequence1_5_dependencies);
}
void *igTransformSequence1_5_getMetaCall(){return igTransformSequence1_5_getMeta();}
void *igTransformSequence1_5_parentMeta(){return igTransformSequence_meta;}
}
#pragma pop
