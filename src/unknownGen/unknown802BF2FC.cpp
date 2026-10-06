#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void fn_802BF45C();
extern char lbl_8041E170[];
extern char lbl_804CFCAC[];
extern void *lbl_8053496C;
extern void *lbl_805621F4;
void *fn_802BF350();
void fn_802BF39C();
void fn_802BF3C4();
void *fn_802BF43C();
}
extern "C" {
void *fn_802BF2FC(){
 if(!lbl_8053496C) lbl_8053496C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053496C;
}
void *fn_802BF350(){
 if(!lbl_8053496C || !(reinterpret_cast<unsigned int *>(lbl_8053496C)[0x24/4]&4)) fn_802BF39C();
 return lbl_8053496C;
}
void fn_802BF39C(){
 fn_80066188((int)fn_802BF3C4);
}
void fn_802BF3C4(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_8053496C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802BF43C,(int)lbl_8041E170,212,0,(int)fn_802BF45C,0,(int)lbl_804CFCAC);
}
void *fn_802BF43C(){return fn_802BF350();}
}
#pragma pop
