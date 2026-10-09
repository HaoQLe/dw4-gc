#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void *beSvSlotGC_getMeta();
void beSvSlotGC_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
void fn_802BFD30();
extern char lbl_8041E238[];
extern char lbl_805349C0[];
extern void *lbl_805349C4;
void beSvSlotGC_register();
void *beSvSlotGC_getMetaCall();
}
extern "C" {
void fn_802BFB98(){
 fn_80066188((int)beSvSlotGC_register);
}
void beSvSlotGC_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349C0,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotGC_getMetaCall,(int)lbl_8041E238,24,(int)beSvSlotGC_vtableRead,0,0,0);
}
void *beSvSlotGC_getMetaCall(){return beSvSlotGC_getMeta();}
void *beSvSlotXbox_getMeta(){
 if(!lbl_805349C4 || !(reinterpret_cast<unsigned int *>(lbl_805349C4)[0x24/4]&4)) fn_802BFD30();
 return lbl_805349C4;
}
}
#pragma pop
