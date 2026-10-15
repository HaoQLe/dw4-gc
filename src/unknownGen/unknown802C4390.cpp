#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLoadingNode_fieldInit();
void *beLoadingNode_getMeta();
void *beLoadingNode_parentMeta();
void beLoadingNode_vtableRead();
void beNodeAnim_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C44E4();
extern char beLoadingNode_className[];
extern char beLoadingNode_meta[];
void beLoadingNode_register();
void *beLoadingNode_getMetaCall();
}
extern "C" {
void beLoadingNode_arkRegister(){
 meta_registerNow((int)beLoadingNode_register);
}
void beLoadingNode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLoadingNode_meta,(int)beNodeAnim_register,(int)beLoadingNode_parentMeta,(int)beLoadingNode_getMetaCall,(int)beLoadingNode_className,128,(int)beLoadingNode_vtableRead,(int)beLoadingNode_fieldInit,(int)fn_802C44E4,0);
}
void *beLoadingNode_getMetaCall(){return beLoadingNode_getMeta();}
}
#pragma pop
