#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle03_getMeta();
void beNDMWStatusTitle03_vtableRead();
void beNDMWWindowTitle_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_80327F78();
extern char lbl_804534C4[];
extern char lbl_80535D50[];
extern void *lbl_80535D54;
void beNDMWStatusTitle03_register();
void *beNDMWStatusTitle03_getMetaCall();
}
extern "C" {
void fn_80327C38(){
 fn_80066188((int)beNDMWStatusTitle03_register);
}
void beNDMWStatusTitle03_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D50,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle03_getMetaCall,(int)lbl_804534C4,80,(int)beNDMWStatusTitle03_vtableRead,0,0,0);
}
void *beNDMWStatusTitle03_getMetaCall(){return beNDMWStatusTitle03_getMeta();}
void *fn_80327CEC(void *object){
 fn_80327F78();
 return fn_8006546C(lbl_80535D54,object);
}
void *beNDMWStatusTitle02_getMeta(){
 if(!lbl_80535D54 || !(reinterpret_cast<unsigned int *>(lbl_80535D54)[0x24/4]&4)) fn_80327F78();
 return lbl_80535D54;
}
}
#pragma pop
