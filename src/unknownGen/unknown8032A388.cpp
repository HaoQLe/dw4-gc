#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelectE0_getMeta();
void beNDMWStatusSelectE0_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_8032A5C4();
extern char lbl_80453610[];
extern char lbl_80535D94[];
extern void *lbl_80535D98;
void beNDMWStatusSelectE0_register();
void *beNDMWStatusSelectE0_getMetaCall();
}
extern "C" {
void fn_8032A388(){
 fn_80066188((int)beNDMWStatusSelectE0_register);
}
void beNDMWStatusSelectE0_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D94,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelectE0_getMetaCall,(int)lbl_80453610,112,(int)beNDMWStatusSelectE0_vtableRead,0,0,0);
}
void *beNDMWStatusSelectE0_getMetaCall(){return beNDMWStatusSelectE0_getMeta();}
void *fn_8032A43C(void *object){
 fn_8032A5C4();
 return fn_8006546C(lbl_80535D98,object);
}
void *beNDMWStatusSelect01_getMeta(){
 if(!lbl_80535D98 || !(reinterpret_cast<unsigned int *>(lbl_80535D98)[0x24/4]&4)) fn_8032A5C4();
 return lbl_80535D98;
}
}
#pragma pop
