#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2InfoList_getMeta();
void beAction2InfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E6090();
void igObjectList_register();
extern char lbl_80420FE8[];
extern char lbl_804D30C0[];
extern char lbl_805357D0[];
extern void *lbl_805357D4;
void beAction2InfoList_register();
void *beAction2InfoList_getMetaCall();
}
extern "C" {
void fn_802E5D98(){
 fn_80066188((int)beAction2InfoList_register);
}
void beAction2InfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357D0,(int)igObjectList_register,(int)fn_80024180,(int)beAction2InfoList_getMetaCall,(int)lbl_80420FE8,20,(int)beAction2InfoList_vtableRead,0,0,(int)lbl_804D30C0);
}
void *beAction2InfoList_getMetaCall(){return beAction2InfoList_getMeta();}
void *beAction2Info_getMeta(){
 if(!lbl_805357D4 || !(reinterpret_cast<unsigned int *>(lbl_805357D4)[0x24/4]&4)) fn_802E6090();
 return lbl_805357D4;
}
}
#pragma pop
