#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beLayerInfoRam_getMeta();
void beLayerInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void fn_802D340C();
extern char lbl_8041FB70[];
extern char lbl_8053514C[];
extern void *lbl_80535150;
void beLayerInfoRam_register();
void *beLayerInfoRam_getMetaCall();
}
extern "C" {
void fn_802D3174(){
 fn_80066188((int)beLayerInfoRam_register);
}
void beLayerInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053514C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beLayerInfoRam_getMetaCall,(int)lbl_8041FB70,44,(int)beLayerInfoRam_vtableRead,0,0,0);
}
void *beLayerInfoRam_getMetaCall(){return beLayerInfoRam_getMeta();}
void *beLayerInfo_getMeta(){
 if(!lbl_80535150 || !(reinterpret_cast<unsigned int *>(lbl_80535150)[0x24/4]&4)) fn_802D340C();
 return lbl_80535150;
}
}
#pragma pop
