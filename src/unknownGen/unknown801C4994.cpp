#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BD9C8();
void fn_801C50A8();
void igCommonTraversal_fieldInit();
void *igCommonTraversal_getMeta();
void igCommonTraversal_vtableRead();
void igTraversal_register();
extern char lbl_804B071C[];
extern char lbl_804B0780[];
extern void *lbl_80565118;
void igCommonTraversal_register();
void *igCommonTraversal_getMetaCall();
}
extern "C" {
void fn_801C4994(){
 fn_80066188((int)igCommonTraversal_register);
}
void igCommonTraversal_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565118,(int)igTraversal_register,(int)fn_801BD9C8,(int)igCommonTraversal_getMetaCall,(int)lbl_804B0780,472,(int)igCommonTraversal_vtableRead,(int)igCommonTraversal_fieldInit,(int)fn_801C50A8,(int)lbl_804B071C);
}
void *igCommonTraversal_getMetaCall(){return igCommonTraversal_getMeta();}
}
#pragma pop
