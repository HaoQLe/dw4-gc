#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beShadow01InfoList_getMeta();
void beShadow01InfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B9A78();
void igObjectList_register();
extern char lbl_8041D870[];
extern char lbl_804CF65C[];
extern char lbl_80534794[];
extern void *lbl_80534798;
void beShadow01InfoList_register();
void *beShadow01InfoList_getMetaCall();
}
extern "C" {
void fn_802B9780(){
 fn_80066188((int)beShadow01InfoList_register);
}
void beShadow01InfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534794,(int)igObjectList_register,(int)fn_80024180,(int)beShadow01InfoList_getMetaCall,(int)lbl_8041D870,20,(int)beShadow01InfoList_vtableRead,0,0,(int)lbl_804CF65C);
}
void *beShadow01InfoList_getMetaCall(){return beShadow01InfoList_getMeta();}
void *beShadow01Info_getMeta(){
 if(!lbl_80534798 || !(reinterpret_cast<unsigned int *>(lbl_80534798)[0x24/4]&4)) fn_802B9A78();
 return lbl_80534798;
}
}
#pragma pop
