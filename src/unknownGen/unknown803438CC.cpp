#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80343880();
void fn_80343984();
extern char lbl_80455218[];
extern char lbl_80536768[];
void fn_803438F4();
void *fn_80343964();
}
extern "C" {
void fn_803438CC(){
 fn_80066188((int)fn_803438F4);
}
void fn_803438F4(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80536768,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80343964,(int)lbl_80455218,20,0,(int)fn_80343984,0,0);
}
void *fn_80343964(){return fn_80343880();}
}
#pragma pop
