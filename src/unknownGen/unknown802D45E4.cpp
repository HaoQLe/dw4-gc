#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802D44FC();
void fn_802D4548();
void fn_802D48D4();
void fn_802E3284();
extern char lbl_8041FCCC[];
extern char lbl_805351A8[];
extern void *lbl_805351AC;
void fn_802D460C();
void *fn_802D4678();
}
extern "C" {
void fn_802D45E4(){
 fn_80066188((int)fn_802D460C);
}
void fn_802D460C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351A8,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802D4678,(int)lbl_8041FCCC,44,(int)fn_802D4548,0,0,0);
}
void *fn_802D4678(){return fn_802D44FC();}
void *fn_802D4698(){
 if(!lbl_805351AC || !(reinterpret_cast<unsigned int *>(lbl_805351AC)[0x24/4]&4)) fn_802D48D4();
 return lbl_805351AC;
}
}
#pragma pop
