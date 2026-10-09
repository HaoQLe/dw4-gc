#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80286560();
void igInsightCore_fieldInit();
void *igInsightCore_getMeta();
void igInsightCore_vtableRead();
void igObject_register();
extern char lbl_80416B10[];
extern char lbl_804CB118[];
extern char lbl_80515CCC[];
void igInsightCore_register();
void *igInsightCore_getMetaCall();
}
extern "C" {
void fn_802862A0(){
 fn_80066188((int)igInsightCore_register);
}
void igInsightCore_register(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515CCC,(int)igObject_register,(int)fn_800237D0,(int)igInsightCore_getMetaCall,(int)lbl_80416B10,112,(int)igInsightCore_vtableRead,(int)igInsightCore_fieldInit,(int)fn_80286560,(int)lbl_804CB118);
}
void *igInsightCore_getMetaCall(){return igInsightCore_getMeta();}
}
#pragma pop
