#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMatCtrlSearchList_getMeta();
void beMatCtrlSearchList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMatCtrlSearch_registerNow();
void igObjectList_register();
extern char beMatCtrlSearchList_className[];
extern char lbl_804D16CC[];
extern char beMatCtrlSearchList_meta[];
extern void *beMatCtrlSearch_meta;
extern void *lbl_805621F4;
void beMatCtrlSearchList_register();
void *beMatCtrlSearchList_getMetaCall();
}
extern "C" {
void beMatCtrlSearchList_registerNow(){
 meta_registerNow((int)beMatCtrlSearchList_register);
}
void beMatCtrlSearchList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlSearchList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMatCtrlSearchList_getMetaCall,(int)beMatCtrlSearchList_className,20,(int)beMatCtrlSearchList_vtableRead,0,0,(int)lbl_804D16CC);
}
void *beMatCtrlSearchList_getMetaCall(){return beMatCtrlSearchList_getMeta();}
void *beMatCtrlSearch_metaObject(){
 if(!beMatCtrlSearch_meta) beMatCtrlSearch_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMatCtrlSearch_meta;
}
void *beMatCtrlSearch_getMeta(){
 if(!beMatCtrlSearch_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlSearch_meta)[0x24/4]&4)) beMatCtrlSearch_registerNow();
 return beMatCtrlSearch_meta;
}
}
#pragma pop
