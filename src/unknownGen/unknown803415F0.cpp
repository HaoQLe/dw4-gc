#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLoadIntf2ComMdlDataList_getMeta();
void beLoadIntf2ComMdlDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beLoadIntf2ComMdlData_registerNow();
void igObjectList_register();
extern char beLoadIntf2ComMdlDataList_className[];
extern char lbl_804E3BF4[];
extern char beLoadIntf2ComMdlDataList_meta[];
extern void *beLoadIntf2ComMdlData_meta;
void beLoadIntf2ComMdlDataList_register();
void *beLoadIntf2ComMdlDataList_getMetaCall();
}
extern "C" {
void beLoadIntf2ComMdlDataList_registerNow(){
 meta_registerNow((int)beLoadIntf2ComMdlDataList_register);
}
void beLoadIntf2ComMdlDataList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beLoadIntf2ComMdlDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beLoadIntf2ComMdlDataList_getMetaCall,(int)beLoadIntf2ComMdlDataList_className,20,(int)beLoadIntf2ComMdlDataList_vtableRead,0,0,(int)lbl_804E3BF4);
}
void *beLoadIntf2ComMdlDataList_getMetaCall(){return beLoadIntf2ComMdlDataList_getMeta();}
void *beLoadIntf2ComMdlData_create(void *object){
 beLoadIntf2ComMdlData_registerNow();
 return meta_createInstance(beLoadIntf2ComMdlData_meta,object);
}
void *beLoadIntf2ComMdlData_getMeta(){
 if(!beLoadIntf2ComMdlData_meta || !(reinterpret_cast<unsigned int *>(beLoadIntf2ComMdlData_meta)[0x24/4]&4)) beLoadIntf2ComMdlData_registerNow();
 return beLoadIntf2ComMdlData_meta;
}
}
#pragma pop
