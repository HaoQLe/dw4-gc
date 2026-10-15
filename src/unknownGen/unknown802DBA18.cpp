#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDemoKeepMesList_getMeta();
void beDemoKeepMesList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDemoKeepMes_registerNow();
void igObjectList_register();
extern char beDemoKeepMesList_className[];
extern char lbl_804D2394[];
extern char beDemoKeepMesList_meta[];
extern void *beDemoKeepMes_meta;
void beDemoKeepMesList_register();
void *beDemoKeepMesList_getMetaCall();
}
extern "C" {
void beDemoKeepMesList_registerNow(){
 meta_registerNow((int)beDemoKeepMesList_register);
}
void beDemoKeepMesList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDemoKeepMesList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beDemoKeepMesList_getMetaCall,(int)beDemoKeepMesList_className,20,(int)beDemoKeepMesList_vtableRead,0,0,(int)lbl_804D2394);
}
void *beDemoKeepMesList_getMetaCall(){return beDemoKeepMesList_getMeta();}
void *beDemoKeepMes_create(void *object){
 beDemoKeepMes_registerNow();
 return meta_createInstance(beDemoKeepMes_meta,object);
}
void *beDemoKeepMes_getMeta(){
 if(!beDemoKeepMes_meta || !(reinterpret_cast<unsigned int *>(beDemoKeepMes_meta)[0x24/4]&4)) beDemoKeepMes_registerNow();
 return beDemoKeepMes_meta;
}
}
#pragma pop
