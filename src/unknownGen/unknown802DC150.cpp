#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjList_getMeta();
void beDataObjList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataObjFloatList_arkRegister();
void igObjectList_register();
extern char beDataObjList_className[];
extern char beDataObjList_dependencies[];
extern char beDataObjList_meta[];
extern void *beDataObjFloatList_meta;
void beDataObjList_register();
void *beDataObjList_getMetaCall();
}
extern "C" {
void beDataObjList_arkRegister(){
 meta_registerNow((int)beDataObjList_register);
}
void beDataObjList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beDataObjList_getMetaCall,(int)beDataObjList_className,20,(int)beDataObjList_vtableRead,0,0,(int)beDataObjList_dependencies);
}
void *beDataObjList_getMetaCall(){return beDataObjList_getMeta();}
void *beDataObjFloatList_create(void *object){
 beDataObjFloatList_arkRegister();
 return meta_createInstance(beDataObjFloatList_meta,object);
}
void *beDataObjFloatList_getMeta(){
 if(!beDataObjFloatList_meta || !(reinterpret_cast<unsigned int *>(beDataObjFloatList_meta)[0x24/4]&4)) beDataObjFloatList_arkRegister();
 return beDataObjFloatList_meta;
}
}
#pragma pop
