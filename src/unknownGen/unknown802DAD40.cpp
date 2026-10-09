#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFile_getMeta();
void beFile_vtableRead();
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DAF0C();
void igObject_register();
extern char lbl_804204CC[];
extern char lbl_805353D8[];
extern void *lbl_805353DC;
void beFile_register();
void *beFile_getMetaCall();
}
extern "C" {
void fn_802DAD40(){
 fn_80066188((int)beFile_register);
}
void beFile_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353D8,(int)igObject_register,(int)fn_800237D0,(int)beFile_getMetaCall,(int)lbl_804204CC,8,(int)beFile_vtableRead,0,0,0);
}
void *beFile_getMetaCall(){return beFile_getMeta();}
void *fn_802DADF4(void *object){
 fn_802DAF0C();
 return fn_8006546C(lbl_805353DC,object);
}
void *beFileChkObj_getMeta(){
 if(!lbl_805353DC || !(reinterpret_cast<unsigned int *>(lbl_805353DC)[0x24/4]&4)) fn_802DAF0C();
 return lbl_805353DC;
}
}
#pragma pop
