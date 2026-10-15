#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beAction2_registerNow();
extern char lbl_8041CA68[];
extern char lbl_804D31B8[];
extern char lbl_804D31D4[];
extern void *lbl_80535828;
extern void *beAction2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E71E8(){
 if(!lbl_80535828) lbl_80535828=fn_800635C8(lbl_8041CA68,lbl_804D31B8,lbl_804D31D4,0x7);
 return lbl_80535828;
}
void *beAction2_create(void *object){
 beAction2_registerNow();
 return meta_createInstance(beAction2_meta,object);
}
void *beAction2_metaObject(){
 if(!beAction2_meta) beAction2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beAction2_meta;
}
void *beAction2_getMeta(){
 if(!beAction2_meta || !(reinterpret_cast<unsigned int *>(beAction2_meta)[0x24/4]&4)) beAction2_registerNow();
 return beAction2_meta;
}
}
#pragma pop
