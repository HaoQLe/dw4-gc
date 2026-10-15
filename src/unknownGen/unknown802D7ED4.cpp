#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataList_getMeta();
void beGeneraterItemDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGeneraterItemData_arkRegister();
void igObjectList_register();
extern char beGeneraterItemDataList_className[];
extern char beGeneraterItemDataList_dependencies[];
extern char beGeneraterItemDataList_meta[];
extern void *beGeneraterItemData_meta;
void beGeneraterItemDataList_register();
void *beGeneraterItemDataList_getMetaCall();
}
extern "C" {
void beGeneraterItemDataList_arkRegister(){
 meta_registerNow((int)beGeneraterItemDataList_register);
}
void beGeneraterItemDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterItemDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterItemDataList_getMetaCall,(int)beGeneraterItemDataList_className,20,(int)beGeneraterItemDataList_vtableRead,0,0,(int)beGeneraterItemDataList_dependencies);
}
void *beGeneraterItemDataList_getMetaCall(){return beGeneraterItemDataList_getMeta();}
void *beGeneraterItemData_getMeta(){
 if(!beGeneraterItemData_meta || !(reinterpret_cast<unsigned int *>(beGeneraterItemData_meta)[0x24/4]&4)) beGeneraterItemData_arkRegister();
 return beGeneraterItemData_meta;
}
}
#pragma pop
