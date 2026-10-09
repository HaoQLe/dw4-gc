#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle04_getMeta();
void beNDMWStatusTitle04_vtableRead();
void beNDMWWindowTitle_register();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_80327C38();
extern char lbl_804534B0[];
extern char lbl_80535D4C[];
extern void *lbl_80535D50;
extern void *lbl_805621F4;
void beNDMWStatusTitle04_register();
void *beNDMWStatusTitle04_getMetaCall();
}
extern "C" {
void fn_803278A4(){
 fn_80066188((int)beNDMWStatusTitle04_register);
}
void beNDMWStatusTitle04_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D4C,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle04_getMetaCall,(int)lbl_804534B0,80,(int)beNDMWStatusTitle04_vtableRead,0,0,0);
}
void *beNDMWStatusTitle04_getMetaCall(){return beNDMWStatusTitle04_getMeta();}
void *fn_80327958(void *object){
 fn_80327C38();
 return fn_8006546C(lbl_80535D50,object);
}
void *fn_80327998(){
 if(!lbl_80535D50) lbl_80535D50=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535D50;
}
void *beNDMWStatusTitle03_getMeta(){
 if(!lbl_80535D50 || !(reinterpret_cast<unsigned int *>(lbl_80535D50)[0x24/4]&4)) fn_80327C38();
 return lbl_80535D50;
}
}
#pragma pop
