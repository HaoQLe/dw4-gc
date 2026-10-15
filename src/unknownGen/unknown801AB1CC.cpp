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
void *igTransformSourceParameters_getMeta(){
 if(!igTransformSourceParameters_meta || !(reinterpret_cast<unsigned int *>(igTransformSourceParameters_meta)[0x24/4]&4)) igTransformSourceParameters_arkRegister();
 return igTransformSourceParameters_meta;
}
void igTransformSourceParameters_arkRegister(){
 meta_registerNow((int)igTransformSourceParameters_register);
}
void igTransformSourceParameters_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igTransformSourceParameters_meta,(int)igObject_register,(int)fn_800237D0,(int)igTransformSourceParameters_getMetaCall,(int)igTransformSourceParameters_className,8,0,0,0,0);
}
void *igTransformSourceParameters_getMetaCall(){return igTransformSourceParameters_getMeta();}
void *fn_801AB2B4(){
 if(!igTransformSource_meta) igTransformSource_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransformSource_meta;
}
void *igTransformSource_getMeta(){
 if(!igTransformSource_meta || !(reinterpret_cast<unsigned int *>(igTransformSource_meta)[0x24/4]&4)) igTransformSource_arkRegister();
 return igTransformSource_meta;
}
void igTransformSource_arkRegister(){
 meta_registerNow((int)igTransformSource_register);
}
void igTransformSource_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igTransformSource_meta,(int)igObject_register,(int)fn_800237D0,(int)igTransformSource_getMetaCall,(int)igTransformSource_className,8,0,0,0,0);
}
void *igTransformSource_getMetaCall(){return igTransformSource_getMeta();}
void *igTransformSequence1_5_create(void *object){
 igTransformSequence1_5_arkRegister();
 return meta_createInstance(igTransformSequence1_5_meta,object);
}
void *igTransformSequence1_5_getMeta(){
 if(!igTransformSequence1_5_meta || !(reinterpret_cast<unsigned int *>(igTransformSequence1_5_meta)[0x24/4]&4)) igTransformSequence1_5_arkRegister();
 return igTransformSequence1_5_meta;
}
}
#pragma pop
