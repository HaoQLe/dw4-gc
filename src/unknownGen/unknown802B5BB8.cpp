#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beTimerDataList_getMeta();
void beTimerDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beTimerData_registerNow();
void igObjectList_register();
extern char beTimerDataList_className[];
extern char lbl_804CF140[];
extern char beTimerDataList_meta[];
extern void *beTimerData_meta;
void beTimerDataList_register();
void *beTimerDataList_getMetaCall();
}
extern "C" {
void beTimerDataList_registerNow(){
 meta_registerNow((int)beTimerDataList_register);
}
void beTimerDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTimerDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beTimerDataList_getMetaCall,(int)beTimerDataList_className,20,(int)beTimerDataList_vtableRead,0,0,(int)lbl_804CF140);
}
void *beTimerDataList_getMetaCall(){return beTimerDataList_getMeta();}
void *beTimerData_getMeta(){
 if(!beTimerData_meta || !(reinterpret_cast<unsigned int *>(beTimerData_meta)[0x24/4]&4)) beTimerData_registerNow();
 return beTimerData_meta;
}
}
#pragma pop
