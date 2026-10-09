#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C350();
void igNamedObject_register();
void igSearchSceneGraph_fieldInit();
void *igSearchSceneGraph_getMeta();
void igSearchSceneGraph_vtableRead();
extern char lbl_804CC118[];
extern char lbl_804CC124[];
extern void *lbl_805660A0;
void *igSearchSceneGraph_getMetaCall();
}
extern "C" {
void igSearchSceneGraph_register(){
 fn_8028C350();
 fn_80066204(0,(int)&lbl_805660A0,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSearchSceneGraph_getMetaCall,(int)lbl_804CC124,28,(int)igSearchSceneGraph_vtableRead,(int)igSearchSceneGraph_fieldInit,0,(int)lbl_804CC118);
}
void *igSearchSceneGraph_getMetaCall(){return igSearchSceneGraph_getMeta();}
}
#pragma pop
