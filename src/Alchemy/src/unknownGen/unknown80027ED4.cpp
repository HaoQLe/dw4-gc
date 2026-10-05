#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80027D60();
void fn_80027D9C();
void fn_80027F94();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463F30[];
extern char lbl_80463F40[];
extern void *lbl_805616B0;
void fn_80027EFC();
void *fn_80027F74();
}
extern "C" {
void fn_80027ED4(){
 fn_80066188((int)fn_80027EFC);
}
void fn_80027EFC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616B0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80027F74,(int)lbl_80463F40,24,(int)fn_80027D9C,(int)fn_80027F94,0,(int)lbl_80463F30);
}
void *fn_80027F74(){return fn_80027D60();}
}
#pragma pop
