#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjObjectList_fieldInit();
void *beDataObjObjectList_getMeta();
void beDataObjObjectList_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_804205F8[];
extern char lbl_804D2434[];
extern char lbl_80535448[];
void beDataObjObjectList_register();
void *beDataObjObjectList_getMetaCall();
}
extern "C" {
void fn_802DC658(){
 fn_80066188((int)beDataObjObjectList_register);
}
void beDataObjObjectList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535448,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjObjectList_getMetaCall,(int)lbl_804205F8,16,(int)beDataObjObjectList_vtableRead,(int)beDataObjObjectList_fieldInit,0,(int)lbl_804D2434);
}
void *beDataObjObjectList_getMetaCall(){return beDataObjObjectList_getMeta();}
}
#pragma pop
