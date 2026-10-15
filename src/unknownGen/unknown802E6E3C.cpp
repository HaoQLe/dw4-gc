#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2DataList_getMeta();
void beAction2DataList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2Data_arkRegister();
void igObjectList_register();
extern char beAction2DataList_className[];
extern char beAction2DataList_dependencies[];
extern char beAction2DataList_meta[];
extern void *beAction2Data_meta;
extern void *lbl_805621F4;
void beAction2DataList_register();
void *beAction2DataList_getMetaCall();
}
extern "C" {
void beAction2DataList_arkRegister(){
 meta_registerNow((int)beAction2DataList_register);
}
void beAction2DataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2DataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beAction2DataList_getMetaCall,(int)beAction2DataList_className,20,(int)beAction2DataList_vtableRead,0,0,(int)beAction2DataList_dependencies);
}
void *beAction2DataList_getMetaCall(){return beAction2DataList_getMeta();}
void *beAction2Data_metaObject(){
 if(!beAction2Data_meta) beAction2Data_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beAction2Data_meta;
}
void *beAction2Data_getMeta(){
 if(!beAction2Data_meta || !(reinterpret_cast<unsigned int *>(beAction2Data_meta)[0x24/4]&4)) beAction2Data_arkRegister();
 return beAction2Data_meta;
}
}
#pragma pop
