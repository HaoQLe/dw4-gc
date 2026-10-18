#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igOnOffColorChanger_arkRegister();
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
}
extern "C" {
void *fn_80113894(){
 if(!igOnOffColorChanger_meta) igOnOffColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOnOffColorChanger_meta;
}
}
#pragma pop
