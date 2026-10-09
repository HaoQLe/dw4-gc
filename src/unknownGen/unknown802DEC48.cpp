#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriHandleList_getMeta();
void beCriHandleList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DEF08();
void igObjectList_register();
extern char lbl_80420820[];
extern char lbl_804D2668[];
extern char lbl_805354F8[];
extern void *lbl_805354FC;
extern void *lbl_805621F4;
void beCriHandleList_register();
void *beCriHandleList_getMetaCall();
}
extern "C" {
void fn_802DEC48(){
 fn_80066188((int)beCriHandleList_register);
}
void beCriHandleList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354F8,(int)igObjectList_register,(int)fn_80024180,(int)beCriHandleList_getMetaCall,(int)lbl_80420820,20,(int)beCriHandleList_vtableRead,0,0,(int)lbl_804D2668);
}
void *beCriHandleList_getMetaCall(){return beCriHandleList_getMeta();}
void *fn_802DED04(void *object){
 fn_802DEF08();
 return fn_8006546C(lbl_805354FC,object);
}
void *fn_802DED44(){
 if(!lbl_805354FC) lbl_805354FC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805354FC;
}
void *beCriHandle_getMeta(){
 if(!lbl_805354FC || !(reinterpret_cast<unsigned int *>(lbl_805354FC)[0x24/4]&4)) fn_802DEF08();
 return lbl_805354FC;
}
}
#pragma pop
