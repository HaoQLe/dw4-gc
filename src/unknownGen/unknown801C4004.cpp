#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C0E28();
void fn_801C3CF8();
void fn_801C42B8();
void igCommonTraversal_register();
void igCompileTraversal_fieldInit();
void *igCompileTraversal_getMeta();
extern char lbl_804B046C[];
extern char lbl_804B048C[];
extern void *lbl_805650BC;
void igCompileTraversal_register();
void *igCompileTraversal_getMetaCall();
}
extern "C" {
void fn_801C4004(){
 fn_80066188((int)igCompileTraversal_register);
}
void igCompileTraversal_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650BC,(int)igCommonTraversal_register,(int)fn_801C0E28,(int)igCompileTraversal_getMetaCall,(int)lbl_804B048C,520,(int)fn_801C3CF8,(int)igCompileTraversal_fieldInit,(int)fn_801C42B8,(int)lbl_804B046C);
}
void *igCompileTraversal_getMetaCall(){return igCompileTraversal_getMeta();}
}
#pragma pop
