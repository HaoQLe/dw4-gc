#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMoveObjectList_getMeta();
void beModelCtrlMoveObjectList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMoveObject_arkRegister();
void igObjectList_register();
extern char beModelCtrlMoveObjectList_className[];
extern char beModelCtrlMoveObjectList_dependencies[];
extern char beModelCtrlMoveObjectList_meta[];
extern void *beModelCtrlMoveObject_meta;
void beModelCtrlMoveObjectList_register();
void *beModelCtrlMoveObjectList_getMetaCall();
}
extern "C" {
void beModelCtrlMoveObjectList_arkRegister(){
 meta_registerNow((int)beModelCtrlMoveObjectList_register);
}
void beModelCtrlMoveObjectList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlMoveObjectList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlMoveObjectList_getMetaCall,(int)beModelCtrlMoveObjectList_className,20,(int)beModelCtrlMoveObjectList_vtableRead,0,0,(int)beModelCtrlMoveObjectList_dependencies);
}
void *beModelCtrlMoveObjectList_getMetaCall(){return beModelCtrlMoveObjectList_getMeta();}
void *beModelCtrlMoveObject_create(void *object){
 beModelCtrlMoveObject_arkRegister();
 return meta_createInstance(beModelCtrlMoveObject_meta,object);
}
void *beModelCtrlMoveObject_getMeta(){
 if(!beModelCtrlMoveObject_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMoveObject_meta)[0x24/4]&4)) beModelCtrlMoveObject_arkRegister();
 return beModelCtrlMoveObject_meta;
}
}
#pragma pop
