#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlAIMap_fieldInit();
void *beModelCtrlAIMap_getMeta();
void beModelCtrlAIMap_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F150[];
extern char lbl_804D0E44[];
extern char lbl_80534E70[];
void beModelCtrlAIMap_register();
void *beModelCtrlAIMap_getMetaCall();
}
extern "C" {
void fn_802CA57C(){
 fn_80066188((int)beModelCtrlAIMap_register);
}
void beModelCtrlAIMap_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E70,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIMap_getMetaCall,(int)lbl_8041F150,52,(int)beModelCtrlAIMap_vtableRead,(int)beModelCtrlAIMap_fieldInit,0,(int)lbl_804D0E44);
}
void *beModelCtrlAIMap_getMetaCall(){return beModelCtrlAIMap_getMeta();}
}
#pragma pop
