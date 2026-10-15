#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beXboxImage24k_arkRegister();
extern void *beXboxImage24k_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beXboxImage24k_metaObject(){
 if(!beXboxImage24k_meta) beXboxImage24k_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beXboxImage24k_meta;
}
void *beXboxImage24k_getMeta(){
 if(!beXboxImage24k_meta || !(reinterpret_cast<unsigned int *>(beXboxImage24k_meta)[0x24/4]&4)) beXboxImage24k_arkRegister();
 return beXboxImage24k_meta;
}
}
#pragma pop
