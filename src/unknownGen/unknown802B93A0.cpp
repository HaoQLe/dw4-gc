#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePlaySEList_getMeta();
void bePlaySEList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void bePlaySE_registerNow();
void igObjectList_register();
extern char bePlaySEList_className[];
extern char lbl_804CF634[];
extern char bePlaySEList_meta[];
extern void *bePlaySE_meta;
void bePlaySEList_register();
void *bePlaySEList_getMetaCall();
}
extern "C" {
void bePlaySEList_registerNow(){
 meta_registerNow((int)bePlaySEList_register);
}
void bePlaySEList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)bePlaySEList_meta,(int)igObjectList_register,(int)fn_80024180,(int)bePlaySEList_getMetaCall,(int)bePlaySEList_className,20,(int)bePlaySEList_vtableRead,0,0,(int)lbl_804CF634);
}
void *bePlaySEList_getMetaCall(){return bePlaySEList_getMeta();}
void *bePlaySE_create(void *object){
 bePlaySE_registerNow();
 return meta_createInstance(bePlaySE_meta,object);
}
void *bePlaySE_getMeta(){
 if(!bePlaySE_meta || !(reinterpret_cast<unsigned int *>(bePlaySE_meta)[0x24/4]&4)) bePlaySE_registerNow();
 return bePlaySE_meta;
}
}
#pragma pop
