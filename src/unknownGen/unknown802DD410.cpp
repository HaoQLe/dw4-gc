#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjIntList_fieldInit();
void *beDataObjIntList_getMeta();
void beDataObjIntList_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjIntList_className[];
extern char beDataObjIntList_dependencies[];
extern char beDataObjIntList_meta[];
void beDataObjIntList_register();
void *beDataObjIntList_getMetaCall();
}
extern "C" {
void beDataObjIntList_arkRegister(){
 meta_registerNow((int)beDataObjIntList_register);
}
void beDataObjIntList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjIntList_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjIntList_getMetaCall,(int)beDataObjIntList_className,16,(int)beDataObjIntList_vtableRead,(int)beDataObjIntList_fieldInit,0,(int)beDataObjIntList_dependencies);
}
void *beDataObjIntList_getMetaCall(){return beDataObjIntList_getMeta();}
}
#pragma pop
