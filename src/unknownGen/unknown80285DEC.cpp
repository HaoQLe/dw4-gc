#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void *fn_80285DA0();
extern char lbl_80416B00[];
extern char lbl_80515CC8[];
void fn_80285E14();
void *fn_80285E7C();
}
extern "C" {
void fn_80285DEC(){
 fn_80066188((int)fn_80285E14);
}
void fn_80285E14(){
 fn_80284294();
 fn_80066204(1,(int)lbl_80515CC8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80285E7C,(int)lbl_80416B00,8,0,0,0,0);
}
void *fn_80285E7C(){return fn_80285DA0();}
}
#pragma pop
