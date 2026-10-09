#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjBoolList_fieldInit();
void *beDataObjBoolList_getMeta();
void beDataObjBoolList_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420630[];
extern char lbl_804D2474[];
extern char lbl_80535460[];
void beDataObjBoolList_register();
void *beDataObjBoolList_getMetaCall();
}
extern "C" {
void fn_802DCED0(){
 fn_80066188((int)beDataObjBoolList_register);
}
void beDataObjBoolList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535460,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjBoolList_getMetaCall,(int)lbl_80420630,16,(int)beDataObjBoolList_vtableRead,(int)beDataObjBoolList_fieldInit,0,(int)lbl_804D2474);
}
void *beDataObjBoolList_getMetaCall(){return beDataObjBoolList_getMeta();}
}
#pragma pop
