#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFontImage_getMeta();
void *beFontImage_parentMeta();
void beFontImage_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igBitmapFont_register();
extern char beFontImage_className[];
extern char beFontImage_meta[];
void beFontImage_register();
void *beFontImage_getMetaCall();
}
extern "C" {
void beFontImage_registerNow(){
 meta_registerNow((int)beFontImage_register);
}
void beFontImage_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontImage_meta,(int)igBitmapFont_register,(int)beFontImage_parentMeta,(int)beFontImage_getMetaCall,(int)beFontImage_className,36,(int)beFontImage_vtableRead,0,0,0);
}
void *beFontImage_getMetaCall(){return beFontImage_getMeta();}
}
#pragma pop
