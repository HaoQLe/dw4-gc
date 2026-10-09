#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beSelectCtrlInfo_getMeta();
void beSelectCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802BA3C0();
extern char lbl_8041D8E8[];
extern char lbl_805347B4[];
extern void *lbl_805347B8;
void beSelectCtrlInfo_register();
void *beSelectCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802BA14C(){
 fn_80066188((int)beSelectCtrlInfo_register);
}
void beSelectCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347B4,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSelectCtrlInfo_getMetaCall,(int)lbl_8041D8E8,28,(int)beSelectCtrlInfo_vtableRead,0,0,0);
}
void *beSelectCtrlInfo_getMetaCall(){return beSelectCtrlInfo_getMeta();}
void *beSelectCtrlInfoRamData_getMeta(){
 if(!lbl_805347B8 || !(reinterpret_cast<unsigned int *>(lbl_805347B8)[0x24/4]&4)) fn_802BA3C0();
 return lbl_805347B8;
}
}
#pragma pop
