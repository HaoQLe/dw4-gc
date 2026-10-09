#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlMapBase_getMeta();
void beNDMWMdlMapBase_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_8033A71C();
extern char lbl_80454694[];
extern char lbl_805361F4[];
extern void *lbl_805361F8;
extern void *lbl_805621F4;
void beNDMWMdlMapBase_register();
void *beNDMWMdlMapBase_getMetaCall();
}
extern "C" {
void fn_8033A414(){
 fn_80066188((int)beNDMWMdlMapBase_register);
}
void beNDMWMdlMapBase_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F4,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlMapBase_getMetaCall,(int)lbl_80454694,44,(int)beNDMWMdlMapBase_vtableRead,0,0,0);
}
void *beNDMWMdlMapBase_getMetaCall(){return beNDMWMdlMapBase_getMeta();}
void *fn_8033A4C8(void *object){
 fn_8033A71C();
 return fn_8006546C(lbl_805361F8,object);
}
void *fn_8033A508(){
 if(!lbl_805361F8) lbl_805361F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F8;
}
void *beNDMWMdlItem_getMeta(){
 if(!lbl_805361F8 || !(reinterpret_cast<unsigned int *>(lbl_805361F8)[0x24/4]&4)) fn_8033A71C();
 return lbl_805361F8;
}
}
#pragma pop
