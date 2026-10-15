#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataOneList_getMeta();
void beGeneraterItemDataOneList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGeneraterItemDataOne_arkRegister();
void igObjectList_register();
extern char beGeneraterItemDataOneList_className[];
extern char beGeneraterItemDataOneList_dependencies[];
extern char beGeneraterItemDataOneList_meta[];
extern void *beGeneraterItemDataOne_meta;
void beGeneraterItemDataOneList_register();
void *beGeneraterItemDataOneList_getMetaCall();
}
extern "C" {
void beGeneraterItemDataOneList_arkRegister(){
 meta_registerNow((int)beGeneraterItemDataOneList_register);
}
void beGeneraterItemDataOneList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterItemDataOneList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterItemDataOneList_getMetaCall,(int)beGeneraterItemDataOneList_className,20,(int)beGeneraterItemDataOneList_vtableRead,0,0,(int)beGeneraterItemDataOneList_dependencies);
}
void *beGeneraterItemDataOneList_getMetaCall(){return beGeneraterItemDataOneList_getMeta();}
void *beGeneraterItemDataOne_getMeta(){
 if(!beGeneraterItemDataOne_meta || !(reinterpret_cast<unsigned int *>(beGeneraterItemDataOne_meta)[0x24/4]&4)) beGeneraterItemDataOne_arkRegister();
 return beGeneraterItemDataOne_meta;
}
}
#pragma pop
