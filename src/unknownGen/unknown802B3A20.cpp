#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWeaponAttachDataList_getMeta();
void beWeaponAttachDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B3C38();
void igObjectList_register();
extern char lbl_8041CA90[];
extern char lbl_804CEE18[];
extern char lbl_80534564[];
extern void *lbl_80534568;
void beWeaponAttachDataList_register();
void *beWeaponAttachDataList_getMetaCall();
}
extern "C" {
void fn_802B3A20(){
 fn_80066188((int)beWeaponAttachDataList_register);
}
void beWeaponAttachDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534564,(int)igObjectList_register,(int)fn_80024180,(int)beWeaponAttachDataList_getMetaCall,(int)lbl_8041CA90,20,(int)beWeaponAttachDataList_vtableRead,0,0,(int)lbl_804CEE18);
}
void *beWeaponAttachDataList_getMetaCall(){return beWeaponAttachDataList_getMeta();}
void *fn_802B3ADC(void *object){
 fn_802B3C38();
 return fn_8006546C(lbl_80534568,object);
}
void *beWeaponAttachData_getMeta(){
 if(!lbl_80534568 || !(reinterpret_cast<unsigned int *>(lbl_80534568)[0x24/4]&4)) fn_802B3C38();
 return lbl_80534568;
}
}
#pragma pop
