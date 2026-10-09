#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCountry_getMeta();
void beCountry_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E065C();
void igObject_register();
extern char lbl_804209F0[];
extern char lbl_805355B8[];
extern void *lbl_805355BC;
void beCountry_register();
void *beCountry_getMetaCall();
}
extern "C" {
void fn_802E02AC(){
 fn_80066188((int)beCountry_register);
}
void beCountry_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355B8,(int)igObject_register,(int)fn_800237D0,(int)beCountry_getMetaCall,(int)lbl_804209F0,8,(int)beCountry_vtableRead,0,0,0);
}
void *beCountry_getMetaCall(){return beCountry_getMeta();}
void *beCopyTransform_getMeta(){
 if(!lbl_805355BC || !(reinterpret_cast<unsigned int *>(lbl_805355BC)[0x24/4]&4)) fn_802E065C();
 return lbl_805355BC;
}
}
#pragma pop
