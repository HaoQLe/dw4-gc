#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_8033B7DC();
void fn_8033B828();
extern char lbl_80454790[];
extern char lbl_80536238[];
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
}
#pragma pop
