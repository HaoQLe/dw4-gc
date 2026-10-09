#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjString_fieldInit();
void *beDataObjString_getMeta();
void beDataObjString_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420620[];
extern char lbl_80535458[];
void beDataObjString_register();
void *beDataObjString_getMetaCall();
}
extern "C" {
void fn_802DCC10(){
 fn_80066188((int)beDataObjString_register);
}
void beDataObjString_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535458,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjString_getMetaCall,(int)lbl_80420620,16,(int)beDataObjString_vtableRead,(int)beDataObjString_fieldInit,0,0);
}
void *beDataObjString_getMetaCall(){return beDataObjString_getMeta();}
}
#pragma pop
