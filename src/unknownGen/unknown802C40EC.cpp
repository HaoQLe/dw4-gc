#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beNumberCtrl_getMeta();
void beNumberCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802C4390();
extern char lbl_8041E844[];
extern char lbl_80534B90[];
extern void *lbl_80534B94;
void beNumberCtrl_register();
void *beNumberCtrl_getMetaCall();
}
extern "C" {
void fn_802C40EC(){
 fn_80066188((int)beNumberCtrl_register);
}
void beNumberCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B90,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNumberCtrl_getMetaCall,(int)lbl_8041E844,32,(int)beNumberCtrl_vtableRead,0,0,0);
}
void *beNumberCtrl_getMetaCall(){return beNumberCtrl_getMeta();}
void *beLoadingNode_getMeta(){
 if(!lbl_80534B94 || !(reinterpret_cast<unsigned int *>(lbl_80534B94)[0x24/4]&4)) fn_802C4390();
 return lbl_80534B94;
}
}
#pragma pop
