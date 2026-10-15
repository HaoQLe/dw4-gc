#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerInsideDataList_getMeta();
void beNumVerInsideDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beNumVerInsideData_arkRegister();
void igObjectList_register();
extern char beNumVerInsideDataList_className[];
extern char beNumVerInsideDataList_dependencies[];
extern char beNumVerInsideDataList_meta[];
extern void *beNumVerInsideData_meta;
void beNumVerInsideDataList_register();
void *beNumVerInsideDataList_getMetaCall();
}
extern "C" {
void beNumVerInsideDataList_arkRegister(){
 meta_registerNow((int)beNumVerInsideDataList_register);
}
void beNumVerInsideDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumVerInsideDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNumVerInsideDataList_getMetaCall,(int)beNumVerInsideDataList_className,20,(int)beNumVerInsideDataList_vtableRead,0,0,(int)beNumVerInsideDataList_dependencies);
}
void *beNumVerInsideDataList_getMetaCall(){return beNumVerInsideDataList_getMeta();}
void *beNumVerInsideData_create(void *object){
 beNumVerInsideData_arkRegister();
 return meta_createInstance(beNumVerInsideData_meta,object);
}
void *beNumVerInsideData_getMeta(){
 if(!beNumVerInsideData_meta || !(reinterpret_cast<unsigned int *>(beNumVerInsideData_meta)[0x24/4]&4)) beNumVerInsideData_arkRegister();
 return beNumVerInsideData_meta;
}
}
#pragma pop
