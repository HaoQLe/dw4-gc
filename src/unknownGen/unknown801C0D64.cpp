#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C05F8();
void fn_801C0F80();
void igCommonTraversal_register();
void igFrustCullTraversal_fieldInit();
void *igFrustCullTraversal_getMeta();
extern char igFrustCullTraversal_dependencies[];
extern char igFrustCullTraversal_className[];
extern char igFrustCullTraversal_meta[8];
extern void *igCommonTraversal_meta;
void igFrustCullTraversal_register();
void *igFrustCullTraversal_getMetaCall();
void *fn_801C0E28();
}
extern "C" {
void igFrustCullTraversal_arkRegister(){
 meta_registerNow((int)igFrustCullTraversal_register);
}
void igFrustCullTraversal_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)igFrustCullTraversal_meta,(int)igCommonTraversal_register,(int)fn_801C0E28,(int)igFrustCullTraversal_getMetaCall,(int)igFrustCullTraversal_className,560,(int)fn_801C05F8,(int)igFrustCullTraversal_fieldInit,(int)fn_801C0F80,(int)igFrustCullTraversal_dependencies);
}
void *igFrustCullTraversal_getMetaCall(){return igFrustCullTraversal_getMeta();}
void *fn_801C0E28(){return igCommonTraversal_meta;}
}
#pragma pop
