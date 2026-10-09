#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFontImage_getMeta();
void *beFontImage_parentMeta();
void beFontImage_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igBitmapFont_register();
extern char lbl_804202C0[];
extern char lbl_80535348[];
void beFontImage_register();
void *beFontImage_getMetaCall();
}
extern "C" {
void fn_802D9814(){
 fn_80066188((int)beFontImage_register);
}
void beFontImage_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535348,(int)igBitmapFont_register,(int)beFontImage_parentMeta,(int)beFontImage_getMetaCall,(int)lbl_804202C0,36,(int)beFontImage_vtableRead,0,0,0);
}
void *beFontImage_getMetaCall(){return beFontImage_getMeta();}
}
#pragma pop
