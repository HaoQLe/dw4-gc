#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void bePoint01_arkRegister();
extern char lbl_8041CA68[];
extern char lbl_804D0010[];
extern char lbl_804D002C[];
extern void *lbl_80534A68;
extern void *bePoint01_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C1028(){
 if(!lbl_80534A68) lbl_80534A68=fn_800635C8(lbl_8041CA68,lbl_804D0010,lbl_804D002C,0x7);
 return lbl_80534A68;
}
void *bePoint01_create(void *object){
 bePoint01_arkRegister();
 return meta_createInstance(bePoint01_meta,object);
}
void *bePoint01_metaObject(){
 if(!bePoint01_meta) bePoint01_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return bePoint01_meta;
}
void *bePoint01_getMeta(){
 if(!bePoint01_meta || !(reinterpret_cast<unsigned int *>(bePoint01_meta)[0x24/4]&4)) bePoint01_arkRegister();
 return bePoint01_meta;
}
}
#pragma pop
