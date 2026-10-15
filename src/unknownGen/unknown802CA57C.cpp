#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlAIMap_fieldInit();
void *beModelCtrlAIMap_getMeta();
void beModelCtrlAIMap_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beModelCtrlAIMap_className[];
extern char lbl_804D0E44[];
extern char beModelCtrlAIMap_meta[];
void beModelCtrlAIMap_register();
void *beModelCtrlAIMap_getMetaCall();
}
extern "C" {
void beModelCtrlAIMap_registerNow(){
 meta_registerNow((int)beModelCtrlAIMap_register);
}
void beModelCtrlAIMap_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlAIMap_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIMap_getMetaCall,(int)beModelCtrlAIMap_className,52,(int)beModelCtrlAIMap_vtableRead,(int)beModelCtrlAIMap_fieldInit,0,(int)lbl_804D0E44);
}
void *beModelCtrlAIMap_getMetaCall(){return beModelCtrlAIMap_getMeta();}
}
#pragma pop
