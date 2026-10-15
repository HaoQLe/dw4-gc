#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igOnOffColorChanger_registerNow();
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
}
extern "C" {
void *fn_80113894(){
 if(!igOnOffColorChanger_meta) igOnOffColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOnOffColorChanger_meta;
}
void *igOnOffColorChanger_getMeta(){
 if(!igOnOffColorChanger_meta || !(reinterpret_cast<unsigned int *>(igOnOffColorChanger_meta)[0x24/4]&4)) igOnOffColorChanger_registerNow();
 return igOnOffColorChanger_meta;
}
}
#pragma pop
