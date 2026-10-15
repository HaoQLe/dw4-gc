#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igBumpMapShader_registerNow();
extern char lbl_804B0F84[];
extern char lbl_80560804[8];
extern char lbl_8056080C[8];
extern void *lbl_805621F4;
extern void *lbl_8056522C;
extern void *igBumpMapShader_meta;
}
extern "C" {
void *fn_801C6138(){
 void *value0;
 if(!lbl_8056522C){
  value0=fn_800635C8(lbl_804B0F84,lbl_80560804,lbl_8056080C,2);
  lbl_8056522C=value0;
 }
 return lbl_8056522C;
}
void *fn_801C6180(){
 if(!igBumpMapShader_meta) igBumpMapShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBumpMapShader_meta;
}
void *igBumpMapShader_getMeta(){
 if(!igBumpMapShader_meta || !(reinterpret_cast<unsigned int *>(igBumpMapShader_meta)[0x24/4]&4)) igBumpMapShader_registerNow();
 return igBumpMapShader_meta;
}
}
#pragma pop
