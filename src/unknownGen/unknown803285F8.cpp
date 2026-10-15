#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle00_getMeta();
void beNDMWStatusTitle00_vtableRead();
void beNDMWWindow_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_803287A8();
extern char beNDMWStatusTitle00_className[];
extern char beNDMWWindowTitle_className[];
extern char beNDMWStatusTitle00_meta[];
extern void *beNDMWWindowTitle_meta;
void beNDMWStatusTitle00_register();
void *beNDMWStatusTitle00_getMetaCall();
void *beNDMWWindowTitle_getMeta();
void beNDMWWindowTitle_arkRegister();
void beNDMWWindowTitle_register();
void *beNDMWWindowTitle_getMetaCall();
}
extern "C" {
void beNDMWStatusTitle00_arkRegister(){
 meta_registerNow((int)beNDMWStatusTitle00_register);
}
void beNDMWStatusTitle00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusTitle00_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle00_getMetaCall,(int)beNDMWStatusTitle00_className,80,(int)beNDMWStatusTitle00_vtableRead,0,0,0);
}
void *beNDMWStatusTitle00_getMetaCall(){return beNDMWStatusTitle00_getMeta();}
void *beNDMWWindowTitle_getMeta(){
 if(!beNDMWWindowTitle_meta || !(reinterpret_cast<unsigned int *>(beNDMWWindowTitle_meta)[0x24/4]&4)) beNDMWWindowTitle_arkRegister();
 return beNDMWWindowTitle_meta;
}
void beNDMWWindowTitle_arkRegister(){
 meta_registerNow((int)beNDMWWindowTitle_register);
}
void beNDMWWindowTitle_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWWindowTitle_meta,(int)beNDMWWindow_register,(int)fn_803287A8,(int)beNDMWWindowTitle_getMetaCall,(int)beNDMWWindowTitle_className,80,0,0,0,0);
}
void *beNDMWWindowTitle_getMetaCall(){return beNDMWWindowTitle_getMeta();}
}
#pragma pop
