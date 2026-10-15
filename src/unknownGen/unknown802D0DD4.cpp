#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMatCtrlDataList_getMeta();
void beMatCtrlDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMatCtrlData_registerNow();
void igObjectList_register();
extern char beMatCtrlDataList_className[];
extern char lbl_804D172C[];
extern char beMatCtrlDataList_meta[];
extern void *beMatCtrlData_meta;
void beMatCtrlDataList_register();
void *beMatCtrlDataList_getMetaCall();
}
extern "C" {
void beMatCtrlDataList_registerNow(){
 meta_registerNow((int)beMatCtrlDataList_register);
}
void beMatCtrlDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMatCtrlDataList_getMetaCall,(int)beMatCtrlDataList_className,20,(int)beMatCtrlDataList_vtableRead,0,0,(int)lbl_804D172C);
}
void *beMatCtrlDataList_getMetaCall(){return beMatCtrlDataList_getMeta();}
void *beMatCtrlData_getMeta(){
 if(!beMatCtrlData_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlData_meta)[0x24/4]&4)) beMatCtrlData_registerNow();
 return beMatCtrlData_meta;
}
}
#pragma pop
