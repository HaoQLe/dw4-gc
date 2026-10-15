#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterDataList_getMeta();
void beActionStarterDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beActionStarterData_arkRegister();
void igObjectList_register();
extern char beActionStarterDataList_className[];
extern char beActionStarterDataList_dependencies[];
extern char beActionStarterDataList_meta[];
extern void *beActionStarterData_meta;
void beActionStarterDataList_register();
void *beActionStarterDataList_getMetaCall();
}
extern "C" {
void beActionStarterDataList_arkRegister(){
 meta_registerNow((int)beActionStarterDataList_register);
}
void beActionStarterDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beActionStarterDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beActionStarterDataList_getMetaCall,(int)beActionStarterDataList_className,20,(int)beActionStarterDataList_vtableRead,0,0,(int)beActionStarterDataList_dependencies);
}
void *beActionStarterDataList_getMetaCall(){return beActionStarterDataList_getMeta();}
void *beActionStarterData_getMeta(){
 if(!beActionStarterData_meta || !(reinterpret_cast<unsigned int *>(beActionStarterData_meta)[0x24/4]&4)) beActionStarterData_arkRegister();
 return beActionStarterData_meta;
}
}
#pragma pop
