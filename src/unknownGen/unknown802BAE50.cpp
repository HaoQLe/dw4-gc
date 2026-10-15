#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beSeInfo_getMeta();
void beSeInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beSeInfoData_arkRegister();
extern char beSeInfo_className[];
extern char beSeInfo_meta[];
extern void *beSeInfoData_meta;
void beSeInfo_register();
void *beSeInfo_getMetaCall();
}
extern "C" {
void beSeInfo_arkRegister(){
 meta_registerNow((int)beSeInfo_register);
}
void beSeInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSeInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSeInfo_getMetaCall,(int)beSeInfo_className,28,(int)beSeInfo_vtableRead,0,0,0);
}
void *beSeInfo_getMetaCall(){return beSeInfo_getMeta();}
void *beSeInfoData_getMeta(){
 if(!beSeInfoData_meta || !(reinterpret_cast<unsigned int *>(beSeInfoData_meta)[0x24/4]&4)) beSeInfoData_arkRegister();
 return beSeInfoData_meta;
}
}
#pragma pop
