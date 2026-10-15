#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beMovie_registerNow();
extern char lbl_8041CD10[];
extern char lbl_804D0568[];
extern char lbl_804D0578[];
extern void *lbl_80534BE0;
extern void *beMovie_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C4E44(){
 if(!lbl_80534BE0) lbl_80534BE0=fn_800635C8(lbl_8041CD10,lbl_804D0568,lbl_804D0578,0x4);
 return lbl_80534BE0;
}
void *beMovie_create(void *object){
 beMovie_registerNow();
 return meta_createInstance(beMovie_meta,object);
}
void *beMovie_metaObject(){
 if(!beMovie_meta) beMovie_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMovie_meta;
}
void *beMovie_getMeta(){
 if(!beMovie_meta || !(reinterpret_cast<unsigned int *>(beMovie_meta)[0x24/4]&4)) beMovie_registerNow();
 return beMovie_meta;
}
}
#pragma pop
