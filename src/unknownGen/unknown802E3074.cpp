#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoRamList_getMeta();
void beBaseInfoRamList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beBaseInfoRam_arkRegister();
void igObjectList_register();
extern char beBaseInfoRamList_className[];
extern char beBaseInfoRamList_dependencies[];
extern char beBaseInfoRamList_meta[];
extern void *beBaseInfoRam_meta;
extern void *lbl_805621F4;
void beBaseInfoRamList_register();
void *beBaseInfoRamList_getMetaCall();
}
extern "C" {
void beBaseInfoRamList_arkRegister(){
 meta_registerNow((int)beBaseInfoRamList_register);
}
void beBaseInfoRamList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoRamList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoRamList_getMetaCall,(int)beBaseInfoRamList_className,20,(int)beBaseInfoRamList_vtableRead,0,0,(int)beBaseInfoRamList_dependencies);
}
void *beBaseInfoRamList_getMetaCall(){return beBaseInfoRamList_getMeta();}
void *beBaseInfoRam_metaObject(){
 if(!beBaseInfoRam_meta) beBaseInfoRam_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoRam_meta;
}
void *beBaseInfoRam_getMeta(){
 if(!beBaseInfoRam_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoRam_meta)[0x24/4]&4)) beBaseInfoRam_arkRegister();
 return beBaseInfoRam_meta;
}
}
#pragma pop
