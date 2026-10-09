#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoRamList_getMeta();
void beBaseInfoRamList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E325C();
void igObjectList_register();
extern char lbl_80420CFC[];
extern char lbl_804D2CB8[];
extern char lbl_805356A8[];
extern void *lbl_805356AC;
extern void *lbl_805621F4;
void beBaseInfoRamList_register();
void *beBaseInfoRamList_getMetaCall();
}
extern "C" {
void fn_802E3074(){
 fn_80066188((int)beBaseInfoRamList_register);
}
void beBaseInfoRamList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356A8,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoRamList_getMetaCall,(int)lbl_80420CFC,20,(int)beBaseInfoRamList_vtableRead,0,0,(int)lbl_804D2CB8);
}
void *beBaseInfoRamList_getMetaCall(){return beBaseInfoRamList_getMeta();}
void *fn_802E3130(){
 if(!lbl_805356AC) lbl_805356AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356AC;
}
void *beBaseInfoRam_getMeta(){
 if(!lbl_805356AC || !(reinterpret_cast<unsigned int *>(lbl_805356AC)[0x24/4]&4)) fn_802E325C();
 return lbl_805356AC;
}
}
#pragma pop
