#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObjectRefMetaField_registerNow();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
extern void *igObjectRefMetaField_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800288BC(){
 if(!igObjectRefMetaField_meta) igObjectRefMetaField_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igObjectRefMetaField_meta;
}
void *igObjectRefMetaField_getMeta(){
 if(!igObjectRefMetaField_meta || !(reinterpret_cast<unsigned int *>(igObjectRefMetaField_meta)[0x24/4]&4)) igObjectRefMetaField_registerNow();
 return igObjectRefMetaField_meta;
}
}
#pragma pop
