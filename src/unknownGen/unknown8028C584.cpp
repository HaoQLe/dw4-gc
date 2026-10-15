#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C350();
void igNamedObject_register();
void igSearchSceneGraph_fieldInit();
void *igSearchSceneGraph_getMeta();
void igSearchSceneGraph_vtableRead();
extern char lbl_804CC118[];
extern char igSearchSceneGraph_className[];
extern void *igSearchSceneGraph_meta;
void *igSearchSceneGraph_getMetaCall();
}
extern "C" {
void igSearchSceneGraph_register(){
 fn_8028C350();
 meta_registerClass(0,(int)&igSearchSceneGraph_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSearchSceneGraph_getMetaCall,(int)igSearchSceneGraph_className,28,(int)igSearchSceneGraph_vtableRead,(int)igSearchSceneGraph_fieldInit,0,(int)lbl_804CC118);
}
void *igSearchSceneGraph_getMetaCall(){return igSearchSceneGraph_getMeta();}
}
#pragma pop
