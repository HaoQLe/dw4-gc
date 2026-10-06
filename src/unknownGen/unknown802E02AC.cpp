#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802E0218();
void fn_802E0264();
void fn_802E065C();
extern char lbl_804209F0[];
extern char lbl_805355B8[];
extern void *lbl_805355BC;
void fn_802E02D4();
void *fn_802E0340();
}
extern "C" {
void fn_802E02AC(){
 fn_80066188((int)fn_802E02D4);
}
void fn_802E02D4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355B8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802E0340,(int)lbl_804209F0,8,(int)fn_802E0264,0,0,0);
}
void *fn_802E0340(){return fn_802E0218();}
void *fn_802E0360(){
 if(!lbl_805355BC || !(reinterpret_cast<unsigned int *>(lbl_805355BC)[0x24/4]&4)) fn_802E065C();
 return lbl_805355BC;
}
}
#pragma pop
