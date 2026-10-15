#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWLoadSavePlWorkList_getMeta();
void beNDMWLoadSavePlWorkList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWLoadSavePlWork_arkRegister();
void igObjectList_register();
extern char beNDMWLoadSavePlWorkList_className[];
extern char beNDMWLoadSavePlWorkList_dependencies[];
extern char beNDMWLoadSavePlWorkList_meta[];
extern void *beNDMWLoadSavePlWork_meta;
void beNDMWLoadSavePlWorkList_register();
void *beNDMWLoadSavePlWorkList_getMetaCall();
}
extern "C" {
void beNDMWLoadSavePlWorkList_arkRegister(){
 meta_registerNow((int)beNDMWLoadSavePlWorkList_register);
}
void beNDMWLoadSavePlWorkList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadSavePlWorkList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWLoadSavePlWorkList_getMetaCall,(int)beNDMWLoadSavePlWorkList_className,20,(int)beNDMWLoadSavePlWorkList_vtableRead,0,0,(int)beNDMWLoadSavePlWorkList_dependencies);
}
void *beNDMWLoadSavePlWorkList_getMetaCall(){return beNDMWLoadSavePlWorkList_getMeta();}
void *beNDMWLoadSavePlWork_create(void *object){
 beNDMWLoadSavePlWork_arkRegister();
 return meta_createInstance(beNDMWLoadSavePlWork_meta,object);
}
void *beNDMWLoadSavePlWork_getMeta(){
 if(!beNDMWLoadSavePlWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadSavePlWork_meta)[0x24/4]&4)) beNDMWLoadSavePlWork_arkRegister();
 return beNDMWLoadSavePlWork_meta;
}
}
#pragma pop
