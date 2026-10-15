#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWeaponSeqDataList_getMeta();
void beWeaponSeqDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beWeaponSeqData_registerNow();
void igObjectList_register();
extern char beWeaponSeqDataList_className[];
extern char lbl_804CEDD0[];
extern char beWeaponSeqDataList_meta[];
extern void *beWeaponSeqData_meta;
void beWeaponSeqDataList_register();
void *beWeaponSeqDataList_getMetaCall();
}
extern "C" {
void beWeaponSeqDataList_registerNow(){
 meta_registerNow((int)beWeaponSeqDataList_register);
}
void beWeaponSeqDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeaponSeqDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beWeaponSeqDataList_getMetaCall,(int)beWeaponSeqDataList_className,20,(int)beWeaponSeqDataList_vtableRead,0,0,(int)lbl_804CEDD0);
}
void *beWeaponSeqDataList_getMetaCall(){return beWeaponSeqDataList_getMeta();}
void *beWeaponSeqData_getMeta(){
 if(!beWeaponSeqData_meta || !(reinterpret_cast<unsigned int *>(beWeaponSeqData_meta)[0x24/4]&4)) beWeaponSeqData_registerNow();
 return beWeaponSeqData_meta;
}
}
#pragma pop
