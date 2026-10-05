#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AF31C();
void *fn_800AFF90();
void fn_800AFFCC();
void fn_800B013C();
extern char lbl_804786DC[];
extern void *lbl_80562548;
extern void *lbl_805625B0;
void fn_800B00A4();
void *fn_800B0114();
void *fn_800B0134();
}
extern "C" {
void fn_800B007C(){
 fn_80066188((int)fn_800B00A4);
}
void fn_800B00A4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625B0,(int)fn_800AF31C,(int)fn_800B0134,(int)fn_800B0114,(int)lbl_804786DC,44,(int)fn_800AFFCC,(int)fn_800B013C,0,0);
}
void *fn_800B0114(){return fn_800AFF90();}
void *fn_800B0134(){return lbl_80562548;}
}
#pragma pop
