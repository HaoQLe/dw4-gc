#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BD9C8();
void fn_801C50A8();
void igCommonTraversal_fieldInit();
void *igCommonTraversal_getMeta();
void igCommonTraversal_vtableRead();
void igTraversal_register();
extern char lbl_804B071C[];
extern char igCommonTraversal_className[];
extern void *igCommonTraversal_meta;
void igCommonTraversal_register();
void *igCommonTraversal_getMetaCall();
}
extern "C" {
void igCommonTraversal_registerNow(){
 meta_registerNow((int)igCommonTraversal_register);
}
void igCommonTraversal_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCommonTraversal_meta,(int)igTraversal_register,(int)fn_801BD9C8,(int)igCommonTraversal_getMetaCall,(int)igCommonTraversal_className,472,(int)igCommonTraversal_vtableRead,(int)igCommonTraversal_fieldInit,(int)fn_801C50A8,(int)lbl_804B071C);
}
void *igCommonTraversal_getMetaCall(){return igCommonTraversal_getMeta();}
}
#pragma pop
