#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D4698();
void fn_802D46E4();
void fn_802D4998();
void fn_802E3D20();
extern char lbl_8041FD40[];
extern char lbl_804D1A70[];
extern char lbl_805351AC[];
void fn_802D48FC();
void *fn_802D4978();
}
extern "C" {
void fn_802D48D4(){
 fn_80066188((int)fn_802D48FC);
}
void fn_802D48FC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351AC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D4978,(int)lbl_8041FD40,44,(int)fn_802D46E4,(int)fn_802D4998,0,(int)lbl_804D1A70);
}
void *fn_802D4978(){return fn_802D4698();}
}
#pragma pop
