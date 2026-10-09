#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igAttrContainer_register();
void igReplaceAttr_fieldInit();
extern char lbl_8049C8E4[];
extern char lbl_8049C8F0[];
extern void *lbl_80563C90;
extern void *lbl_805645A0;
void *igReplaceAttr_getMeta();
void fn_801358B4();
void igReplaceAttr_register();
void *igReplaceAttr_getMetaCall();
void *fn_80135970();
}
extern "C" {
void *igReplaceAttr_getMeta(){
 if(!lbl_80563C90 || !(reinterpret_cast<unsigned int *>(lbl_80563C90)[0x24/4]&4)) fn_801358B4();
 return lbl_80563C90;
}
void fn_801358B4(){
 fn_80066188((int)igReplaceAttr_register);
}
void igReplaceAttr_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563C90,(int)igAttrContainer_register,(int)fn_80135970,(int)igReplaceAttr_getMetaCall,(int)lbl_8049C8F0,44,0,(int)igReplaceAttr_fieldInit,0,(int)lbl_8049C8E4);
}
void *igReplaceAttr_getMetaCall(){return igReplaceAttr_getMeta();}
void *fn_80135970(){return lbl_805645A0;}
}
#pragma pop
