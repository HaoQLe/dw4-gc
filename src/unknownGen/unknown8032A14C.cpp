#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelectE1_getMeta();
void beNDMWStatusSelectE1_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_8032A388();
extern char lbl_804535F8[];
extern char lbl_80535D90[];
extern void *lbl_80535D94;
void beNDMWStatusSelectE1_register();
void *beNDMWStatusSelectE1_getMetaCall();
}
extern "C" {
void fn_8032A14C(){
 fn_80066188((int)beNDMWStatusSelectE1_register);
}
void beNDMWStatusSelectE1_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D90,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelectE1_getMetaCall,(int)lbl_804535F8,112,(int)beNDMWStatusSelectE1_vtableRead,0,0,0);
}
void *beNDMWStatusSelectE1_getMetaCall(){return beNDMWStatusSelectE1_getMeta();}
void *fn_8032A200(void *object){
 fn_8032A388();
 return fn_8006546C(lbl_80535D94,object);
}
void *beNDMWStatusSelectE0_getMeta(){
 if(!lbl_80535D94 || !(reinterpret_cast<unsigned int *>(lbl_80535D94)[0x24/4]&4)) fn_8032A388();
 return lbl_80535D94;
}
}
#pragma pop
