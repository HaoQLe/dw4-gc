#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
void *fn_802BFAF8();
void fn_802BFB44();
void fn_802BFD30();
void fn_802BFEF4();
extern char lbl_8041E238[];
extern char lbl_805349C0[];
extern void *lbl_805349C4;
void fn_802BFBC0();
void *fn_802BFC2C();
}
extern "C" {
void fn_802BFB98(){
 fn_80066188((int)fn_802BFBC0);
}
void fn_802BFBC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349C0,(int)fn_802BFEF4,(int)fn_802BFAE8,(int)fn_802BFC2C,(int)lbl_8041E238,24,(int)fn_802BFB44,0,0,0);
}
void *fn_802BFC2C(){return fn_802BFAF8();}
void *fn_802BFC4C(){
 if(!lbl_805349C4 || !(reinterpret_cast<unsigned int *>(lbl_805349C4)[0x24/4]&4)) fn_802BFD30();
 return lbl_805349C4;
}
}
#pragma pop
