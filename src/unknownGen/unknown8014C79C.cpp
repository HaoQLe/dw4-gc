#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igDataTable_arkRegister();
extern char igVertexBlending_className[];
extern void *lbl_805621F4;
extern void *lbl_805643A0;
extern void *igDataTable_meta;
}
extern "C" {
void *fn_8014C79C(){
 char *data=igVertexBlending_className;
 if(!lbl_805643A0) lbl_805643A0=fn_800635C8(data+0x39F8,data+0x39E0,data+0x39EC,0x3);
 return lbl_805643A0;
}
void *fn_8014C7E8(){
 if(!igDataTable_meta) igDataTable_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataTable_meta;
}
void *igDataTable_getMeta(){
 if(!igDataTable_meta || !(reinterpret_cast<unsigned int *>(igDataTable_meta)[0x24/4]&4)) igDataTable_arkRegister();
 return igDataTable_meta;
}
}
#pragma pop
