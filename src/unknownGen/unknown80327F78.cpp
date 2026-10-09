#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle02_getMeta();
void beNDMWStatusTitle02_vtableRead();
void beNDMWWindowTitle_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_803282B8();
extern char lbl_804534D8[];
extern char lbl_80535D54[];
extern void *lbl_80535D58;
void beNDMWStatusTitle02_register();
void *beNDMWStatusTitle02_getMetaCall();
}
extern "C" {
void fn_80327F78(){
 fn_80066188((int)beNDMWStatusTitle02_register);
}
void beNDMWStatusTitle02_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D54,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle02_getMetaCall,(int)lbl_804534D8,80,(int)beNDMWStatusTitle02_vtableRead,0,0,0);
}
void *beNDMWStatusTitle02_getMetaCall(){return beNDMWStatusTitle02_getMeta();}
void *fn_8032802C(void *object){
 fn_803282B8();
 return fn_8006546C(lbl_80535D58,object);
}
void *beNDMWStatusTitle01_getMeta(){
 if(!lbl_80535D58 || !(reinterpret_cast<unsigned int *>(lbl_80535D58)[0x24/4]&4)) fn_803282B8();
 return lbl_80535D58;
}
}
#pragma pop
