#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beCriFxXbData_arkRegister();
extern void *beCriFxXbData_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beCriFxXbData_metaObject(){
 if(!beCriFxXbData_meta) beCriFxXbData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriFxXbData_meta;
}
void *beCriFxXbData_getMeta(){
 if(!beCriFxXbData_meta || !(reinterpret_cast<unsigned int *>(beCriFxXbData_meta)[0x24/4]&4)) beCriFxXbData_arkRegister();
 return beCriFxXbData_meta;
}
}
#pragma pop
