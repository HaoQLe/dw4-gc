#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beUnicodeObjList_getMeta();
void beUnicodeObjList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D930C();
void igObjectList_register();
extern char lbl_80420284[];
extern char lbl_804D2028[];
extern char lbl_80535338[];
extern void *lbl_8053533C;
void beUnicodeObjList_register();
void *beUnicodeObjList_getMetaCall();
}
extern "C" {
void fn_802D9128(){
 fn_80066188((int)beUnicodeObjList_register);
}
void beUnicodeObjList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535338,(int)igObjectList_register,(int)fn_80024180,(int)beUnicodeObjList_getMetaCall,(int)lbl_80420284,20,(int)beUnicodeObjList_vtableRead,0,0,(int)lbl_804D2028);
}
void *beUnicodeObjList_getMetaCall(){return beUnicodeObjList_getMeta();}
void *fn_802D91E4(void *object){
 fn_802D930C();
 return fn_8006546C(lbl_8053533C,object);
}
void *beUnicodeObj_getMeta(){
 if(!lbl_8053533C || !(reinterpret_cast<unsigned int *>(lbl_8053533C)[0x24/4]&4)) fn_802D930C();
 return lbl_8053533C;
}
}
#pragma pop
