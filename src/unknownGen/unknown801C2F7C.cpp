#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void igCompiledGraph_arkRegister();
extern char lbl_804AAFB8[];
extern void *lbl_805621F4;
extern void *lbl_80565064;
extern void *lbl_80565068;
extern void *igCompiledGraph_meta;
}
extern "C" {
void *fn_801C2F7C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565064) lbl_80565064=fn_800635C8(data+0x520C,data+0x51DC,data+0x51F4,0x6);
 return lbl_80565064;
}
void *fn_801C2FC8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565068) lbl_80565068=fn_800635C8(data+0x5254,data+0x523C,data+0x5248,0x3);
 return lbl_80565068;
}
void *igCompiledGraph_create(void *object){
 igCompiledGraph_arkRegister();
 return meta_createInstance(igCompiledGraph_meta,object);
}
void *fn_801C304C(){
 if(!igCompiledGraph_meta) igCompiledGraph_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCompiledGraph_meta;
}
void *igCompiledGraph_getMeta(){
 if(!igCompiledGraph_meta || !(reinterpret_cast<unsigned int *>(igCompiledGraph_meta)[0x24/4]&4)) igCompiledGraph_arkRegister();
 return igCompiledGraph_meta;
}
}
#pragma pop
