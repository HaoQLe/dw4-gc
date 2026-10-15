#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beUnicodeObjList_arkRegister();
extern void *beUnicodeObjList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beUnicodeObjList_metaObject(){
 if(!beUnicodeObjList_meta) beUnicodeObjList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beUnicodeObjList_meta;
}
void *beUnicodeObjList_getMeta(){
 if(!beUnicodeObjList_meta || !(reinterpret_cast<unsigned int *>(beUnicodeObjList_meta)[0x24/4]&4)) beUnicodeObjList_arkRegister();
 return beUnicodeObjList_meta;
}
}
#pragma pop
