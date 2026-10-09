#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotList_getMeta();
void beNDMWMcSlotList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8033FC54();
void igObjectList_register();
extern char lbl_80454E04[];
extern char lbl_804E38CC[];
extern char lbl_805365E8[];
extern void *lbl_805365EC;
void beNDMWMcSlotList_register();
void *beNDMWMcSlotList_getMetaCall();
}
extern "C" {
void fn_8033FA74(){
 fn_80066188((int)beNDMWMcSlotList_register);
}
void beNDMWMcSlotList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365E8,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWMcSlotList_getMetaCall,(int)lbl_80454E04,20,(int)beNDMWMcSlotList_vtableRead,0,0,(int)lbl_804E38CC);
}
void *beNDMWMcSlotList_getMetaCall(){return beNDMWMcSlotList_getMeta();}
void *fn_8033FB30(void *object){
 fn_8033FC54();
 return fn_8006546C(lbl_805365EC,object);
}
void *beNDMWMcSlotXbox_getMeta(){
 if(!lbl_805365EC || !(reinterpret_cast<unsigned int *>(lbl_805365EC)[0x24/4]&4)) fn_8033FC54();
 return lbl_805365EC;
}
}
#pragma pop
