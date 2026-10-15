#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShinkaObjectList_getMeta();
void beNDMWShinkaObjectList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWShinkaObject_registerNow();
void igObjectList_register();
extern char beNDMWShinkaObjectList_className[];
extern char lbl_804E3E00[];
extern char beNDMWShinkaObjectList_meta[];
extern void *beNDMWShinkaObject_meta;
void beNDMWShinkaObjectList_register();
void *beNDMWShinkaObjectList_getMetaCall();
}
extern "C" {
void beNDMWShinkaObjectList_registerNow(){
 meta_registerNow((int)beNDMWShinkaObjectList_register);
}
void beNDMWShinkaObjectList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShinkaObjectList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWShinkaObjectList_getMetaCall,(int)beNDMWShinkaObjectList_className,20,(int)beNDMWShinkaObjectList_vtableRead,0,0,(int)lbl_804E3E00);
}
void *beNDMWShinkaObjectList_getMetaCall(){return beNDMWShinkaObjectList_getMeta();}
void *beNDMWShinkaObject_create(void *object){
 beNDMWShinkaObject_registerNow();
 return meta_createInstance(beNDMWShinkaObject_meta,object);
}
void *beNDMWShinkaObject_getMeta(){
 if(!beNDMWShinkaObject_meta || !(reinterpret_cast<unsigned int *>(beNDMWShinkaObject_meta)[0x24/4]&4)) beNDMWShinkaObject_registerNow();
 return beNDMWShinkaObject_meta;
}
}
#pragma pop
