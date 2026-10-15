#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beSound_arkRegister();
extern char lbl_8041CD10[];
extern char lbl_804CF540[];
extern char lbl_804CF59C[];
extern void *lbl_80534770;
extern void *beSound_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B8E10(){
 if(!lbl_80534770) lbl_80534770=fn_800635C8(lbl_8041CD10,lbl_804CF540,lbl_804CF59C,0x17);
 return lbl_80534770;
}
void *beSound_create(void *object){
 beSound_arkRegister();
 return meta_createInstance(beSound_meta,object);
}
void *beSound_metaObject(){
 if(!beSound_meta) beSound_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSound_meta;
}
void *beSound_getMeta(){
 if(!beSound_meta || !(reinterpret_cast<unsigned int *>(beSound_meta)[0x24/4]&4)) beSound_arkRegister();
 return beSound_meta;
}
}
#pragma pop
