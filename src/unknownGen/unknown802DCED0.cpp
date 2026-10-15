#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjBoolList_fieldInit();
void *beDataObjBoolList_getMeta();
void beDataObjBoolList_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjBoolList_className[];
extern char lbl_804D2474[];
extern char beDataObjBoolList_meta[];
void beDataObjBoolList_register();
void *beDataObjBoolList_getMetaCall();
}
extern "C" {
void beDataObjBoolList_registerNow(){
 meta_registerNow((int)beDataObjBoolList_register);
}
void beDataObjBoolList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjBoolList_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjBoolList_getMetaCall,(int)beDataObjBoolList_className,16,(int)beDataObjBoolList_vtableRead,(int)beDataObjBoolList_fieldInit,0,(int)lbl_804D2474);
}
void *beDataObjBoolList_getMetaCall(){return beDataObjBoolList_getMeta();}
}
#pragma pop
