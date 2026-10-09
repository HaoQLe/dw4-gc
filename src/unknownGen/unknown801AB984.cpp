#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_80208234();
void *igTransformSequence_fieldInit();
void igTransformSource_register();
extern char lbl_804AAFB8[];
extern char lbl_804AB764[];
extern char lbl_804AB774[];
extern void *lbl_80564698;
extern void *lbl_805646C8;
extern void *lbl_805646CC;
extern void *lbl_805646D0;
void *igTransformSequence_getMeta();
void fn_801ABA78();
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
void *igTransformSequence_getMeta(){
 if(!lbl_805646D0 || !(reinterpret_cast<unsigned int *>(lbl_805646D0)[0x24/4]&4)) fn_801ABA78();
 return lbl_805646D0;
}
void fn_801ABA78(){
 fn_80066188((int)igTransformSequence_register);
}
void igTransformSequence_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805646D0,(int)igTransformSource_register,(int)fn_801ABB34,(int)igTransformSequence_getMetaCall,(int)lbl_804AB774,56,0,(int)igTransformSequence_fieldInit,0,(int)lbl_804AB764);
}
void *igTransformSequence_getMetaCall(){return igTransformSequence_getMeta();}
void *fn_801ABB34(){return lbl_80564698;}
}
#pragma pop
