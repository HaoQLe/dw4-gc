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
void fn_80334758();
extern char lbl_80453E08[];
extern char lbl_80535FC8[];
extern void *lbl_80535FCC;
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
void *fn_803345BC(){
 if(!lbl_80535FCC || !(reinterpret_cast<unsigned int *>(lbl_80535FCC)[0x24/4]&4)) fn_80334758();
 return lbl_80535FCC;
}
}
#pragma pop
