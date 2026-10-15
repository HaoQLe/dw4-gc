#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWDegiDataList_getMeta();
void beNDMWDegiDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWDegiData_arkRegister();
void igObjectList_register();
extern char beNDMWDegiDataList_className[];
extern char beNDMWDegiDataList_dependencies[];
extern char beNDMWDegiDataList_meta[];
extern void *beNDMWDegiData_meta;
void beNDMWDegiDataList_register();
void *beNDMWDegiDataList_getMetaCall();
}
extern "C" {
void beNDMWDegiDataList_arkRegister(){
 meta_registerNow((int)beNDMWDegiDataList_register);
}
void beNDMWDegiDataList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWDegiDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWDegiDataList_getMetaCall,(int)beNDMWDegiDataList_className,20,(int)beNDMWDegiDataList_vtableRead,0,0,(int)beNDMWDegiDataList_dependencies);
}
void *beNDMWDegiDataList_getMetaCall(){return beNDMWDegiDataList_getMeta();}
void *beNDMWDegiData_create(void *object){
 beNDMWDegiData_arkRegister();
 return meta_createInstance(beNDMWDegiData_meta,object);
}
void *beNDMWDegiData_getMeta(){
 if(!beNDMWDegiData_meta || !(reinterpret_cast<unsigned int *>(beNDMWDegiData_meta)[0x24/4]&4)) beNDMWDegiData_arkRegister();
 return beNDMWDegiData_meta;
}
}
#pragma pop
