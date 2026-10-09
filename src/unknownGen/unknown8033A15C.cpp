#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlMapCursor_getMeta();
void beNDMWMdlMapCursor_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_8033A414();
extern char lbl_80454680[];
extern char lbl_805361F0[];
extern void *lbl_805361F4;
extern void *lbl_805621F4;
void beNDMWMdlMapCursor_register();
void *beNDMWMdlMapCursor_getMetaCall();
}
extern "C" {
void fn_8033A15C(){
 fn_80066188((int)beNDMWMdlMapCursor_register);
}
void beNDMWMdlMapCursor_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F0,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlMapCursor_getMetaCall,(int)lbl_80454680,44,(int)beNDMWMdlMapCursor_vtableRead,0,0,0);
}
void *beNDMWMdlMapCursor_getMetaCall(){return beNDMWMdlMapCursor_getMeta();}
void *fn_8033A210(void *object){
 fn_8033A414();
 return fn_8006546C(lbl_805361F4,object);
}
void *fn_8033A250(){
 if(!lbl_805361F4) lbl_805361F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F4;
}
void *beNDMWMdlMapBase_getMeta(){
 if(!lbl_805361F4 || !(reinterpret_cast<unsigned int *>(lbl_805361F4)[0x24/4]&4)) fn_8033A414();
 return lbl_805361F4;
}
}
#pragma pop
