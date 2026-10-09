#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSeDataList_getMeta();
void beSeDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BB4B4();
void igObjectList_register();
extern char lbl_8041DA18[];
extern char lbl_804CF7E0[];
extern char lbl_80534804[];
extern void *lbl_80534808;
void beSeDataList_register();
void *beSeDataList_getMetaCall();
}
extern "C" {
void fn_802BB2C8(){
 fn_80066188((int)beSeDataList_register);
}
void beSeDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534804,(int)igObjectList_register,(int)fn_80024180,(int)beSeDataList_getMetaCall,(int)lbl_8041DA18,20,(int)beSeDataList_vtableRead,0,0,(int)lbl_804CF7E0);
}
void *beSeDataList_getMetaCall(){return beSeDataList_getMeta();}
void *beSeData_getMeta(){
 if(!lbl_80534808 || !(reinterpret_cast<unsigned int *>(lbl_80534808)[0x24/4]&4)) fn_802BB4B4();
 return lbl_80534808;
}
}
#pragma pop
