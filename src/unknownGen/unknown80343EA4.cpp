#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShinkaObjectList_getMeta();
void beNDMWShinkaObjectList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80344078();
void igObjectList_register();
extern char lbl_80455280[];
extern char lbl_804E3E00[];
extern char lbl_80536794[];
extern void *lbl_80536798;
void beNDMWShinkaObjectList_register();
void *beNDMWShinkaObjectList_getMetaCall();
}
extern "C" {
void fn_80343EA4(){
 fn_80066188((int)beNDMWShinkaObjectList_register);
}
void beNDMWShinkaObjectList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536794,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWShinkaObjectList_getMetaCall,(int)lbl_80455280,20,(int)beNDMWShinkaObjectList_vtableRead,0,0,(int)lbl_804E3E00);
}
void *beNDMWShinkaObjectList_getMetaCall(){return beNDMWShinkaObjectList_getMeta();}
void *fn_80343F60(void *object){
 fn_80344078();
 return fn_8006546C(lbl_80536798,object);
}
void *beNDMWShinkaObject_getMeta(){
 if(!lbl_80536798 || !(reinterpret_cast<unsigned int *>(lbl_80536798)[0x24/4]&4)) fn_80344078();
 return lbl_80536798;
}
}
#pragma pop
