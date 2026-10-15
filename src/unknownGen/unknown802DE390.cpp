#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beDBManager_arkRegister();
extern char lbl_8041CA68[];
extern char lbl_804D25C0[];
extern char lbl_804D25C4[];
extern void *lbl_805354C0;
extern void *beDBManager_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DE390(){
 if(!lbl_805354C0) lbl_805354C0=fn_800635C8(lbl_8041CA68,lbl_804D25C0,lbl_804D25C4,0x1);
 return lbl_805354C0;
}
void *beDBManager_create(void *object){
 beDBManager_arkRegister();
 return meta_createInstance(beDBManager_meta,object);
}
void *beDBManager_metaObject(){
 if(!beDBManager_meta) beDBManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDBManager_meta;
}
void *beDBManager_getMeta(){
 if(!beDBManager_meta || !(reinterpret_cast<unsigned int *>(beDBManager_meta)[0x24/4]&4)) beDBManager_arkRegister();
 return beDBManager_meta;
}
}
#pragma pop
