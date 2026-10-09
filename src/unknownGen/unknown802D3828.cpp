#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLayerGroup_getMeta();
void beLayerGroup_vtableRead();
void *fn_80023CF4();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D3BD4();
void igNamedObject_register();
extern char lbl_8041CD10[];
extern char lbl_8041FBA8[];
extern char lbl_8041FBD8[];
extern char lbl_804D1924[];
extern char lbl_804D1938[];
extern char lbl_804D194C[];
extern char lbl_804D1964[];
extern char lbl_8053515C[];
extern void *lbl_80535160;
extern void *lbl_80535164;
extern void *lbl_80535168;
extern void *lbl_805621F4;
void beLayerGroup_register();
void *beLayerGroup_getMetaCall();
}
extern "C" {
void fn_802D3828(){
 fn_80066188((int)beLayerGroup_register);
}
void beLayerGroup_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053515C,(int)igNamedObject_register,(int)fn_80023CF4,(int)beLayerGroup_getMetaCall,(int)lbl_8041FBA8,12,(int)beLayerGroup_vtableRead,0,0,0);
}
void *beLayerGroup_getMetaCall(){return beLayerGroup_getMeta();}
void *fn_802D38DC(){
 if(!lbl_80535160) lbl_80535160=fn_800635C8(lbl_8041FBD8,lbl_804D1924,lbl_804D1938,0x5);
 return lbl_80535160;
}
void *fn_802D393C(){
 if(!lbl_80535164) lbl_80535164=fn_800635C8(lbl_8041CD10,lbl_804D194C,lbl_804D1964,0x6);
 return lbl_80535164;
}
void *fn_802D399C(void *object){
 fn_802D3BD4();
 return fn_8006546C(lbl_80535168,object);
}
void *fn_802D39DC(){
 if(!lbl_80535168) lbl_80535168=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535168;
}
void *beLayerCtl_getMeta(){
 if(!lbl_80535168 || !(reinterpret_cast<unsigned int *>(lbl_80535168)[0x24/4]&4)) fn_802D3BD4();
 return lbl_80535168;
}
}
#pragma pop
