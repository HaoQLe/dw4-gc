#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandModelTraversal_fieldInit();
void *beHitLandModelTraversal_getMeta();
void *beHitLandModelTraversal_parentMeta();
void beHitLandModelTraversal_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igIntersectTraversal_register();
extern char lbl_8041FDEC[];
extern char lbl_804D1B44[];
extern char lbl_805351DC[];
void beHitLandModelTraversal_register();
void *beHitLandModelTraversal_getMetaCall();
}
extern "C" {
void fn_802D52E4(){
 fn_80066188((int)beHitLandModelTraversal_register);
}
void beHitLandModelTraversal_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351DC,(int)igIntersectTraversal_register,(int)beHitLandModelTraversal_parentMeta,(int)beHitLandModelTraversal_getMetaCall,(int)lbl_8041FDEC,72,(int)beHitLandModelTraversal_vtableRead,(int)beHitLandModelTraversal_fieldInit,0,(int)lbl_804D1B44);
}
void *beHitLandModelTraversal_getMetaCall(){return beHitLandModelTraversal_getMeta();}
}
#pragma pop
