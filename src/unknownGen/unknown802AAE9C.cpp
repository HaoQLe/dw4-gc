#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802AB088();
void *igFileNameList_getMeta();
void igFileNameList_vtableRead();
void igObjectList_register();
extern char lbl_8041BB74[];
extern char lbl_804CD970[];
extern char lbl_80534364[];
extern void *lbl_80534368;
void igFileNameList_register();
void *igFileNameList_getMetaCall();
}
extern "C" {
void fn_802AAE9C(){
 fn_80066188((int)igFileNameList_register);
}
void igFileNameList_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534364,(int)igObjectList_register,(int)fn_80024180,(int)igFileNameList_getMetaCall,(int)lbl_8041BB74,20,(int)igFileNameList_vtableRead,0,0,(int)lbl_804CD970);
}
void *igFileNameList_getMetaCall(){return igFileNameList_getMeta();}
void *igFileName_getMeta(){
 if(!lbl_80534368 || !(reinterpret_cast<unsigned int *>(lbl_80534368)[0x24/4]&4)) fn_802AB088();
 return lbl_80534368;
}
}
#pragma pop
