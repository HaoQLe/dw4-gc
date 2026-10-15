#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvGetFreeSizeApi_getMeta();
void beSvGetFreeSizeApi_vtableRead();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void beSvWriteMediaApi_registerNow();
extern char beSvGetFreeSizeApi_className[];
extern char lbl_804CFBC4[];
extern char lbl_804CFBD0[];
extern char lbl_804CFBDC[];
extern char lbl_804CFBE8[];
extern void *beSvGetFreeSizeApi_meta;
extern void *beSvWriteMediaApi_meta;
void beSvGetFreeSizeApi_register();
void *beSvGetFreeSizeApi_getMetaCall();
void beSvGetFreeSizeApi_fieldInit();
}
extern "C" {
void beSvGetFreeSizeApi_registerNow(){
 meta_registerNow((int)beSvGetFreeSizeApi_register);
}
void beSvGetFreeSizeApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beSvGetFreeSizeApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvGetFreeSizeApi_getMetaCall,(int)beSvGetFreeSizeApi_className,224,(int)beSvGetFreeSizeApi_vtableRead,(int)beSvGetFreeSizeApi_fieldInit,0,0);
}
void *beSvGetFreeSizeApi_getMetaCall(){return beSvGetFreeSizeApi_getMeta();}
void beSvGetFreeSizeApi_fieldInit(){
 void *meta=beSvGetFreeSizeApi_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFBC4,0x3);
 fn_800659C0(meta,lbl_804CFBD0,lbl_804CFBDC,lbl_804CFBE8,field);
}
void *beSvWriteMediaApi_create(void *object){
 beSvWriteMediaApi_registerNow();
 return meta_createInstance(beSvWriteMediaApi_meta,object);
}
void *beSvWriteMediaApi_getMeta(){
 if(!beSvWriteMediaApi_meta || !(reinterpret_cast<unsigned int *>(beSvWriteMediaApi_meta)[0x24/4]&4)) beSvWriteMediaApi_registerNow();
 return beSvWriteMediaApi_meta;
}
}
#pragma pop
