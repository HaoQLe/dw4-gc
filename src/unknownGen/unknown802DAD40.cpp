#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFile_getMeta();
void beFile_vtableRead();
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beFileChkObj_registerNow();
void igObject_register();
extern char beFile_className[];
extern char beFile_meta[];
extern void *beFileChkObj_meta;
void beFile_register();
void *beFile_getMetaCall();
}
extern "C" {
void beFile_registerNow(){
 meta_registerNow((int)beFile_register);
}
void beFile_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFile_meta,(int)igObject_register,(int)fn_800237D0,(int)beFile_getMetaCall,(int)beFile_className,8,(int)beFile_vtableRead,0,0,0);
}
void *beFile_getMetaCall(){return beFile_getMeta();}
void *beFileChkObj_create(void *object){
 beFileChkObj_registerNow();
 return meta_createInstance(beFileChkObj_meta,object);
}
void *beFileChkObj_getMeta(){
 if(!beFileChkObj_meta || !(reinterpret_cast<unsigned int *>(beFileChkObj_meta)[0x24/4]&4)) beFileChkObj_registerNow();
 return beFileChkObj_meta;
}
}
#pragma pop
