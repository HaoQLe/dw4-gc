#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMemory_registerNow();
extern void *beMemory_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMemory_metaObject(){
 if(!beMemory_meta) beMemory_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMemory_meta;
}
void *beMemory_getMeta(){
 if(!beMemory_meta || !(reinterpret_cast<unsigned int *>(beMemory_meta)[0x24/4]&4)) beMemory_registerNow();
 return beMemory_meta;
}
}
#pragma pop
