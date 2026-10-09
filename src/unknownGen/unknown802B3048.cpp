#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWeaponSeqDataList_getMeta();
void beWeaponSeqDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B3234();
void igObjectList_register();
extern char lbl_8041CA1C[];
extern char lbl_804CEDD0[];
extern char lbl_8053454C[];
extern void *lbl_80534550;
void beWeaponSeqDataList_register();
void *beWeaponSeqDataList_getMetaCall();
}
extern "C" {
void fn_802B3048(){
 fn_80066188((int)beWeaponSeqDataList_register);
}
void beWeaponSeqDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053454C,(int)igObjectList_register,(int)fn_80024180,(int)beWeaponSeqDataList_getMetaCall,(int)lbl_8041CA1C,20,(int)beWeaponSeqDataList_vtableRead,0,0,(int)lbl_804CEDD0);
}
void *beWeaponSeqDataList_getMetaCall(){return beWeaponSeqDataList_getMeta();}
void *beWeaponSeqData_getMeta(){
 if(!lbl_80534550 || !(reinterpret_cast<unsigned int *>(lbl_80534550)[0x24/4]&4)) fn_802B3234();
 return lbl_80534550;
}
}
#pragma pop
