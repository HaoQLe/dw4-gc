#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle01_getMeta();
void beNDMWStatusTitle01_vtableRead();
void beNDMWWindowTitle_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_803285F8();
extern char lbl_804534EC[];
extern char lbl_80535D58[];
extern void *lbl_80535D5C;
void beNDMWStatusTitle01_register();
void *beNDMWStatusTitle01_getMetaCall();
}
extern "C" {
void fn_803282B8(){
 fn_80066188((int)beNDMWStatusTitle01_register);
}
void beNDMWStatusTitle01_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D58,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle01_getMetaCall,(int)lbl_804534EC,80,(int)beNDMWStatusTitle01_vtableRead,0,0,0);
}
void *beNDMWStatusTitle01_getMetaCall(){return beNDMWStatusTitle01_getMeta();}
void *fn_8032836C(void *object){
 fn_803285F8();
 return fn_8006546C(lbl_80535D5C,object);
}
void *beNDMWStatusTitle00_getMeta(){
 if(!lbl_80535D5C || !(reinterpret_cast<unsigned int *>(lbl_80535D5C)[0x24/4]&4)) fn_803285F8();
 return lbl_80535D5C;
}
}
#pragma pop
