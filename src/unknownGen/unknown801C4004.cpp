#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C0E28();
void fn_801C3CF8();
void fn_801C42B8();
void igCommonTraversal_register();
void igCompileTraversal_fieldInit();
void *igCompileTraversal_getMeta();
extern char lbl_804B046C[];
extern char igCompileTraversal_className[];
extern void *igCompileTraversal_meta;
void igCompileTraversal_register();
void *igCompileTraversal_getMetaCall();
}
extern "C" {
void igCompileTraversal_registerNow(){
 meta_registerNow((int)igCompileTraversal_register);
}
void igCompileTraversal_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompileTraversal_meta,(int)igCommonTraversal_register,(int)fn_801C0E28,(int)igCompileTraversal_getMetaCall,(int)igCompileTraversal_className,520,(int)fn_801C3CF8,(int)igCompileTraversal_fieldInit,(int)fn_801C42B8,(int)lbl_804B046C);
}
void *igCompileTraversal_getMetaCall(){return igCompileTraversal_getMeta();}
}
#pragma pop
