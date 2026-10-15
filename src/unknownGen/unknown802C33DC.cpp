#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerDataList_getMeta();
void beNumVerDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beNumVerData_registerNow();
void igObjectList_register();
extern char beNumVerDataList_className[];
extern char lbl_804D03F0[];
extern char beNumVerDataList_meta[];
extern void *beNumVerData_meta;
void beNumVerDataList_register();
void *beNumVerDataList_getMetaCall();
}
extern "C" {
void beNumVerDataList_registerNow(){
 meta_registerNow((int)beNumVerDataList_register);
}
void beNumVerDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumVerDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNumVerDataList_getMetaCall,(int)beNumVerDataList_className,20,(int)beNumVerDataList_vtableRead,0,0,(int)lbl_804D03F0);
}
void *beNumVerDataList_getMetaCall(){return beNumVerDataList_getMeta();}
void *beNumVerData_getMeta(){
 if(!beNumVerData_meta || !(reinterpret_cast<unsigned int *>(beNumVerData_meta)[0x24/4]&4)) beNumVerData_registerNow();
 return beNumVerData_meta;
}
}
#pragma pop
