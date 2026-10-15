#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_80208234();
void *igTransformSequence_fieldInit();
void igTransformSource_register();
extern char lbl_804AAFB8[];
extern char igTransformSequence_dependencies[];
extern char igTransformSequence_className[];
extern void *igTransformSource_meta;
extern void *lbl_805646C8;
extern void *lbl_805646CC;
extern void *igTransformSequence_meta;
void *igTransformSequence_getMeta();
void igTransformSequence_arkRegister();
void igTransformSequence_register();
void *igTransformSequence_getMetaCall();
void *fn_801ABB34();
}
extern "C" {
void *fn_801AB984(){return fn_80208234();}
void *fn_801AB9A4(){
 char *data=lbl_804AAFB8;
 if(!lbl_805646C8) lbl_805646C8=fn_800635C8(data+0x738,data+0x718,data+0x728,0x4);
 return lbl_805646C8;
}
void *fn_801AB9F0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805646CC) lbl_805646CC=fn_800635C8(data+0x7A0,data+0x780,data+0x790,0x4);
 return lbl_805646CC;
}
}
#pragma pop
