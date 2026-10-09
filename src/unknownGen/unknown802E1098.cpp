#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beChangePosTransformInfo_getMeta();
void beChangePosTransformInfo_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802E133C();
extern char lbl_80420A58[];
extern char lbl_805355D4[];
extern void *lbl_805355D8;
extern void *lbl_805621F4;
void beChangePosTransformInfo_register();
void *beChangePosTransformInfo_getMetaCall();
}
extern "C" {
void fn_802E1098(){
 fn_80066188((int)beChangePosTransformInfo_register);
}
void beChangePosTransformInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355D4,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beChangePosTransformInfo_getMetaCall,(int)lbl_80420A58,28,(int)beChangePosTransformInfo_vtableRead,0,0,0);
}
void *beChangePosTransformInfo_getMetaCall(){return beChangePosTransformInfo_getMeta();}
void *fn_802E114C(void *object){
 fn_802E133C();
 return fn_8006546C(lbl_805355D8,object);
}
void *fn_802E118C(){
 if(!lbl_805355D8) lbl_805355D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805355D8;
}
void *beChangePosTransform_getMeta(){
 if(!lbl_805355D8 || !(reinterpret_cast<unsigned int *>(lbl_805355D8)[0x24/4]&4)) fn_802E133C();
 return lbl_805355D8;
}
}
#pragma pop
