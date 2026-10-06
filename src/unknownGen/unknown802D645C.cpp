#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D6300();
void fn_802D634C();
void fn_802D6624();
void fn_802E3908();
extern char lbl_8041FF50[];
extern char lbl_8053524C[];
extern void *lbl_80535250;
extern void *lbl_805621F4;
void fn_802D6484();
void *fn_802D64F0();
}
extern "C" {
void fn_802D645C(){
 fn_80066188((int)fn_802D6484);
}
void fn_802D6484(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053524C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D64F0,(int)lbl_8041FF50,32,(int)fn_802D634C,0,0,0);
}
void *fn_802D64F0(){return fn_802D6300();}
void *fn_802D6510(){
 if(!lbl_80535250) lbl_80535250=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535250;
}
void *fn_802D6564(){
 if(!lbl_80535250 || !(reinterpret_cast<unsigned int *>(lbl_80535250)[0x24/4]&4)) fn_802D6624();
 return lbl_80535250;
}
}
#pragma pop
