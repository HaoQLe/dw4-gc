#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandModelTraversal_fieldInit();
void *beHitLandModelTraversal_getMeta();
void *beHitLandModelTraversal_parentMeta();
void beHitLandModelTraversal_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igIntersectTraversal_register();
extern char beHitLandModelTraversal_className[];
extern char beHitLandModelTraversal_dependencies[];
extern char beHitLandModelTraversal_meta[];
void beHitLandModelTraversal_register();
void *beHitLandModelTraversal_getMetaCall();
}
extern "C" {
void beHitLandModelTraversal_arkRegister(){
 meta_registerNow((int)beHitLandModelTraversal_register);
}
void beHitLandModelTraversal_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandModelTraversal_meta,(int)igIntersectTraversal_register,(int)beHitLandModelTraversal_parentMeta,(int)beHitLandModelTraversal_getMetaCall,(int)beHitLandModelTraversal_className,72,(int)beHitLandModelTraversal_vtableRead,(int)beHitLandModelTraversal_fieldInit,0,(int)beHitLandModelTraversal_dependencies);
}
void *beHitLandModelTraversal_getMetaCall(){return beHitLandModelTraversal_getMeta();}
}
#pragma pop
