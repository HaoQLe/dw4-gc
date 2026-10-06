#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_8033B7DC();
void fn_8033B828();
void fn_8033BB68();
extern char lbl_80454790[];
extern char lbl_80536238[];
extern void *lbl_8053623C;
void fn_8033B9A0();
void *fn_8033BA0C();
}
extern "C" {
void fn_8033B978(){
 fn_80066188((int)fn_8033B9A0);
}
void fn_8033B9A0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536238,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_8033BA0C,(int)lbl_80454790,28,(int)fn_8033B828,0,0,0);
}
void *fn_8033BA0C(){return fn_8033B7DC();}
void *fn_8033BA2C(void *object){
 fn_8033BB68();
 return fn_8006546C(lbl_8053623C,object);
}
void *fn_8033BA6C(){
 if(!lbl_8053623C || !(reinterpret_cast<unsigned int *>(lbl_8053623C)[0x24/4]&4)) fn_8033BB68();
 return lbl_8053623C;
}
}
#pragma pop
