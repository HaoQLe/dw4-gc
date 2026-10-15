#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSeDataList_getMeta();
void beSeDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beSeData_arkRegister();
void igObjectList_register();
extern char beSeDataList_className[];
extern char beSeDataList_dependencies[];
extern char beSeDataList_meta[];
extern void *beSeData_meta;
void beSeDataList_register();
void *beSeDataList_getMetaCall();
}
extern "C" {
void beSeDataList_arkRegister(){
 meta_registerNow((int)beSeDataList_register);
}
void beSeDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSeDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beSeDataList_getMetaCall,(int)beSeDataList_className,20,(int)beSeDataList_vtableRead,0,0,(int)beSeDataList_dependencies);
}
void *beSeDataList_getMetaCall(){return beSeDataList_getMeta();}
void *beSeData_getMeta(){
 if(!beSeData_meta || !(reinterpret_cast<unsigned int *>(beSeData_meta)[0x24/4]&4)) beSeData_arkRegister();
 return beSeData_meta;
}
}
#pragma pop
