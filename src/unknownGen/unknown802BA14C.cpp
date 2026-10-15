#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beSelectCtrlInfo_getMeta();
void beSelectCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beSelectCtrlInfoRamData_arkRegister();
extern char beSelectCtrlInfo_className[];
extern char beSelectCtrlInfo_meta[];
extern void *beSelectCtrlInfoRamData_meta;
void beSelectCtrlInfo_register();
void *beSelectCtrlInfo_getMetaCall();
}
extern "C" {
void beSelectCtrlInfo_arkRegister(){
 meta_registerNow((int)beSelectCtrlInfo_register);
}
void beSelectCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSelectCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSelectCtrlInfo_getMetaCall,(int)beSelectCtrlInfo_className,28,(int)beSelectCtrlInfo_vtableRead,0,0,0);
}
void *beSelectCtrlInfo_getMetaCall(){return beSelectCtrlInfo_getMeta();}
void *beSelectCtrlInfoRamData_getMeta(){
 if(!beSelectCtrlInfoRamData_meta || !(reinterpret_cast<unsigned int *>(beSelectCtrlInfoRamData_meta)[0x24/4]&4)) beSelectCtrlInfoRamData_arkRegister();
 return beSelectCtrlInfoRamData_meta;
}
}
#pragma pop
