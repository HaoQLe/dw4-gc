#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjListList_getMeta();
void beDataObjListList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataObjList_registerNow();
void igObjectList_register();
extern char beDataObjListList_className[];
extern char lbl_804D240C[];
extern char beDataObjListList_meta[];
extern void *beDataObjList_meta;
extern void *lbl_805621F4;
void beDataObjListList_register();
void *beDataObjListList_getMetaCall();
}
extern "C" {
void beDataObjListList_registerNow(){
 meta_registerNow((int)beDataObjListList_register);
}
void beDataObjListList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beDataObjListList_getMetaCall,(int)beDataObjListList_className,20,(int)beDataObjListList_vtableRead,0,0,(int)lbl_804D240C);
}
void *beDataObjListList_getMetaCall(){return beDataObjListList_getMeta();}
void *beDataObjList_create(void *object){
 beDataObjList_registerNow();
 return meta_createInstance(beDataObjList_meta,object);
}
void *beDataObjList_metaObject(){
 if(!beDataObjList_meta) beDataObjList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDataObjList_meta;
}
void *beDataObjList_getMeta(){
 if(!beDataObjList_meta || !(reinterpret_cast<unsigned int *>(beDataObjList_meta)[0x24/4]&4)) beDataObjList_registerNow();
 return beDataObjList_meta;
}
}
#pragma pop
