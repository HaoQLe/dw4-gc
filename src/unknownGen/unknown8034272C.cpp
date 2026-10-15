#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemImportant_getMeta();
void beNDMWItemImportant_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void beNDMWItemInstant_registerNow();
extern char beNDMWItemImportant_className[];
extern char beNDMWItemImportant_meta[];
extern void *beNDMWItemInstant_meta;
void beNDMWItemImportant_register();
void *beNDMWItemImportant_getMetaCall();
}
extern "C" {
void beNDMWItemImportant_registerNow(){
 meta_registerNow((int)beNDMWItemImportant_register);
}
void beNDMWItemImportant_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemImportant_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemImportant_getMetaCall,(int)beNDMWItemImportant_className,20,(int)beNDMWItemImportant_vtableRead,0,0,0);
}
void *beNDMWItemImportant_getMetaCall(){return beNDMWItemImportant_getMeta();}
void *beNDMWItemInstant_create(void *object){
 beNDMWItemInstant_registerNow();
 return meta_createInstance(beNDMWItemInstant_meta,object);
}
void *beNDMWItemInstant_getMeta(){
 if(!beNDMWItemInstant_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemInstant_meta)[0x24/4]&4)) beNDMWItemInstant_registerNow();
 return beNDMWItemInstant_meta;
}
}
#pragma pop
