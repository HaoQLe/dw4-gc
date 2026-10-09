#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlObject_getMeta();
void beNDMWMdlObject_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_8033A15C();
extern char lbl_80454670[];
extern char lbl_805361EC[];
extern void *lbl_805361F0;
extern void *lbl_805621F4;
void beNDMWMdlObject_register();
void *beNDMWMdlObject_getMetaCall();
}
extern "C" {
void fn_80339EA4(){
 fn_80066188((int)beNDMWMdlObject_register);
}
void beNDMWMdlObject_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361EC,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlObject_getMetaCall,(int)lbl_80454670,44,(int)beNDMWMdlObject_vtableRead,0,0,0);
}
void *beNDMWMdlObject_getMetaCall(){return beNDMWMdlObject_getMeta();}
void *fn_80339F58(void *object){
 fn_8033A15C();
 return fn_8006546C(lbl_805361F0,object);
}
void *fn_80339F98(){
 if(!lbl_805361F0) lbl_805361F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F0;
}
void *beNDMWMdlMapCursor_getMeta(){
 if(!lbl_805361F0 || !(reinterpret_cast<unsigned int *>(lbl_805361F0)[0x24/4]&4)) fn_8033A15C();
 return lbl_805361F0;
}
}
#pragma pop
