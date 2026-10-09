#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlPBullet_getMeta();
void beNDMWMdlPBullet_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_80339EA4();
extern char lbl_8045465C[];
extern char lbl_805361E8[];
extern void *lbl_805361EC;
extern void *lbl_805621F4;
void beNDMWMdlPBullet_register();
void *beNDMWMdlPBullet_getMetaCall();
}
extern "C" {
void fn_80339BEC(){
 fn_80066188((int)beNDMWMdlPBullet_register);
}
void beNDMWMdlPBullet_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361E8,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPBullet_getMetaCall,(int)lbl_8045465C,44,(int)beNDMWMdlPBullet_vtableRead,0,0,0);
}
void *beNDMWMdlPBullet_getMetaCall(){return beNDMWMdlPBullet_getMeta();}
void *fn_80339CA0(void *object){
 fn_80339EA4();
 return fn_8006546C(lbl_805361EC,object);
}
void *fn_80339CE0(){
 if(!lbl_805361EC) lbl_805361EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361EC;
}
void *beNDMWMdlObject_getMeta(){
 if(!lbl_805361EC || !(reinterpret_cast<unsigned int *>(lbl_805361EC)[0x24/4]&4)) fn_80339EA4();
 return lbl_805361EC;
}
}
#pragma pop
