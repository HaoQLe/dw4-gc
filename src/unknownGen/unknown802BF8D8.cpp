#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSvSlotDataList_getMeta();
void beSvSlotDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beSvSlotPS2_arkRegister();
void igObjectList_register();
extern char beSvSlotDataList_className[];
extern char beSvSlotDataList_dependencies[];
extern char beSvSlotDataList_meta[];
extern void *beSvSlotPS2_meta;
void beSvSlotDataList_register();
void *beSvSlotDataList_getMetaCall();
}
extern "C" {
void beSvSlotDataList_arkRegister(){
 meta_registerNow((int)beSvSlotDataList_register);
}
void beSvSlotDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvSlotDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beSvSlotDataList_getMetaCall,(int)beSvSlotDataList_className,20,(int)beSvSlotDataList_vtableRead,0,0,(int)beSvSlotDataList_dependencies);
}
void *beSvSlotDataList_getMetaCall(){return beSvSlotDataList_getMeta();}
void *beSvSlotPS2_getMeta(){
 if(!beSvSlotPS2_meta || !(reinterpret_cast<unsigned int *>(beSvSlotPS2_meta)[0x24/4]&4)) beSvSlotPS2_arkRegister();
 return beSvSlotPS2_meta;
}
}
#pragma pop
