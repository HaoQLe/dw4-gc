#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void igEnbayaCompressAnimations_fieldInit();
void *igEnbayaCompressAnimations_getMeta();
void igEnbayaCompressAnimations_vtableRead();
void igOptVisitObject_register();
extern char igEnbayaCompressAnimations_dependencies[];
extern char igEnbayaCompressAnimations_className[];
extern void *igEnbayaCompressAnimations_meta;
void igEnbayaCompressAnimations_register();
void *igEnbayaCompressAnimations_getMetaCall();
}
extern "C" {
void igEnbayaCompressAnimations_arkRegister(){
 meta_registerNow((int)igEnbayaCompressAnimations_register);
}
void igEnbayaCompressAnimations_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igEnbayaCompressAnimations_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igEnbayaCompressAnimations_getMetaCall,(int)igEnbayaCompressAnimations_className,104,(int)igEnbayaCompressAnimations_vtableRead,(int)igEnbayaCompressAnimations_fieldInit,0,(int)igEnbayaCompressAnimations_dependencies);
}
void *igEnbayaCompressAnimations_getMetaCall(){return igEnbayaCompressAnimations_getMeta();}
}
#pragma pop
