#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beUnicodeObjList_getMeta();
void beUnicodeObjList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beUnicodeObj_arkRegister();
void igObjectList_register();
extern char beUnicodeObjList_className[];
extern char beUnicodeObjList_dependencies[];
extern char beUnicodeObjList_meta[];
extern void *beUnicodeObj_meta;
void beUnicodeObjList_register();
void *beUnicodeObjList_getMetaCall();
}
extern "C" {
void beUnicodeObjList_arkRegister(){
 meta_registerNow((int)beUnicodeObjList_register);
}
void beUnicodeObjList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beUnicodeObjList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beUnicodeObjList_getMetaCall,(int)beUnicodeObjList_className,20,(int)beUnicodeObjList_vtableRead,0,0,(int)beUnicodeObjList_dependencies);
}
void *beUnicodeObjList_getMetaCall(){return beUnicodeObjList_getMeta();}
void *beUnicodeObj_create(void *object){
 beUnicodeObj_arkRegister();
 return meta_createInstance(beUnicodeObj_meta,object);
}
void *beUnicodeObj_getMeta(){
 if(!beUnicodeObj_meta || !(reinterpret_cast<unsigned int *>(beUnicodeObj_meta)[0x24/4]&4)) beUnicodeObj_arkRegister();
 return beUnicodeObj_meta;
}
}
#pragma pop
