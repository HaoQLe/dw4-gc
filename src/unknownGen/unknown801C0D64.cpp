#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C05F8();
void fn_801C0F80();
void igCommonTraversal_register();
void igFrustCullTraversal_fieldInit();
void *igFrustCullTraversal_getMeta();
extern char lbl_804AF60C[];
extern char lbl_804AF618[];
extern char lbl_80564EFC[8];
extern void *lbl_80565118;
void igFrustCullTraversal_register();
void *igFrustCullTraversal_getMetaCall();
void *fn_801C0E28();
}
extern "C" {
void fn_801C0D64(){
 fn_80066188((int)igFrustCullTraversal_register);
}
void igFrustCullTraversal_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)lbl_80564EFC,(int)igCommonTraversal_register,(int)fn_801C0E28,(int)igFrustCullTraversal_getMetaCall,(int)lbl_804AF618,560,(int)fn_801C05F8,(int)igFrustCullTraversal_fieldInit,(int)fn_801C0F80,(int)lbl_804AF60C);
}
void *igFrustCullTraversal_getMetaCall(){return igFrustCullTraversal_getMeta();}
void *fn_801C0E28(){return lbl_80565118;}
}
#pragma pop
