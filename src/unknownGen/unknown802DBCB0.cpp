#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDemoKeepMes_getMeta();
void beDemoKeepMes_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataObjListList_registerNow();
void igObject_register();
extern char beDemoKeepMes_className[];
extern char lbl_804D239C[];
extern char lbl_804D23B8[];
extern char lbl_804D23D4[];
extern char lbl_804D23F0[];
extern void *beDemoKeepMes_meta;
extern void *beDataObjListList_meta;
extern void *lbl_805621F4;
void beDemoKeepMes_register();
void *beDemoKeepMes_getMetaCall();
void beDemoKeepMes_fieldInit();
}
extern "C" {
void beDemoKeepMes_registerNow(){
 meta_registerNow((int)beDemoKeepMes_register);
}
void beDemoKeepMes_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beDemoKeepMes_meta,(int)igObject_register,(int)fn_800237D0,(int)beDemoKeepMes_getMetaCall,(int)beDemoKeepMes_className,48,(int)beDemoKeepMes_vtableRead,(int)beDemoKeepMes_fieldInit,0,0);
}
void *beDemoKeepMes_getMetaCall(){return beDemoKeepMes_getMeta();}
void beDemoKeepMes_fieldInit(){
 void *meta=beDemoKeepMes_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D239C,0x7);
 meta_setupFields(meta,lbl_804D23B8,lbl_804D23D4,lbl_804D23F0,field);
}
void *beDataObjListList_create(void *object){
 beDataObjListList_registerNow();
 return meta_createInstance(beDataObjListList_meta,object);
}
void *beDataObjListList_metaObject(){
 if(!beDataObjListList_meta) beDataObjListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDataObjListList_meta;
}
void *beDataObjListList_getMeta(){
 if(!beDataObjListList_meta || !(reinterpret_cast<unsigned int *>(beDataObjListList_meta)[0x24/4]&4)) beDataObjListList_registerNow();
 return beDataObjListList_meta;
}
}
#pragma pop
