#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beShadow01InfoList_getMeta();
void beShadow01InfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beShadow01Info_registerNow();
void igObjectList_register();
extern char beShadow01InfoList_className[];
extern char lbl_804CF65C[];
extern char beShadow01InfoList_meta[];
extern void *beShadow01Info_meta;
void beShadow01InfoList_register();
void *beShadow01InfoList_getMetaCall();
}
extern "C" {
void beShadow01InfoList_registerNow(){
 meta_registerNow((int)beShadow01InfoList_register);
}
void beShadow01InfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beShadow01InfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beShadow01InfoList_getMetaCall,(int)beShadow01InfoList_className,20,(int)beShadow01InfoList_vtableRead,0,0,(int)lbl_804CF65C);
}
void *beShadow01InfoList_getMetaCall(){return beShadow01InfoList_getMeta();}
void *beShadow01Info_getMeta(){
 if(!beShadow01Info_meta || !(reinterpret_cast<unsigned int *>(beShadow01Info_meta)[0x24/4]&4)) beShadow01Info_registerNow();
 return beShadow01Info_meta;
}
}
#pragma pop
