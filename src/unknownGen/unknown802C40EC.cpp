#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beNumberCtrl_getMeta();
void beNumberCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beLoadingNode_registerNow();
extern char beNumberCtrl_className[];
extern char beNumberCtrl_meta[];
extern void *beLoadingNode_meta;
void beNumberCtrl_register();
void *beNumberCtrl_getMetaCall();
}
extern "C" {
void beNumberCtrl_registerNow(){
 meta_registerNow((int)beNumberCtrl_register);
}
void beNumberCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumberCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNumberCtrl_getMetaCall,(int)beNumberCtrl_className,32,(int)beNumberCtrl_vtableRead,0,0,0);
}
void *beNumberCtrl_getMetaCall(){return beNumberCtrl_getMeta();}
void *beLoadingNode_getMeta(){
 if(!beLoadingNode_meta || !(reinterpret_cast<unsigned int *>(beLoadingNode_meta)[0x24/4]&4)) beLoadingNode_registerNow();
 return beLoadingNode_meta;
}
}
#pragma pop
