#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_802E3284();
void fn_803250AC();
void *fn_80334420();
void fn_8033446C();
extern char lbl_80453E08[];
extern char lbl_80535FC8[];
void fn_80334530();
void *fn_8033459C();
}
extern "C" {
void fn_80334508(){
 fn_80066188((int)fn_80334530);
}
void fn_80334530(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FC8,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_8033459C,(int)lbl_80453E08,44,(int)fn_8033446C,0,0,0);
}
void *fn_8033459C(){return fn_80334420();}
}
#pragma pop
