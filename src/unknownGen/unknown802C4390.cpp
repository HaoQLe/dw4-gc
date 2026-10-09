#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLoadingNode_fieldInit();
void *beLoadingNode_getMeta();
void *beLoadingNode_parentMeta();
void beLoadingNode_vtableRead();
void beNodeAnim_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C44E4();
extern char lbl_8041E854[];
extern char lbl_80534B94[];
void beLoadingNode_register();
void *beLoadingNode_getMetaCall();
}
extern "C" {
void fn_802C4390(){
 fn_80066188((int)beLoadingNode_register);
}
void beLoadingNode_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B94,(int)beNodeAnim_register,(int)beLoadingNode_parentMeta,(int)beLoadingNode_getMetaCall,(int)lbl_8041E854,128,(int)beLoadingNode_vtableRead,(int)beLoadingNode_fieldInit,(int)fn_802C44E4,0);
}
void *beLoadingNode_getMetaCall(){return beLoadingNode_getMeta();}
}
#pragma pop
