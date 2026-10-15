#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlDataList_getMeta();
void beModelCtrlDataList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlData_arkRegister();
void igObjectList_register();
extern char beModelCtrlDataList_className[];
extern char beModelCtrlDataList_dependencies[];
extern char beModelCtrlDataList_meta[];
extern void *beModelCtrlData_meta;
extern void *lbl_805621F4;
void beModelCtrlDataList_register();
void *beModelCtrlDataList_getMetaCall();
}
extern "C" {
void beModelCtrlDataList_arkRegister(){
 meta_registerNow((int)beModelCtrlDataList_register);
}
void beModelCtrlDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlDataList_getMetaCall,(int)beModelCtrlDataList_className,20,(int)beModelCtrlDataList_vtableRead,0,0,(int)beModelCtrlDataList_dependencies);
}
void *beModelCtrlDataList_getMetaCall(){return beModelCtrlDataList_getMeta();}
void *beModelCtrlData_metaObject(){
 if(!beModelCtrlData_meta) beModelCtrlData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlData_meta;
}
void *beModelCtrlData_getMeta(){
 if(!beModelCtrlData_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlData_meta)[0x24/4]&4)) beModelCtrlData_arkRegister();
 return beModelCtrlData_meta;
}
}
#pragma pop
