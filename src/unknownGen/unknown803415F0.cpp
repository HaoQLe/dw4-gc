#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLoadIntf2ComMdlDataList_getMeta();
void beLoadIntf2ComMdlDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80341808();
void igObjectList_register();
extern char lbl_80455054[];
extern char lbl_804E3BF4[];
extern char lbl_805366D4[];
extern void *lbl_805366D8;
void beLoadIntf2ComMdlDataList_register();
void *beLoadIntf2ComMdlDataList_getMetaCall();
}
extern "C" {
void fn_803415F0(){
 fn_80066188((int)beLoadIntf2ComMdlDataList_register);
}
void beLoadIntf2ComMdlDataList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366D4,(int)igObjectList_register,(int)fn_80024180,(int)beLoadIntf2ComMdlDataList_getMetaCall,(int)lbl_80455054,20,(int)beLoadIntf2ComMdlDataList_vtableRead,0,0,(int)lbl_804E3BF4);
}
void *beLoadIntf2ComMdlDataList_getMetaCall(){return beLoadIntf2ComMdlDataList_getMeta();}
void *fn_803416AC(void *object){
 fn_80341808();
 return fn_8006546C(lbl_805366D8,object);
}
void *beLoadIntf2ComMdlData_getMeta(){
 if(!lbl_805366D8 || !(reinterpret_cast<unsigned int *>(lbl_805366D8)[0x24/4]&4)) fn_80341808();
 return lbl_805366D8;
}
}
#pragma pop
