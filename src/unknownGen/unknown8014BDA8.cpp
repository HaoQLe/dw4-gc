#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void igEnbayaCompressAnimations_fieldInit();
void *igEnbayaCompressAnimations_getMeta();
void igEnbayaCompressAnimations_vtableRead();
void igOptVisitObject_register();
extern char lbl_8049F264[];
extern char lbl_8049F278[];
extern void *lbl_80564330;
void igEnbayaCompressAnimations_register();
void *igEnbayaCompressAnimations_getMetaCall();
}
extern "C" {
void fn_8014BDA8(){
 fn_80066188((int)igEnbayaCompressAnimations_register);
}
void igEnbayaCompressAnimations_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564330,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igEnbayaCompressAnimations_getMetaCall,(int)lbl_8049F278,104,(int)igEnbayaCompressAnimations_vtableRead,(int)igEnbayaCompressAnimations_fieldInit,0,(int)lbl_8049F264);
}
void *igEnbayaCompressAnimations_getMetaCall(){return igEnbayaCompressAnimations_getMeta();}
}
#pragma pop
