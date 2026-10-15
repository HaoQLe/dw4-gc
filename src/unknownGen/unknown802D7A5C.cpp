#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterPlayerDataList_getMeta();
void beGeneraterPlayerDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGeneraterPlayerData_arkRegister();
void igObjectList_register();
extern char beGeneraterPlayerDataList_className[];
extern char beGeneraterPlayerDataList_dependencies[];
extern char beGeneraterPlayerDataList_meta[];
extern void *beGeneraterPlayerData_meta;
void beGeneraterPlayerDataList_register();
void *beGeneraterPlayerDataList_getMetaCall();
}
extern "C" {
void beGeneraterPlayerDataList_arkRegister(){
 meta_registerNow((int)beGeneraterPlayerDataList_register);
}
void beGeneraterPlayerDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterPlayerDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterPlayerDataList_getMetaCall,(int)beGeneraterPlayerDataList_className,20,(int)beGeneraterPlayerDataList_vtableRead,0,0,(int)beGeneraterPlayerDataList_dependencies);
}
void *beGeneraterPlayerDataList_getMetaCall(){return beGeneraterPlayerDataList_getMeta();}
void *beGeneraterPlayerData_getMeta(){
 if(!beGeneraterPlayerData_meta || !(reinterpret_cast<unsigned int *>(beGeneraterPlayerData_meta)[0x24/4]&4)) beGeneraterPlayerData_arkRegister();
 return beGeneraterPlayerData_meta;
}
}
#pragma pop
