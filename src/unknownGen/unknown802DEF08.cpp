#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriHandle_fieldInit();
void *beCriHandle_getMeta();
void beCriHandle_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420830[];
extern char lbl_804D2670[];
extern char lbl_805354FC[];
void beCriHandle_register();
void *beCriHandle_getMetaCall();
}
extern "C" {
void fn_802DEF08(){
 fn_80066188((int)beCriHandle_register);
}
void beCriHandle_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354FC,(int)igNamedObject_register,(int)fn_80023CF4,(int)beCriHandle_getMetaCall,(int)lbl_80420830,40,(int)beCriHandle_vtableRead,(int)beCriHandle_fieldInit,0,(int)lbl_804D2670);
}
void *beCriHandle_getMetaCall(){return beCriHandle_getMeta();}
}
#pragma pop
