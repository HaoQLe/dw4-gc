#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFontImageList_getMeta();
void beFontImageList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beFontImage_arkRegister();
void igObjectList_register();
extern char beFontImageList_className[];
extern char beFontImageList_dependencies[];
extern char beFontImageList_meta[];
extern void *beFontImage_meta;
void beFontImageList_register();
void *beFontImageList_getMetaCall();
}
extern "C" {
void beFontImageList_arkRegister(){
 meta_registerNow((int)beFontImageList_register);
}
void beFontImageList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontImageList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beFontImageList_getMetaCall,(int)beFontImageList_className,20,(int)beFontImageList_vtableRead,0,0,(int)beFontImageList_dependencies);
}
void *beFontImageList_getMetaCall(){return beFontImageList_getMeta();}
void *beFontImage_getMeta(){
 if(!beFontImage_meta || !(reinterpret_cast<unsigned int *>(beFontImage_meta)[0x24/4]&4)) beFontImage_arkRegister();
 return beFontImage_meta;
}
}
#pragma pop
