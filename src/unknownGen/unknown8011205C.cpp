#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igGeometryElement_fieldInit();
void igObject_register();
extern char lbl_80495200[];
extern char igGeometryElement_className[];
extern void *lbl_805621F4;
extern void *igGeometryElement_meta;
void *igGeometryElement_getMeta();
void igGeometryElement_registerNow();
void igGeometryElement_register();
void *igGeometryElement_getMetaCall();
}
extern "C" {
void *fn_8011205C(){
 if(!igGeometryElement_meta) igGeometryElement_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryElement_meta;
}
void *igGeometryElement_getMeta(){
 if(!igGeometryElement_meta || !(reinterpret_cast<unsigned int *>(igGeometryElement_meta)[0x24/4]&4)) igGeometryElement_registerNow();
 return igGeometryElement_meta;
}
void igGeometryElement_registerNow(){
 meta_registerNow((int)igGeometryElement_register);
}
void igGeometryElement_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igGeometryElement_meta,(int)igObject_register,(int)fn_800237D0,(int)igGeometryElement_getMetaCall,(int)igGeometryElement_className,44,0,(int)igGeometryElement_fieldInit,0,(int)lbl_80495200);
}
void *igGeometryElement_getMetaCall(){return igGeometryElement_getMeta();}
}
#pragma pop
