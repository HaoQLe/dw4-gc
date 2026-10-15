#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80286560();
void igInsightCore_fieldInit();
void *igInsightCore_getMeta();
void igInsightCore_vtableRead();
void igObject_register();
extern char igInsightCore_className[];
extern char lbl_804CB118[];
extern char igInsightCore_meta[];
void igInsightCore_register();
void *igInsightCore_getMetaCall();
}
extern "C" {
void igInsightCore_registerNow(){
 meta_registerNow((int)igInsightCore_register);
}
void igInsightCore_register(){
 fn_80284294();
 meta_registerClass(0,(int)igInsightCore_meta,(int)igObject_register,(int)fn_800237D0,(int)igInsightCore_getMetaCall,(int)igInsightCore_className,112,(int)igInsightCore_vtableRead,(int)igInsightCore_fieldInit,(int)fn_80286560,(int)lbl_804CB118);
}
void *igInsightCore_getMetaCall(){return igInsightCore_getMeta();}
}
#pragma pop
