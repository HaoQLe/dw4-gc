#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGroupKeepList_getMeta();
void beGroupKeepList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D68BC();
void igObjectList_register();
extern char lbl_8041FF60[];
extern char lbl_804D1CE0[];
extern char lbl_80535250[];
extern void *lbl_80535254;
void beGroupKeepList_register();
void *beGroupKeepList_getMetaCall();
}
extern "C" {
void fn_802D6624(){
 fn_80066188((int)beGroupKeepList_register);
}
void beGroupKeepList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535250,(int)igObjectList_register,(int)fn_80024180,(int)beGroupKeepList_getMetaCall,(int)lbl_8041FF60,20,(int)beGroupKeepList_vtableRead,0,0,(int)lbl_804D1CE0);
}
void *beGroupKeepList_getMetaCall(){return beGroupKeepList_getMeta();}
void *beGroupKeep_getMeta(){
 if(!lbl_80535254 || !(reinterpret_cast<unsigned int *>(lbl_80535254)[0x24/4]&4)) fn_802D68BC();
 return lbl_80535254;
}
}
#pragma pop
