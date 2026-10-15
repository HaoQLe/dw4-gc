#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjObjectList_fieldInit();
void *beDataObjObjectList_getMeta();
void beDataObjObjectList_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjObjectList_className[];
extern char lbl_804D2434[];
extern char beDataObjObjectList_meta[];
void beDataObjObjectList_register();
void *beDataObjObjectList_getMetaCall();
}
extern "C" {
void beDataObjObjectList_registerNow(){
 meta_registerNow((int)beDataObjObjectList_register);
}
void beDataObjObjectList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjObjectList_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjObjectList_getMetaCall,(int)beDataObjObjectList_className,16,(int)beDataObjObjectList_vtableRead,(int)beDataObjObjectList_fieldInit,0,(int)lbl_804D2434);
}
void *beDataObjObjectList_getMetaCall(){return beDataObjObjectList_getMeta();}
}
#pragma pop
