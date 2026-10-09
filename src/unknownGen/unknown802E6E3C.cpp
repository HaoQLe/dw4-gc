#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2DataList_getMeta();
void beAction2DataList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E707C();
void igObjectList_register();
extern char lbl_804210C0[];
extern char lbl_804D3198[];
extern char lbl_8053581C[];
extern void *lbl_80535820;
extern void *lbl_805621F4;
void beAction2DataList_register();
void *beAction2DataList_getMetaCall();
}
extern "C" {
void fn_802E6E3C(){
 fn_80066188((int)beAction2DataList_register);
}
void beAction2DataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053581C,(int)igObjectList_register,(int)fn_80024180,(int)beAction2DataList_getMetaCall,(int)lbl_804210C0,20,(int)beAction2DataList_vtableRead,0,0,(int)lbl_804D3198);
}
void *beAction2DataList_getMetaCall(){return beAction2DataList_getMeta();}
void *fn_802E6EF8(){
 if(!lbl_80535820) lbl_80535820=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535820;
}
void *beAction2Data_getMeta(){
 if(!lbl_80535820 || !(reinterpret_cast<unsigned int *>(lbl_80535820)[0x24/4]&4)) fn_802E707C();
 return lbl_80535820;
}
}
#pragma pop
