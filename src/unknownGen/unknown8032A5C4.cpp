#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelect01_getMeta();
void beNDMWStatusSelect01_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_8032A800();
extern char lbl_80453628[];
extern char lbl_80535D98[];
extern void *lbl_80535D9C;
void beNDMWStatusSelect01_register();
void *beNDMWStatusSelect01_getMetaCall();
}
extern "C" {
void fn_8032A5C4(){
 fn_80066188((int)beNDMWStatusSelect01_register);
}
void beNDMWStatusSelect01_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D98,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelect01_getMetaCall,(int)lbl_80453628,112,(int)beNDMWStatusSelect01_vtableRead,0,0,0);
}
void *beNDMWStatusSelect01_getMetaCall(){return beNDMWStatusSelect01_getMeta();}
void *fn_8032A678(void *object){
 fn_8032A800();
 return fn_8006546C(lbl_80535D9C,object);
}
void *beNDMWStatusSelect00_getMeta(){
 if(!lbl_80535D9C || !(reinterpret_cast<unsigned int *>(lbl_80535D9C)[0x24/4]&4)) fn_8032A800();
 return lbl_80535D9C;
}
}
#pragma pop
