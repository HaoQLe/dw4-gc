#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDemoManagerWorkList_getMeta();
void beDemoManagerWorkList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDemoManagerWork_arkRegister();
void igObjectList_register();
extern char beDemoManagerWorkList_className[];
extern char beDemoManagerWorkList_dependencies[];
extern char beDemoManagerWorkList_meta[];
extern void *beDemoManagerWork_meta;
extern void *lbl_805621F4;
void beDemoManagerWorkList_register();
void *beDemoManagerWorkList_getMetaCall();
}
extern "C" {
void beDemoManagerWorkList_arkRegister(){
 meta_registerNow((int)beDemoManagerWorkList_register);
}
void beDemoManagerWorkList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDemoManagerWorkList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beDemoManagerWorkList_getMetaCall,(int)beDemoManagerWorkList_className,20,(int)beDemoManagerWorkList_vtableRead,0,0,(int)beDemoManagerWorkList_dependencies);
}
void *beDemoManagerWorkList_getMetaCall(){return beDemoManagerWorkList_getMeta();}
void *beDemoManagerWork_create(void *object){
 beDemoManagerWork_arkRegister();
 return meta_createInstance(beDemoManagerWork_meta,object);
}
void *beDemoManagerWork_metaObject(){
 if(!beDemoManagerWork_meta) beDemoManagerWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDemoManagerWork_meta;
}
void *beDemoManagerWork_getMeta(){
 if(!beDemoManagerWork_meta || !(reinterpret_cast<unsigned int *>(beDemoManagerWork_meta)[0x24/4]&4)) beDemoManagerWork_arkRegister();
 return beDemoManagerWork_meta;
}
}
#pragma pop
