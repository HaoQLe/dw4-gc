#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void *fn_80284DD0();
extern char lbl_80416A04[];
extern char lbl_80515C8C[];
void fn_80284E44();
void *fn_80284EAC();
}
extern "C" {
void fn_80284E1C(){
 fn_80066188((int)fn_80284E44);
}
void fn_80284E44(){
 fn_80284294();
 fn_80066204(1,(int)lbl_80515C8C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80284EAC,(int)lbl_80416A04,8,0,0,0,0);
}
void *fn_80284EAC(){return fn_80284DD0();}
}
#pragma pop
