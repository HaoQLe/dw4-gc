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
void beNDMWLoadSavePlWork_registerNow();
void igObjectList_register();
extern char beNDMWLoadSavePlWorkList_className[];
extern char lbl_804E37DC[];
extern char beNDMWLoadSavePlWorkList_meta[];
extern void *beNDMWLoadSavePlWork_meta;
void beNDMWLoadSavePlWorkList_register();
void *beNDMWLoadSavePlWorkList_getMetaCall();
}
extern "C" {
void beNDMWLoadSavePlWorkList_registerNow(){
 meta_registerNow((int)beNDMWLoadSavePlWorkList_register);
}
void beNDMWLoadSavePlWorkList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadSavePlWorkList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWLoadSavePlWorkList_getMetaCall,(int)beNDMWLoadSavePlWorkList_className,20,(int)beNDMWLoadSavePlWorkList_vtableRead,0,0,(int)lbl_804E37DC);
}
void *beNDMWLoadSavePlWorkList_getMetaCall(){return beNDMWLoadSavePlWorkList_getMeta();}
void *beNDMWLoadSavePlWork_create(void *object){
 beNDMWLoadSavePlWork_registerNow();
 return meta_createInstance(beNDMWLoadSavePlWork_meta,object);
}
void *beNDMWLoadSavePlWork_getMeta(){
 if(!beNDMWLoadSavePlWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadSavePlWork_meta)[0x24/4]&4)) beNDMWLoadSavePlWork_registerNow();
 return beNDMWLoadSavePlWork_meta;
}
}
#pragma pop
