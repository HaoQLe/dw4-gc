#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle00_getMeta();
void beNDMWStatusTitle00_vtableRead();
void beNDMWWindow_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_803287A8();
extern char lbl_80453500[];
extern char lbl_80453514[];
extern char lbl_80535D5C[];
extern void *lbl_80535D60;
void beNDMWStatusTitle00_register();
void *beNDMWStatusTitle00_getMetaCall();
void *beNDMWWindowTitle_getMeta();
void fn_803286F8();
void beNDMWWindowTitle_register();
void *beNDMWWindowTitle_getMetaCall();
}
extern "C" {
void fn_803285F8(){
 fn_80066188((int)beNDMWStatusTitle00_register);
}
void beNDMWStatusTitle00_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D5C,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle00_getMetaCall,(int)lbl_80453500,80,(int)beNDMWStatusTitle00_vtableRead,0,0,0);
}
void *beNDMWStatusTitle00_getMetaCall(){return beNDMWStatusTitle00_getMeta();}
void *beNDMWWindowTitle_getMeta(){
 if(!lbl_80535D60 || !(reinterpret_cast<unsigned int *>(lbl_80535D60)[0x24/4]&4)) fn_803286F8();
 return lbl_80535D60;
}
void fn_803286F8(){
 fn_80066188((int)beNDMWWindowTitle_register);
}
void beNDMWWindowTitle_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535D60,(int)beNDMWWindow_register,(int)fn_803287A8,(int)beNDMWWindowTitle_getMetaCall,(int)lbl_80453514,80,0,0,0,0);
}
void *beNDMWWindowTitle_getMetaCall(){return beNDMWWindowTitle_getMeta();}
}
#pragma pop
