#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlDataList_getMeta();
void beModelCtrlDataList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CCBF8();
void igObjectList_register();
extern char lbl_8041F354[];
extern char lbl_804D1064[];
extern char lbl_80534F3C[];
extern void *lbl_80534F40;
extern void *lbl_805621F4;
void beModelCtrlDataList_register();
void *beModelCtrlDataList_getMetaCall();
}
extern "C" {
void fn_802CC9B8(){
 fn_80066188((int)beModelCtrlDataList_register);
}
void beModelCtrlDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F3C,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlDataList_getMetaCall,(int)lbl_8041F354,20,(int)beModelCtrlDataList_vtableRead,0,0,(int)lbl_804D1064);
}
void *beModelCtrlDataList_getMetaCall(){return beModelCtrlDataList_getMeta();}
void *fn_802CCA74(){
 if(!lbl_80534F40) lbl_80534F40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534F40;
}
void *beModelCtrlData_getMeta(){
 if(!lbl_80534F40 || !(reinterpret_cast<unsigned int *>(lbl_80534F40)[0x24/4]&4)) fn_802CCBF8();
 return lbl_80534F40;
}
}
#pragma pop
