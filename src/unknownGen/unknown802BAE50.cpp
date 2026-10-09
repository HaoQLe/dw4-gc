#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beSeInfo_getMeta();
void beSeInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802BB050();
extern char lbl_8041D9F0[];
extern char lbl_805347F8[];
extern void *lbl_805347FC;
void beSeInfo_register();
void *beSeInfo_getMetaCall();
}
extern "C" {
void fn_802BAE50(){
 fn_80066188((int)beSeInfo_register);
}
void beSeInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347F8,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSeInfo_getMetaCall,(int)lbl_8041D9F0,28,(int)beSeInfo_vtableRead,0,0,0);
}
void *beSeInfo_getMetaCall(){return beSeInfo_getMeta();}
void *beSeInfoData_getMeta(){
 if(!lbl_805347FC || !(reinterpret_cast<unsigned int *>(lbl_805347FC)[0x24/4]&4)) fn_802BB050();
 return lbl_805347FC;
}
}
#pragma pop
